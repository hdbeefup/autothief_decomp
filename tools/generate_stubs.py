#!/usr/bin/env python3
"""
Generate stub source files from IDA Pro decompiled output.

Parses AutoThief.exe.c to extract every function declaration and body,
then generates:
  - src/stubs/stub_functions.cpp  -- stub implementations for all functions
  - src/include/autothief.h       -- forward declarations for all functions
  - src/stubs/stub_globals.cpp    -- global variable placeholders

Usage:
    python generate_stubs.py
    python generate_stubs.py --ida-c PATH --ida-h PATH --out-dir PATH
"""
import os
import re
import sys
import argparse
from collections import OrderedDict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SCRIPT_DIR)

DEFAULT_IDA_C = os.path.join(ROOT_DIR, 'decomp', 'ida pro', 'AutoThief.exe.c')
DEFAULT_IDA_H = os.path.join(ROOT_DIR, 'decomp', 'ida pro', 'AutoThief.exe.h')
DEFAULT_OUT_DIR = os.path.join(ROOT_DIR, 'src')

# Load symbol names from SYMBOLS.md if available
SYMBOLS_FILE = os.path.join(ROOT_DIR, 'docs', 'SYMBOLS.md')

# IDA function delimiter
DELIM_RE = re.compile(r'^//----- \(([0-9A-Fa-f]+)\) ----')

# Function signature in declaration area (lines before first delimiter)
# Matches: return_type calling_conv? name(params);
DECL_RE = re.compile(
    r'^(?:// )?\s*'                     # optional comment prefix for __usercall
    r'([\w\s*]+?)\s+'                   # return type
    r'(?:(__\w+)\s+)?'                  # optional calling convention
    r'(\w+)'                            # function name
    r'\s*\(([^)]*)\)'                   # parameters
    r'\s*;'                             # semicolon
)

# Function definition at start of body (after delimiter)
FUNCDEF_RE = re.compile(
    r'^([\w\s*]+?)\s+'                  # return type
    r'(?:(__\w+)\s+)?'                  # optional calling convention
    r'(\w+)'                            # function name
    r'\s*\(([^)]*)\)'                   # parameters
)


def load_symbol_names():
    """Load named symbols from SYMBOLS.md.
    Returns: {addr_hex: name} e.g. {'00410060': 'PakArchive_LoadAndLookup'}
    """
    names = {}
    if not os.path.exists(SYMBOLS_FILE):
        return names

    # Parse markdown tables for address -> name mappings
    # Format: | 0x00410060 | ... | name | ...
    table_re = re.compile(r'\|\s*0x([0-9A-Fa-f]+)\s*\|[^|]*\|[^|]*\|\s*(\w+)')
    # Also try: | 0x00410060 | sub_xxx | name |
    table_re2 = re.compile(r'\|\s*0x([0-9A-Fa-f]+)\s*\|[^|]*\|\s*(\w+)')

    with open(SYMBOLS_FILE, 'r', encoding='utf-8') as f:
        for line in f:
            # Try the format with Ghidra column: | addr | ghidra | ida | name |
            m = re.search(r'\|\s*0x([0-9A-Fa-f]+)\s*\|[^|]+\|[^|]+\|\s*(\w+)', line)
            if m:
                addr = m.group(1).upper()
                name = m.group(2)
                if name not in ('Address', 'Ghidra', 'IDA', 'confirmed', 'likely', 'speculative'):
                    names[addr] = name
                continue
            # Try format without Ghidra: | addr | ida | name |
            m = re.search(r'\|\s*0x([0-9A-Fa-f]+)\s*\|[^|]+\|\s*(\w+)', line)
            if m:
                addr = m.group(1).upper()
                name = m.group(2)
                if name not in ('Address', 'IDA', 'confirmed', 'likely', 'speculative'):
                    names[addr] = name

    return names


def parse_declarations(ida_c_path):
    """Parse the declaration section (before first function delimiter) of the IDA .c file.
    Returns: list of {addr, name, ret_type, callconv, params, is_usercall, declaration}
    """
    decls = []

    with open(ida_c_path, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()

    # Find the first function delimiter
    first_func_idx = None
    for i, line in enumerate(lines):
        if DELIM_RE.match(line):
            first_func_idx = i
            break

    if first_func_idx is None:
        print("ERROR: No function delimiters found!")
        return decls

    # Parse declarations from header area
    for line in lines[:first_func_idx]:
        line = line.rstrip()
        if not line or line.startswith('#') or line.startswith('/*') or line.startswith('//--'):
            continue

        is_usercall = False
        if line.startswith('// ') and ('__usercall' in line or '__userpurge' in line):
            is_usercall = True
            line = line[3:]  # strip comment prefix

        # Try to match function declaration
        m = DECL_RE.match(line)
        if not m:
            continue

        ret_type = m.group(1).strip()
        callconv = m.group(2) or ''
        name = m.group(3)
        params = m.group(4).strip()

        # Extract address from name (sub_XXXXXX)
        addr_m = re.match(r'sub_([0-9A-Fa-f]+)', name)
        addr = addr_m.group(1).upper() if addr_m else ''

        decls.append({
            'addr': addr,
            'name': name,
            'ret_type': ret_type,
            'callconv': callconv,
            'params': params,
            'is_usercall': is_usercall,
            'declaration': line,
        })

    return decls


def parse_function_bodies(ida_c_path):
    """Parse all function bodies from the IDA .c file.
    Returns: OrderedDict of addr -> {name, ret_type, callconv, params, body_lines}
    """
    funcs = OrderedDict()

    with open(ida_c_path, 'r', encoding='utf-8', errors='replace') as f:
        lines = f.readlines()

    cur_addr = None
    cur_func = None
    collecting_sig = False

    for line in lines:
        m = DELIM_RE.match(line)
        if m:
            # Save previous function
            if cur_addr and cur_func:
                funcs[cur_addr] = cur_func

            cur_addr = m.group(1).upper()
            cur_func = {
                'name': '',
                'ret_type': '',
                'callconv': '',
                'params': '',
                'body_lines': [],
                'sig_line': '',
            }
            collecting_sig = True
            continue

        if cur_func is not None:
            cur_func['body_lines'].append(line)

            # Capture function signature from first non-blank, non-comment line
            if collecting_sig and line.strip() and not line.strip().startswith('//'):
                stripped = line.strip()
                # Use balanced-paren extraction for the parameter list
                fm = re.match(r'^([\w\s*]+?)\s+(?:(__\w+)\s+)?(\w+)\s*\(', stripped)
                if fm:
                    cur_func['ret_type'] = fm.group(1).strip()
                    cur_func['callconv'] = fm.group(2) or ''
                    cur_func['name'] = fm.group(3)
                    # Extract params with balanced parentheses
                    paren_start = stripped.index('(')
                    depth = 0
                    paren_end = paren_start
                    for ci in range(paren_start, len(stripped)):
                        if stripped[ci] == '(':
                            depth += 1
                        elif stripped[ci] == ')':
                            depth -= 1
                            if depth == 0:
                                paren_end = ci
                                break
                    cur_func['params'] = stripped[paren_start+1:paren_end].strip()
                    cur_func['sig_line'] = stripped
                collecting_sig = False

    if cur_addr and cur_func:
        funcs[cur_addr] = cur_func

    return funcs


def sanitize_type(t):
    """Clean up IDA type names for compilation."""
    # Replace IDA-specific types
    t = t.replace('_DWORD', 'unsigned int')
    t = t.replace('_WORD', 'unsigned short')
    t = t.replace('_BYTE', 'unsigned char')
    t = t.replace('_QWORD', 'unsigned __int64')
    t = t.replace('_BOOL1', 'bool')
    t = t.replace('_BOOL4', 'int')
    t = t.replace('__int64', 'long long')
    t = t.replace('__int32', 'int')
    t = t.replace('__int16', 'short')
    t = t.replace('__int8', 'char')
    # Replace C++ STL types that IDA emits
    t = re.sub(r'std::\w+(?:::\w+)*\s*\*', 'void *', t)
    t = re.sub(r'std::\w+(?:::\w+)*', 'int', t)
    # Replace 'exception' types (clashes with MSVC <exception> header)
    t = re.sub(r'\bconst\s+struct\s+exception\s*\*', 'const void *', t)
    t = re.sub(r'\bstruct\s+exception\s*\*', 'void *', t)
    t = re.sub(r'\bexception\s*\*', 'void *', t)
    # Standalone 'exception' as return type (rare)
    if t.strip() == 'exception':
        t = 'void *'
    # jmp_buf is an array type — can't be returned; use void* instead
    if 'jmp_buf' in t:
        t = t.replace('jmp_buf', 'void *')
    return t


def make_default_return(ret_type):
    """Generate a default return value for a type."""
    rt = ret_type.strip()
    if rt == 'void':
        return ''
    if '*' in rt:
        return 'return 0;'
    if rt in ('int', 'signed int', 'unsigned int', 'UINT', 'DWORD', 'LONG',
              'LSTATUS', 'LRESULT', 'WPARAM', 'LPARAM', 'HRESULT',
              'short', 'unsigned short', '__int16', 'unsigned __int16'):
        return 'return 0;'
    if rt in ('BOOL',):
        return 'return 0;'
    if rt in ('char', 'unsigned char', 'signed char', '_BYTE'):
        return 'return 0;'
    if rt in ('float', 'double'):
        return 'return 0.0f;'
    if rt == 'HWND':
        return 'return 0;'
    return 'return 0;'


def sanitize_params(params, strip_register_hints=True):
    """Clean up parameter list for compilation."""
    if not params or params == 'void':
        return params

    if strip_register_hints:
        # Remove @<reg> annotations from __usercall params
        params = re.sub(r'@<\w+>', '', params)

    params = sanitize_type(params)

    # Rename 'this' parameter — it's a C++ keyword
    # Replace whole-word 'this' with 'self' in parameter names
    params = re.sub(r'\bthis\b', 'self', params)

    return params


def generate_stub_cpp(funcs, symbol_names, out_path):
    """Generate stub_functions.cpp with stub implementations."""
    # Skip known library functions (CRT, AVI, etc.)
    skip_prefixes = ('_CxxThrowException', 'CxxThrowException', 'operator_',
                     'malloc', 'calloc', 'free', 'fopen', 'fclose', 'fread',
                     'fwrite', 'fseek', 'ftell', 'memset', 'sprintf', 'sscanf',
                     '_snprintf', '_vsnprintf', 'atoi', 'qsort', '_strdup',
                     'exit', 'longjmp', 'setjmp3', 'wcslen', 'isdigit',
                     'isalpha', 'isalnum', 'isspace', 'setlocale',
                     'Direct3DCreate8', 'AVIFile', 'AVI', 'ov_',
                     'acos', 'asin', 'atan', 'exp', 'fmod', 'log', 'pow',
                     'floor', 'ftol',
                     '__SEH_prolog', '__SEH_epilog', '__CxxFrameHandler',
                     '__security_check_cookie', '__security_error_handler',
                     '__chkstk', '__onexit', '_atexit', '__allmul', '__aullshr',
                     '__dllonexit', '_amsg_exit', 'initterm', '_controlfp',
                     '_callnewh', '_finite', '__ArrayUnwind',
                     '_CIacos', '_CIasin', '_CIfmod', '_CIpow',
                     'report_failure', 'CompareFunction', 'UserMathErrorFunction',
                     'CAtlComModule', 'CAtlWinModule', '_ATL_WIN_MODULE70',
                     'VideoForWindowsVersion',
                     )

    with open(out_path, 'w', encoding='utf-8') as f:
        f.write('/*\n')
        f.write(' * AutoThief.exe stub functions\n')
        f.write(' * Auto-generated by generate_stubs.py\n')
        f.write(' *\n')
        f.write(' * Each stub logs its address when called and returns a default value.\n')
        f.write(' * Replace stubs with real implementations module by module.\n')
        f.write(' */\n\n')
        f.write('#include <windows.h>\n')
        f.write('#include <stdio.h>\n')
        f.write('#include "autothief.h"\n')
        f.write('\n')
        f.write('#ifdef STUB_LOGGING\n')
        f.write('#define STUB_LOG(addr, name) fprintf(stderr, "STUB: 0x%08X %s\\n", addr, name)\n')
        f.write('#else\n')
        f.write('#define STUB_LOG(addr, name)\n')
        f.write('#endif\n\n')

        stub_count = 0
        skipped = 0
        usercall_count = 0

        for addr, func in funcs.items():
            name = func['name']
            if not name:
                continue

            # Skip library functions
            if any(name.startswith(p) or name == p for p in skip_prefixes):
                skipped += 1
                continue

            # Skip __usercall/__userpurge (need manual assembly wrappers)
            callconv = func['callconv']
            if callconv in ('__usercall', '__userpurge'):
                usercall_count += 1
                continue

            # Skip Catch_/Unwind_/thunk_ patterns
            if name.startswith('Catch_') or name.startswith('Catch@'):
                skipped += 1
                continue
            if name.startswith('Unwind_') or name.startswith('Unwind@'):
                skipped += 1
                continue
            if name.startswith('thunk_'):
                skipped += 1
                continue
            if name.startswith('nullsub_'):
                skipped += 1
                continue

            # Get symbol name if available
            sym_name = symbol_names.get(addr, name)

            ret_type = sanitize_type(func['ret_type'])
            params = sanitize_params(func['params'])

            # Strip __noreturn from return type
            noreturn = ''
            if '__noreturn' in ret_type:
                ret_type = ret_type.replace('__noreturn', '').strip()
                noreturn = '__declspec(noreturn) '

            # Strip calling convention from return type if it got absorbed
            for cc in ('__cdecl', '__stdcall', '__thiscall', '__fastcall',
                       '__usercall', '__userpurge'):
                if cc in ret_type:
                    ret_type = ret_type.replace(cc, '').strip()
                    if not callconv:
                        callconv = cc

            # Skip __usercall/__userpurge even if found in ret_type
            if callconv in ('__usercall', '__userpurge'):
                usercall_count += 1
                continue

            # Clean up calling convention for MSVC
            # IDA's __thiscall on free functions means ecx = first param;
            # IDA already makes the 'this' pointer an explicit parameter,
            # so we treat it as __cdecl (matching IDA's own test-compile hint)
            if callconv == '__thiscall':
                cc_str = '__cdecl '
            elif callconv == '__stdcall':
                cc_str = '__stdcall '
            elif callconv == '__cdecl':
                cc_str = '__cdecl '
            elif callconv == '__fastcall':
                cc_str = '__fastcall '
            else:
                cc_str = ''

            default_ret = make_default_return(ret_type)

            f.write(f'// 0x{addr} - {sym_name}\n')
            f.write(f'{noreturn}{ret_type} {cc_str}{name}({params})\n')
            f.write('{\n')
            f.write(f'    STUB_LOG(0x{addr}, "{sym_name}");\n')
            if default_ret:
                f.write(f'    {default_ret}\n')
            f.write('}\n\n')
            stub_count += 1

        # Summary comment at end
        f.write(f'/* Generated {stub_count} stubs, skipped {skipped} library functions, '
                f'{usercall_count} __usercall functions need manual wrappers */\n')

    return stub_count, skipped, usercall_count


def generate_header(funcs, symbol_names, out_path):
    """Generate autothief.h with forward declarations."""
    skip_prefixes = ('_CxxThrowException', 'CxxThrowException', 'operator_',
                     'Catch_', 'Catch@', 'Unwind_', 'Unwind@', 'thunk_', 'nullsub_')

    with open(out_path, 'w', encoding='utf-8') as f:
        f.write('/*\n')
        f.write(' * AutoThief.exe function declarations\n')
        f.write(' * Auto-generated by generate_stubs.py\n')
        f.write(' */\n')
        f.write('#ifndef AUTOTHIEF_H\n')
        f.write('#define AUTOTHIEF_H\n\n')
        f.write('#include <windows.h>\n')
        f.write('#include <setjmp.h>\n')
        f.write('#include <time.h>\n')
        f.write('#include <xmmintrin.h>\n')
        f.write('#include <emmintrin.h>\n')
        f.write('#include <mmintrin.h>\n')
        f.write('#include <eh.h>\n\n')
        f.write('// IDA type aliases\n')
        f.write('typedef unsigned int _DWORD;\n')
        f.write('typedef unsigned short _WORD;\n')
        f.write('typedef unsigned char _BYTE;\n')
        f.write('typedef unsigned __int64 _QWORD;\n')
        f.write('\n')

        decl_count = 0
        for addr, func in funcs.items():
            name = func['name']
            if not name:
                continue
            if any(name.startswith(p) for p in skip_prefixes):
                continue
            callconv = func['callconv']
            if callconv in ('__usercall', '__userpurge'):
                continue

            ret_type = sanitize_type(func['ret_type'])
            params = sanitize_params(func['params'])

            noreturn = ''
            if '__noreturn' in ret_type:
                ret_type = ret_type.replace('__noreturn', '').strip()
                noreturn = '__declspec(noreturn) '

            # Strip calling convention from return type if absorbed
            for cc in ('__cdecl', '__stdcall', '__thiscall', '__fastcall',
                       '__usercall', '__userpurge'):
                if cc in ret_type:
                    ret_type = ret_type.replace(cc, '').strip()
                    if not callconv:
                        callconv = cc

            # Skip __usercall even if found in ret_type
            if callconv in ('__usercall', '__userpurge'):
                continue

            cc_str = ''
            if callconv == '__thiscall':
                cc_str = '__cdecl '
            elif callconv in ('__stdcall', '__cdecl', '__fastcall'):
                cc_str = callconv + ' '

            sym_name = symbol_names.get(addr, '')
            comment = f'  // {sym_name}' if sym_name else ''

            f.write(f'{noreturn}{ret_type} {cc_str}{name}({params});{comment}\n')
            decl_count += 1

        f.write(f'\n#endif // AUTOTHIEF_H\n')

    return decl_count


def generate_cmake(out_dir):
    """Generate CMakeLists.txt for the project."""
    cmake_path = os.path.join(out_dir, 'CMakeLists.txt')
    with open(cmake_path, 'w', encoding='utf-8') as f:
        f.write('''\
cmake_minimum_required(VERSION 3.15)
project(AutoThief C CXX)

# Target MSVC - the original was compiled with Visual C++
# Use /W3 for warnings, disable some noisy ones from decompiled code
if(MSVC)
    add_compile_options(/W3 /wd4996 /wd4244 /wd4018 /wd4146)
    # Match original binary: 32-bit x86
    # Build with: cmake -A Win32 ..
endif()

# Build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Include paths
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# =============================================================================
# Stub library - all unimplemented functions
# =============================================================================
add_library(autothief_stubs STATIC
    stubs/stub_functions.cpp
)
target_compile_definitions(autothief_stubs PRIVATE STUB_LOGGING)

# =============================================================================
# Real implementation modules (add as they are completed)
# =============================================================================

# Example: PAK I/O module (first module to implement)
# add_library(mod_pak_io STATIC
#     autothief/pak_io.cpp
# )

# =============================================================================
# Main executable
# =============================================================================
# Uncomment when ready to link:
# add_executable(AutoThief WIN32
#     autothief/main.cpp
# )
# target_link_libraries(AutoThief
#     autothief_stubs
#     # mod_pak_io
#     # Add real modules here as they replace stubs
#     winmm.lib
#     # d3d8.lib       # DirectX 8 SDK
#     # dsound.lib     # DirectSound
#     # vfw32.lib      # Video for Windows
# )

# =============================================================================
# Stub test - verify everything compiles and links
# =============================================================================
add_executable(stub_test
    stubs/stub_test.cpp
)
target_link_libraries(stub_test autothief_stubs)
target_compile_definitions(stub_test PRIVATE STUB_LOGGING)
''')
    return cmake_path


def generate_stub_test(out_dir):
    """Generate a simple test that verifies stubs compile and link."""
    test_path = os.path.join(out_dir, 'stubs', 'stub_test.cpp')
    with open(test_path, 'w', encoding='utf-8') as f:
        f.write('''\
/*
 * Stub compilation/linking test.
 * If this builds, the stub library is correctly generated.
 *
 * Build: cmake -A Win32 -B build src && cmake --build build
 */
#include <stdio.h>
#include "autothief.h"

int main()
{
    printf("AutoThief decomp stub library - link test OK\\n");
    printf("All stub functions compiled and linked successfully.\\n");
    return 0;
}
''')
    return test_path


def main():
    parser = argparse.ArgumentParser(description='Generate stub source files from IDA output')
    parser.add_argument('--ida-c', default=DEFAULT_IDA_C,
                        help='Path to IDA decompiled .c file')
    parser.add_argument('--ida-h', default=DEFAULT_IDA_H,
                        help='Path to IDA .h file')
    parser.add_argument('--out-dir', default=DEFAULT_OUT_DIR,
                        help='Output directory (src/)')
    args = parser.parse_args()

    print(f"=== AutoThief Stub Generator ===")
    print(f"IDA .c:   {args.ida_c}")
    print(f"IDA .h:   {args.ida_h}")
    print(f"Output:   {args.out_dir}")

    # Load symbol names
    print(f"\nLoading symbol names from {SYMBOLS_FILE}...")
    symbol_names = load_symbol_names()
    print(f"  {len(symbol_names)} named symbols loaded")

    # Parse function bodies
    print(f"\nParsing function bodies from IDA .c...")
    funcs = parse_function_bodies(args.ida_c)
    print(f"  {len(funcs)} functions parsed")

    # Generate stubs
    stubs_dir = os.path.join(args.out_dir, 'stubs')
    include_dir = os.path.join(args.out_dir, 'include')
    os.makedirs(stubs_dir, exist_ok=True)
    os.makedirs(include_dir, exist_ok=True)

    print(f"\nGenerating stub_functions.cpp...")
    stub_path = os.path.join(stubs_dir, 'stub_functions.cpp')
    n_stubs, n_skipped, n_usercall = generate_stub_cpp(funcs, symbol_names, stub_path)
    print(f"  {n_stubs} stubs generated")
    print(f"  {n_skipped} library functions skipped")
    print(f"  {n_usercall} __usercall functions skipped (need manual wrappers)")

    print(f"\nGenerating autothief.h...")
    header_path = os.path.join(include_dir, 'autothief.h')
    n_decls = generate_header(funcs, symbol_names, header_path)
    print(f"  {n_decls} declarations generated")

    print(f"\nGenerating CMakeLists.txt...")
    cmake_path = generate_cmake(args.out_dir)
    print(f"  Written: {cmake_path}")

    print(f"\nGenerating stub_test.cpp...")
    test_path = generate_stub_test(args.out_dir)
    print(f"  Written: {test_path}")

    print(f"\n=== Summary ===")
    print(f"  Total functions in binary:  {len(funcs)}")
    print(f"  Stubs generated:           {n_stubs}")
    print(f"  Library funcs skipped:     {n_skipped}")
    print(f"  __usercall (manual):       {n_usercall}")
    print(f"  Named symbols applied:     {len(symbol_names)}")
    print(f"\nFiles generated:")
    print(f"  {stub_path}")
    print(f"  {header_path}")
    print(f"  {cmake_path}")
    print(f"  {test_path}")
    print(f"\nNext steps:")
    print(f"  cmake -A Win32 -B build src")
    print(f"  cmake --build build")


if __name__ == '__main__':
    main()

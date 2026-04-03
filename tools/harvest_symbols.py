#!/usr/bin/env python3
"""
Harvest function symbols from format spec docs and decompiled sources.

Scans docs/*_FORMAT.md for FUN_XXXXXXXX / sub_XXXXXX references and
extracts them with surrounding context to help build the symbol dictionary.

Usage:
    python harvest_symbols.py                    # scan docs/ directory
    python harvest_symbols.py --scan-strings     # also scan decompiled .c for string refs
    python harvest_symbols.py --lua-match        # identify Lua 4.0 functions by error strings
"""
import os
import re
import sys
import argparse
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SCRIPT_DIR)
DOCS_DIR = os.path.join(ROOT_DIR, 'docs')
DECOMP_DIR = os.path.join(ROOT_DIR, 'decomp')

# Patterns
FUN_RE = re.compile(r'FUN_([0-9a-fA-F]{8})')
SUB_RE = re.compile(r'sub_([0-9a-fA-F]+)', re.IGNORECASE)
ADDR_RE = re.compile(r'0x([0-9a-fA-F]{6,8})\b')

# Known Lua 4.0 error strings -> function names
# These strings appear in Lua 4.0.1 source and uniquely identify functions
LUA40_STRINGS = {
    "constant table overflow":          ("luaH_set", "lhash.c"),
    "table overflow":                   ("luaH_next", "lhash.c"),
    "cannot change a protected tag":    ("luaT_realtag", "ltm.c"),
    "tag method must be a function":    ("luaT_settagmethod", "ltm.c"),
    "invalid tag":                      ("luaT_validevent", "ltm.c"),
    "too many local variables":         ("luaY_parser", "lparser.c"),
    "too many upvalues":                ("luaY_parser", "lparser.c"),
    "function at line":                 ("luaY_parser", "lparser.c"),
    "constructor too long":             ("constructor", "lparser.c"),
    "unexpected number":                ("luaY_lex", "llex.c"),
    "invalid escape sequence":          ("read_long_string", "llex.c"),
    "unfinished long string":           ("read_long_string", "llex.c"),
    "unfinished long comment":          ("read_long_string", "llex.c"),
    "input line too long":              ("luaY_lex", "llex.c"),
    "unfinished string":                ("read_string", "llex.c"),
    "lua_debug> ":                      ("lua_db_line", "ldblib.c"),
    "too many results to resume":       ("luaB_resume", "lbuiltin.c"),
    "too many arguments to resume":     ("luaB_resume", "lbuiltin.c"),
    "cannot resume a dead coroutine":   ("luaB_resume", "lbuiltin.c"),
    "cannot order":                     ("luaV_lessthan", "lvm.c"),
    "attempt to compare two":           ("luaV_lessthan", "lvm.c"),
    "stack overflow":                   ("luaD_checkstack", "ldo.c"),
    "error in error handling":          ("luaD_error", "ldo.c"),
    "cannot resume a normal coroutine": ("luaB_resume", "lbuiltin.c"),
    "bad argument":                     ("luaL_argerror", "lauxlib.c"),
    "wrong number of arguments":        ("luaL_check_args", "lauxlib.c"),
    "attempt to call a":                ("luaD_call", "ldo.c"),
    "chunk has too many lines":         ("luaY_parser", "lparser.c"),
    "unexpected end of file":           ("luaY_parser", "lparser.c"),
    "`for' index must be a number":     ("luaV_execute", "lvm.c"),
    "`for' step must be a number":      ("luaV_execute", "lvm.c"),
    "`for' limit must be a number":     ("luaV_execute", "lvm.c"),
    "Lua 4.0":                          ("lua_version", "lstate.c"),
    "not enough memory":                ("luaM_realloc", "lmem.c"),
    "%s near ":                         ("luaY_syntaxerror", "lparser.c"),
}

# Known zlib strings -> function identification
ZLIB_STRINGS = {
    "incorrect header check":           ("inflate", "inflate.c"),
    "unknown compression method":       ("inflate", "inflate.c"),
    "invalid window size":              ("inflate", "inflate.c"),
    "incorrect data check":             ("inflate", "inflate.c"),
    "invalid block type":               ("inflate_blocks", "infblock.c"),
    "invalid stored block lengths":     ("inflate_blocks", "infblock.c"),
    "too many length or distance symbols": ("inflate_trees_dynamic", "inftrees.c"),
    "invalid code lengths set":         ("inflate_trees_dynamic", "inftrees.c"),
    "invalid literal/length code":      ("inflate_codes", "infcodes.c"),
    "invalid distance code":            ("inflate_codes", "infcodes.c"),
    "1.1.":                             ("zlibVersion", "zlib.c"),
    "need dictionary":                  ("inflate", "inflate.c"),
    "incompatible version":             ("deflateInit2_", "deflate.c"),
    "buffer error":                     ("zError", "zutil.c"),
}


def harvest_docs():
    """Extract all function references from format spec docs."""
    symbols = {}  # addr -> {ghidra, ida, descriptions, sources}

    for fname in sorted(os.listdir(DOCS_DIR)):
        if not fname.endswith('.md') or fname == 'SYMBOLS.md' or fname == 'TODO.md':
            continue
        fpath = os.path.join(DOCS_DIR, fname)
        with open(fpath, 'r', encoding='utf-8') as f:
            lines = f.readlines()

        for i, line in enumerate(lines):
            # Find FUN_ references
            for m in FUN_RE.finditer(line):
                addr = '0x' + m.group(1).upper()
                ghidra_name = f'FUN_{m.group(1).lower()}'
                if addr not in symbols:
                    symbols[addr] = {
                        'ghidra': ghidra_name,
                        'ida': '',
                        'descriptions': [],
                        'sources': set(),
                    }
                symbols[addr]['sources'].add(fname)

                # Try to extract description from context
                context = line.strip()
                # Clean up markdown table formatting
                context = re.sub(r'\|', ' ', context).strip()
                context = re.sub(r'\s+', ' ', context)
                if context and context not in symbols[addr]['descriptions']:
                    symbols[addr]['descriptions'].append(context)

            # Find sub_ references
            for m in SUB_RE.finditer(line):
                addr_hex = m.group(1).upper()
                if len(addr_hex) < 6:
                    continue
                addr = '0x00' + addr_hex if len(addr_hex) == 6 else '0x' + addr_hex
                ida_name = f'sub_{addr_hex}'
                if addr in symbols:
                    symbols[addr]['ida'] = ida_name
                else:
                    symbols[addr] = {
                        'ghidra': '',
                        'ida': ida_name,
                        'descriptions': [],
                        'sources': {fname},
                    }

    return symbols


def scan_strings_in_decomp(decomp_file):
    """Scan decompiled C file for functions containing identifying strings.
    Returns: {addr: [strings_found]}"""
    func_strings = defaultdict(list)

    if not os.path.exists(decomp_file):
        print(f"  File not found: {decomp_file}")
        return func_strings

    delim_re = re.compile(r'^//----- \(([0-9A-Fa-f]+)\) ----')
    string_re = re.compile(r'"([^"]{4,})"')

    cur_addr = None
    with open(decomp_file, 'r', encoding='utf-8', errors='replace') as f:
        for line in f:
            m = delim_re.match(line)
            if m:
                cur_addr = '0x' + m.group(1).upper()
                continue
            if cur_addr:
                for sm in string_re.finditer(line):
                    s = sm.group(1)
                    # Skip very common/boring strings
                    if s in ('%d', '%s', '%f', '%x', '\\n', '\\r\\n', '\\0'):
                        continue
                    func_strings[cur_addr].append(s)

    return func_strings


def match_lua_functions(func_strings):
    """Match functions against known Lua 4.0 error strings."""
    matches = {}  # addr -> (lua_name, lua_file, matched_string)

    for addr, strings in func_strings.items():
        for s in strings:
            for lua_str, (lua_name, lua_file) in LUA40_STRINGS.items():
                if lua_str in s:
                    if addr not in matches:
                        matches[addr] = (lua_name, lua_file, lua_str)
                    break

    return matches


def match_zlib_functions(func_strings):
    """Match functions against known zlib error strings."""
    matches = {}

    for addr, strings in func_strings.items():
        for s in strings:
            for zlib_str, (zlib_name, zlib_file) in ZLIB_STRINGS.items():
                if zlib_str in s:
                    if addr not in matches:
                        matches[addr] = (zlib_name, zlib_file, zlib_str)
                    break

    return matches


def main():
    parser = argparse.ArgumentParser(description='Harvest symbols from docs and decomp')
    parser.add_argument('--scan-strings', action='store_true',
                        help='Scan IDA decompiled .c for string references')
    parser.add_argument('--lua-match', action='store_true',
                        help='Identify Lua 4.0 functions by error strings')
    parser.add_argument('--zlib-match', action='store_true',
                        help='Identify zlib functions by error strings')
    parser.add_argument('--all', action='store_true',
                        help='Run all analysis passes')
    args = parser.parse_args()

    if args.all:
        args.scan_strings = True
        args.lua_match = True
        args.zlib_match = True

    # Phase 1: Harvest from docs
    print("=== Harvesting from docs/ ===")
    symbols = harvest_docs()
    print(f"  Found {len(symbols)} unique addresses referenced in docs")

    for addr in sorted(symbols.keys()):
        info = symbols[addr]
        names = f"{info['ghidra']}/{info['ida']}" if info['ida'] else info['ghidra']
        srcs = ', '.join(sorted(info['sources']))
        print(f"  {addr}  {names:<40s}  [{srcs}]")
        for desc in info['descriptions'][:2]:
            if len(desc) > 100:
                desc = desc[:97] + '...'
            print(f"          {desc}")

    # Phase 2: String scanning
    if args.scan_strings or args.lua_match or args.zlib_match:
        ida_file = os.path.join(DECOMP_DIR, 'ida pro', 'AutoThief.exe.c')
        print(f"\n=== Scanning strings in {ida_file} ===")
        func_strings = scan_strings_in_decomp(ida_file)
        print(f"  Scanned {len(func_strings)} functions with string literals")

        # Show functions with interesting strings
        if args.scan_strings:
            interesting = {
                'pbeScene': [], 'pbeTexture': [], 'CTerrain': [],
                'CRoadNetwork': [], 'CPMTemplate': [], 'InsertTerrain': [],
                'InsertRoadNetwork': [], 'InsertParticleSource': [],
                'OnKeyDn': [], 'OnKeyUp': [], 'Config.ini': [],
            }
            for addr, strings in func_strings.items():
                for s in strings:
                    for key in interesting:
                        if key in s:
                            interesting[key].append((addr, s))

            print("\n  String cross-references (game-specific):")
            for key, refs in sorted(interesting.items()):
                if refs:
                    print(f"\n  '{key}':")
                    for addr, s in refs[:5]:
                        print(f"    {addr}: \"{s[:80]}\"")

        # Phase 3: Lua matching
        if args.lua_match:
            print(f"\n=== Lua 4.0 function matching ===")
            lua_matches = match_lua_functions(func_strings)
            print(f"  Matched {len(lua_matches)} functions to Lua 4.0 source")
            for addr in sorted(lua_matches.keys()):
                name, src, matched = lua_matches[addr]
                print(f"  {addr}  {name:<30s}  ({src})  matched: \"{matched}\"")

        # Phase 4: zlib matching
        if args.zlib_match:
            print(f"\n=== zlib function matching ===")
            zlib_matches = match_zlib_functions(func_strings)
            print(f"  Matched {len(zlib_matches)} functions to zlib source")
            for addr in sorted(zlib_matches.keys()):
                name, src, matched = zlib_matches[addr]
                print(f"  {addr}  {name:<30s}  ({src})  matched: \"{matched}\"")


if __name__ == '__main__':
    main()

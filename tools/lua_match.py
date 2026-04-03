#!/usr/bin/env python3
"""
Deep Lua 4.0.1 function matching against AutoThief decompilation.

Uses the complete Lua 4.0.1 source string database to identify as many
Lua functions as possible in the decompiled binary. Matches by unique
string literal combinations per function.

Usage:
    python lua_match.py                          # run matching
    python lua_match.py --decomp PATH            # specify decompiled .c file
    python lua_match.py --lua-src PATH           # specify Lua 4.0.1 src directory
    python lua_match.py --update-symbols         # append results to docs/SYMBOLS.md
"""
import os
import re
import sys
import argparse
from collections import defaultdict

SCRIPT_DIR = os.path.dirname(os.path.abspath(__file__))
ROOT_DIR = os.path.dirname(SCRIPT_DIR)

# Default paths
DEFAULT_DECOMP = os.path.join(ROOT_DIR, 'decomp', 'ida pro', 'AutoThief.exe.c')
DEFAULT_LUA_SRC = r'N:\Downloads\lua-4.0.1\src'

# ============================================================================
# Complete Lua 4.0.1 function string database
# Extracted from Lua 4.0.1 source: every function and its string literals
# ============================================================================

LUA401_FUNCTIONS = {
    "lapi.c": [
        ("lua_typename", ["no value"]),
        ("lua_pushusertag", ["invalid tag for a userdata (%d)"]),
        ("lua_ref", ["reference table overflow"]),
        ("lua_settag", ["cannot change the tag of a %.20s"]),
        ("lua_getn", ["n"]),
        # Functions with no strings (matched by elimination/call pattern):
        ("luaA_index", []),
        ("luaA_indexAcceptable", []),
        ("luaA_pushobject", []),
        ("lua_stackspace", []),
        ("lua_gettop", []),
        ("lua_settop", []),
        ("lua_remove", []),
        ("lua_insert", []),
        ("lua_pushvalue", []),
        ("lua_type", []),
        ("lua_iscfunction", []),
        ("lua_isnumber", []),
        ("lua_isstring", []),
        ("lua_tag", []),
        ("lua_equal", []),
        ("lua_lessthan", []),
        ("lua_tonumber", []),
        ("lua_tostring", []),
        ("lua_strlen", []),
        ("lua_tocfunction", []),
        ("lua_touserdata", []),
        ("lua_topointer", []),
        ("lua_pushnil", []),
        ("lua_pushnumber", []),
        ("lua_pushlstring", []),
        ("lua_pushstring", []),
        ("lua_pushcclosure", []),
        ("lua_getglobal", []),
        ("lua_gettable", []),
        ("lua_rawget", []),
        ("lua_rawgeti", []),
        ("lua_getglobals", []),
        ("lua_getref", []),
        ("lua_newtable", []),
        ("lua_setglobal", []),
        ("lua_settable", []),
        ("lua_rawset", []),
        ("lua_rawseti", []),
        ("lua_setglobals", []),
        ("lua_rawcall", []),
        ("lua_getgcthreshold", []),
        ("lua_getgccount", []),
        ("lua_setgcthreshold", []),
        ("lua_unref", []),
        ("lua_next", []),
        ("lua_concat", []),
        ("lua_newuserdata", []),
    ],
    "lcode.c": [
        ("luaK_fixjump", ["control structure too long"]),
        ("luaK_deltastack", ["function or expression too complex"]),
        ("number_constant", ["constant table overflow"]),
        ("codelineinfo", ["line info overflow"]),
        ("luaK_code2", ["code size overflow"]),
        ("luaK_error", []),
        ("previous_instruction", []),
        ("luaK_jump", []),
        ("luaK_getjump", []),
        ("luaK_getlabel", []),
        ("luaK_kstr", []),
        ("luaK_number", []),
        ("luaK_adjuststack", []),
        ("luaK_lastisopen", []),
        ("luaK_setcallreturns", []),
        ("discharge", []),
        ("discharge1", []),
        ("luaK_storevar", []),
        ("invertjump", []),
        ("luaK_patchlistaux", []),
        ("luaK_patchlist", []),
        ("need_value", []),
        ("luaK_concat", []),
        ("luaK_testgo", []),
        ("luaK_goiftrue", []),
        ("luaK_goiffalse", []),
        ("code_label", []),
        ("luaK_tostack", []),
        ("luaK_prefix", []),
        ("luaK_infix", []),
        ("luaK_posfix", []),
        ("luaK_code0", []),
        ("luaK_code1", []),
    ],
    "ldebug.c": [
        ("funcinfo", ["=C", "C", "value for `lua_getinfo' is not a function", "main"]),
        ("getname", ["global", "tag-method"]),
        ("getobjname", ["global", "local", "field"]),
        ("luaG_typeerror", ["attempt to %.30s %.20s `%.40s' (a %.10s value)", "attempt to %.30s a %.10s value"]),
        ("luaG_ordererror", ["attempt to compare two %.10s values", "attempt to compare %.10s with %.10s"]),
        ("infoLproto", ["Lua"]),
        ("lua_setlocal", ["("]),
        ("setnormalized", []),
        ("isLmark", []),
        ("lua_setcallhook", []),
        ("lua_setlinehook", []),
        ("aux_stackedfunction", []),
        ("lua_getstack", []),
        ("nups", []),
        ("luaG_getline", []),
        ("currentpc", []),
        ("currentline", []),
        ("getluaproto", []),
        ("lua_getlocal", []),
        ("travtagmethods", []),
        ("travglobals", []),
        ("lua_getinfo", []),
        ("pushpc", []),
        ("luaG_symbexec", []),
        ("getfuncname", []),
        ("luaG_binerror", []),
    ],
    "ldo.c": [
        ("luaD_checkstack", ["stack overflow"]),
        ("luaD_lineHook", ["line"]),
        ("parse_file", ["@", "(stdin)"]),
        ("parse_buffer", ["?"]),
        ("luaD_breakrun", ["unable to recover; exiting\n"]),
        ("luaD_init", []),
        ("restore_stack_limit", []),
        ("luaD_adjusttop", []),
        ("luaD_openstack", []),
        ("dohook", []),
        ("luaD_callHook", []),
        ("callCclosure", []),
        ("luaD_callTM", []),
        ("luaD_call", []),
        ("f_call", []),
        ("lua_call", []),
        ("f_parser", []),
        ("protectedparser", []),
        ("lua_dofile", []),
        ("lua_dobuffer", []),
        ("lua_dostring", []),
        ("message", []),
        ("lua_error", []),
        ("luaD_runprotected", []),
    ],
    "lfunc.c": [
        ("luaF_newclosure", []),
        ("luaF_newproto", []),
        ("protosize", []),
        ("luaF_protook", []),
        ("luaF_freeproto", []),
        ("luaF_freeclosure", []),
        ("luaF_getlocalname", []),
    ],
    "lgc.c": [
        ("protomark", []),
        ("markstack", []),
        ("marklock", []),
        ("markclosure", []),
        ("marktagmethods", []),
        ("markobject", []),
        ("markall", []),
        ("hasmark", []),
        ("invalidaterefs", []),
        ("collectproto", []),
        ("collectclosure", []),
        ("collecttable", []),
        ("checktab", []),
        ("collectstrings", []),
        ("collectudata", []),
        ("checkMbuffer", []),
        ("callgcTM", []),
        ("callgcTMudata", []),
        ("luaC_collect", []),
        ("luaC_collectgarbage", []),
        ("luaC_checkGC", []),
    ],
    "llex.c": [
        ("luaX_checklimit", ["too many %.50s (limit=%d)"]),
        ("luaX_syntaxerror", ["%.99s;\n  last token read: `%.30s' at line %d in %.80s"]),
        ("luaX_invalidchar", ["invalid control char"]),
        ("inclinenumber", ["lines in a chunk"]),
        ("read_number", ["ambiguous syntax (decimal point x string concatenation)", "malformed number"]),
        ("read_long_string", ["unfinished long string"]),
        ("read_string", ["unfinished string", "escape sequence too large"]),
        ("luaX_lex", ["unexpected `$' (pragmas are no longer supported)"]),
        ("luaX_init", []),
        ("luaX_error", []),
        ("luaX_token2str", []),
        ("luaX_setinput", []),
        ("readname", []),
    ],
    "lmem.c": [
        ("luaM_realloc", ["memory allocation error: block too big"]),
        ("luaM_growaux", []),
    ],
    "lobject.c": [
        ("luaO_chunkid", ["file `...%s'", "file `%s'", "string \""]),
        ("luaO_verror", []),
        ("luaO_power2", []),
        ("luaO_equalObj", []),
        ("luaO_openspace", []),
        ("luaO_str2d", []),
    ],
    "lparser.c": [
        ("error_expected", ["`%.20s' expected"]),
        ("check_match", ["`%.20s' expected (to close `%.20s' at line %d)"]),
        ("string_constant", ["constant table overflow"]),
        ("str_checkname", ["<name> expected"]),
        ("new_localvar", ["local variables"]),
        ("singlevar", ["cannot access a variable in outer scope"]),
        ("indexupvalue", ["upvalues"]),
        ("pushupvalue", ["cannot access upvalue in main", "upvalue must be global or local to immediately outer scope"]),
        ("code_params", ["arg"]),
        ("pushclosure", ["constant table overflow"]),
        ("luaY_parser", ["<eof> expected"]),
        ("funcargs", ["function arguments expected"]),
        ("recfield", ["<name> or `[' expected"]),
        ("listfields", ["`item groups' in a list initializer"]),
        ("constructor", ["invalid constructor syntax", "elements in a table constructor"]),
        ("simpleexp", ["<expression> expected"]),
        ("assignment", ["variables in a multiple assignment"]),
        ("fornum", ["(limit)", "(step)"]),
        ("forlist", ["in", "(table)"]),
        ("forstat", ["`=' or `,' expected"]),
        ("localstat", []),
        ("funcname", []),
        ("funcstat", []),
        ("namestat", []),
        ("retstat", []),
        ("breakstat", ["no loop to break"]),
        ("stat", ["<statement> expected"]),
        ("parlist", ["<name> or `...' expected"]),
        ("body", ["self"]),
        ("chunk", []),
        ("next", []),
        ("lookahead", []),
        ("check", []),
        ("check_condition", []),
        ("optional", []),
        ("code_string", []),
        ("checkname", []),
        ("luaI_registerlocalvar", []),
        ("adjustlocalvars", []),
        ("removelocalvars", []),
        ("new_localvarstr", []),
        ("search_local", []),
        ("adjust_mult_assign", []),
        ("enterbreak", []),
        ("leavebreak", []),
        ("open_func", []),
        ("close_func", []),
        ("explist1", []),
        ("var_or_func_tail", []),
        ("var_or_func", []),
        ("recfields", []),
        ("constructor_part", []),
        ("exp1", []),
        ("getunopr", []),
        ("getbinopr", []),
        ("subexpr", []),
        ("expr", []),
        ("block_follow", []),
        ("block", []),
        ("cond", []),
        ("whilestat", []),
        ("repeatstat", []),
        ("forbody", []),
        ("test_then_block", []),
        ("ifstat", []),
    ],
    "lstate.c": [
        ("errormessage", ["(no message)", "error: %s\n"]),
        ("f_luaopen", []),
        ("lua_open", []),
        ("lua_close", []),
    ],
    "lstring.c": [
        ("luaS_init", []),
        ("luaS_freeall", []),
        ("hash_s", []),
        ("luaS_resize", []),
        ("newentry", []),
        ("luaS_newlstr", []),
        ("luaS_newudata", []),
        ("luaS_createudata", []),
        ("luaS_new", []),
        ("luaS_newfixed", []),
    ],
    "ltable.c": [
        ("luaH_getany", ["table index is nil"]),
        ("luaH_next", ["invalid key for `next'"]),
        ("setnodevector", ["table overflow"]),
        ("luaH_set", ["table index is nil"]),
        ("luaH_mainposition", []),
        ("luaH_getnum", []),
        ("luaH_getstr", []),
        ("luaH_get", []),
        ("luaH_remove", []),
        ("luaH_new", []),
        ("luaH_free", []),
        ("numuse", []),
        ("rehash", []),
        ("luaH_setint", []),
        ("luaH_setstrnum", []),
        ("luaH_getglobal", []),
    ],
    "ltm.c": [
        ("luaI_checkevent", ["event `%.50s' is deprecated", "event `gc' for tables is deprecated", "`%.50s' is not a valid event name"]),
        ("lua_newtag", ["tag table overflow"]),
        ("checktag", ["%d is not a valid tag"]),
        ("luaT_realtag", ["tag %d was not created by `newtag'"]),
        ("lua_settagmethod", ["cannot change `%.20s' tag method for type `%.20s'%.20s", " with default tag", "tag method must be a function (or nil)"]),
        ("luaT_validevent", []),
        ("findevent", []),
        ("luaT_init", []),
        ("lua_copytagmethods", []),
        ("luaT_tag", []),
        ("lua_gettagmethod", []),
        ("init_entry", []),
    ],
    "lundump.c": [
        ("unexpectedEOZ", ["unexpected end of file in `%.99s'"]),
        ("LoadCode", ["bad code in `%.99s'"]),
        ("LoadSignature", ["bad signature in `%.99s'"]),
        ("TestSize", ["virtual machine mismatch in `%.99s'"]),
        ("LoadHeader", ["too new", "too old", "unknown number format"]),
        ("luaU_undump", ["apparently contains more than one chunk"]),
        ("ZNAME", []),
        ("ezgetc", []),
        ("ezread", []),
        ("LoadBlock", []),
        ("LoadVector", []),
        ("LoadInt", []),
        ("LoadSize", []),
        ("LoadNumber", []),
        ("LoadString", []),
        ("LoadLocals", []),
        ("LoadLines", []),
        ("LoadConstants", []),
        ("LoadFunction", []),
        ("LoadChunk", []),
        ("luaU_endianess", []),
    ],
    "lvm.c": [
        ("call_arith", ["perform arithmetic on"]),
        ("luaV_strconc", ["string size overflow"]),
        ("luaV_lessthan", ["attempt to compare two"]),
        ("luaV_execute", ["`for' step must be a number", "`for' limit must be a number",
                          "`for' initial value must be a number", "`for' index must be a number",
                          "undefined operation", "`for' table must be a table"]),
        ("luaV_pack", ["n"]),
        ("luaV_tonumber", []),
        ("luaV_tostring", []),
        ("traceexec", []),
        ("luaV_closure", []),
        ("luaV_Cclosure", []),
        ("luaV_Lclosure", []),
        ("luaV_gettable", []),
        ("luaV_settable", []),
        ("luaV_getglobal", []),
        ("luaV_setglobal", []),
        ("call_binTM", []),
        ("luaV_strcomp", []),
        ("adjust_varargs", []),
    ],
    "lzio.c": [
        ("zmfilbuf", []),
        ("zmopen", []),
        ("zsopen", []),
        ("zffilbuf", []),
        ("zFopen", []),
        ("zread", []),
    ],
    "lib/lauxlib.c": [
        ("luaL_argerror", ["bad argument #%d to `%.50s' (%.100s)"]),
        ("type_error", ["%.8s expected, got %.8s"]),
        ("luaL_checkstack", ["stack overflow (%.30s)"]),
        ("luaL_checkany", ["value expected"]),
        ("luaL_findstring", []),
        ("luaL_checktype", []),
        ("luaL_check_lstr", []),
        ("luaL_opt_lstr", []),
        ("luaL_check_number", []),
        ("luaL_opt_number", []),
        ("luaL_openlib", []),
        ("luaL_verror", []),
        ("emptybuffer", []),
        ("adjuststack", []),
        ("luaL_prepbuffer", []),
        ("luaL_addlstring", []),
        ("luaL_addstring", []),
        ("luaL_pushresult", []),
        ("luaL_addvalue", []),
        ("luaL_buffinit", []),
    ],
    "lib/lbaselib.c": [
        ("luaB__ERRORMESSAGE", ["error: ", "\n  <%.70s: line %d>"]),
        ("luaB_print", ["tostring", "`tostring' must return a string to `print'"]),
        ("luaB_tonumber", ["base out of range"]),
        ("luaB_settagmethod", ["gc", "deprecated use: cannot set the `gc' tag method from Lua"]),
        ("luaB_gettagmethod", ["gc", "deprecated use: cannot get the `gc' tag method from Lua"]),
        ("passresults", ["ok", "run-time error", "file error", "syntax error", "memory error", "error in error handling"]),
        ("luaB_dostring", ["`dostring' cannot run pre-compiled code"]),
        ("luaB_call", ["too many arguments", "deprecated option `p' in `call'"]),
        ("luaB_tostring", ["table: %p", "function: %p", "userdata(%d): %p", "nil"]),
        ("luaB_assert", ["assertion failed!  %.90s"]),
        ("luaB_tinsert", ["n"]),
        ("luaB_tremove", ["n"]),
        ("auxsort", ["invalid order function for sorting"]),
        ("deprecated_func", ["function `%.20s' is deprecated"]),
        ("lua_baselibopen", ["_VERSION"]),
        ("math_random", ["interval is empty", "wrong number of arguments"]),
        ("lua_mathlibopen", ["pow", "PI"]),
        ("luaB__ALERT", []),
        ("luaB_error", []),
        ("luaB_setglobal", []),
        ("luaB_getglobal", []),
        ("luaB_tag", []),
        ("luaB_settag", []),
        ("luaB_newtag", []),
        ("luaB_copytagmethods", []),
        ("luaB_globals", []),
        ("luaB_rawget", []),
        ("luaB_rawset", []),
        ("luaB_gcinfo", []),
        ("luaB_collectgarbage", []),
        ("luaB_type", []),
        ("luaB_next", []),
        ("luaB_dofile", []),
        ("luaB_foreachi", []),
        ("luaB_foreach", []),
        ("luaB_getn", []),
        ("set2", []),
        ("sort_comp", []),
        ("luaB_sort", []),
        ("deprecated_funcs", []),
        ("math_abs", []),
        ("math_sin", []),
        ("math_cos", []),
        ("math_tan", []),
        ("math_asin", []),
        ("math_acos", []),
        ("math_atan", []),
        ("math_atan2", []),
        ("math_ceil", []),
        ("math_floor", []),
        ("math_mod", []),
        ("math_sqrt", []),
        ("math_pow", []),
        ("math_log", []),
        ("math_log10", []),
        ("math_exp", []),
        ("math_deg", []),
        ("math_rad", []),
        ("math_frexp", []),
        ("math_ldexp", []),
        ("math_min", []),
        ("math_max", []),
        ("math_randomseed", []),
    ],
    "lib/ldblib.c": [
        ("getinfo", ["flnSu", "function or level expected", "invalid option",
                      "source", "short_src", "linedefined", "what", "currentline", "nups", "name", "namewhat", "func"]),
        ("getlocal", ["level out of range"]),
        ("setlocal", ["level out of range"]),
        ("sethook", ["function expected"]),
        ("settabss", []),
        ("settabsi", []),
        ("hookf", []),
        ("callf", []),
        ("linef", []),
        ("setcallhook", []),
        ("setlinehook", []),
        ("lua_dblibopen", []),
    ],
    "lib/liolib.c": [
        ("gethandle", ["cannot access a closed file"]),
        ("getnonullfile", ["invalid file handle"]),
        ("getfilebyref", ["global variable `%.10s' is not a file handle"]),
        ("io_read", ["*l", "too many arguments", "*n", "*a", "*w", "invalid format"]),
        ("io_seek", ["set", "cur", "end"]),
        ("io_date", ["%c", "invalid `date' format"]),
        ("setloc", ["all", "collate", "ctype", "monetary", "numeric", "time"]),
        ("io_debug", ["lua_debug> ", "cont\n"]),
        ("errorfb", ["error: ", "stack traceback:\n", "       ...\n", "function `%.50s'",
                      "method `%.50s'", "`%.50s' tag method", "main of %.70s"]),
        ("openwithcontrol", ["_INPUT", "_OUTPUT", "_STDIN", "_STDOUT", "_STDERR", "gc"]),
        ("read_pattern", ["unbalanced braces in read pattern"]),
        ("read_file", ["not enough memory to read a file"]),
        ("read_chars", ["not enough memory to read a file"]),
        ("io_write", ["%.16g"]),
        ("pushresult", []),
        ("setfilebyname", []),
        ("setreturn", []),
        ("closefile", []),
        ("io_close", []),
        ("file_collect", []),
        ("io_open", []),
        ("io_fromto", []),
        ("io_readfrom", []),
        ("io_writeto", []),
        ("io_appendto", []),
        ("read_number", []),
        ("read_word", []),
        ("read_line", []),
        ("io_flush", []),
        ("io_execute", []),
        ("io_remove", []),
        ("io_rename", []),
        ("io_tmpname", []),
        ("io_getenv", []),
        ("io_clock", []),
        ("io_exit", []),
        ("lua_iolibopen", []),
    ],
    "lib/lstrlib.c": [
        ("str_byte", ["out of range"]),
        ("str_char", ["invalid value"]),
        ("check_capture", ["invalid capture index"]),
        ("capture_to_close", ["invalid pattern capture"]),
        ("luaI_classend", ["malformed pattern (ends with `%')", "malformed pattern (missing `]')"]),
        ("matchbalance", ["unbalanced pattern"]),
        ("start_capture", ["too many captures"]),
        ("push_captures", ["too many captures", "unfinished capture"]),
        ("str_gsub", ["string or function expected"]),
        ("luaI_addquoted", ["\\000"]),
        ("str_format", ["invalid format (width or precision too long)", "invalid option in `format'"]),
        ("lua_strlibopen", []),
        ("str_len", []),
        ("posrelat", []),
        ("str_sub", []),
        ("str_lower", []),
        ("str_upper", []),
        ("str_rep", []),
        ("match_class", []),
        ("matchbracketclass", []),
        ("luaI_singlematch", []),
        ("max_expand", []),
        ("min_expand", []),
        ("end_capture", []),
        ("match_capture", []),
        ("match", []),
        ("lmemfind", []),
        ("str_find", []),
        ("add_s", []),
    ],
}


def extract_func_strings(decomp_file):
    """Extract all string literals per function from decompiled .c file.
    Returns: {addr: set_of_strings}
    """
    func_strings = {}
    delim_re = re.compile(r'^//----- \(([0-9A-Fa-f]+)\) ----')
    string_re = re.compile(r'"((?:[^"\\]|\\.)*)"')

    cur_addr = None
    cur_strings = set()

    with open(decomp_file, 'r', encoding='utf-8', errors='replace') as f:
        for line in f:
            m = delim_re.match(line)
            if m:
                if cur_addr and cur_strings:
                    func_strings[cur_addr] = cur_strings
                cur_addr = '0x' + m.group(1).upper()
                cur_strings = set()
                continue
            if cur_addr:
                for sm in string_re.finditer(line):
                    s = sm.group(1)
                    if len(s) >= 1:  # keep even short strings
                        cur_strings.add(s)

    if cur_addr and cur_strings:
        func_strings[cur_addr] = cur_strings

    return func_strings


def build_unique_string_index():
    """Build index of strings that uniquely identify Lua functions.
    Returns: {string: [(func_name, source_file), ...]}
    Only includes strings that appear in functions with string literals.
    """
    string_index = defaultdict(list)

    for source_file, funcs in LUA401_FUNCTIONS.items():
        for func_name, strings in funcs:
            for s in strings:
                string_index[s].append((func_name, source_file))

    return string_index


def match_functions(func_strings, string_index):
    """Match decompiled functions to Lua 4.0.1 functions using string overlap.

    Strategy:
    1. For each decompiled function, find all Lua strings it contains
    2. Score each candidate Lua function by how many of its strings match
    3. Accept matches where ALL of a Lua function's strings are found (perfect match)
       or where a high percentage match (likely match)

    Returns: list of (addr, lua_name, source_file, confidence, matched_strings, total_strings)
    """
    # Build reverse index: for each Lua function, what strings does it have?
    lua_func_strings = {}  # (name, file) -> set of strings
    for source_file, funcs in LUA401_FUNCTIONS.items():
        for func_name, strings in funcs:
            if strings:  # only functions with identifiable strings
                lua_func_strings[(func_name, source_file)] = set(strings)

    matches = []
    matched_addrs = set()

    # For each decompiled function
    for addr, decomp_strings in func_strings.items():
        best_match = None
        best_score = 0
        best_total = 0

        # Check against each Lua function
        for (lua_name, source_file), lua_strings in lua_func_strings.items():
            if not lua_strings:
                continue

            # Count how many of the Lua function's strings appear in this decompiled function
            overlap = decomp_strings & lua_strings
            if not overlap:
                continue

            score = len(overlap)
            total = len(lua_strings)
            ratio = score / total

            # Prefer higher absolute overlap, then higher ratio
            if score > best_score or (score == best_score and total < best_total):
                best_match = (lua_name, source_file)
                best_score = score
                best_total = total

        if best_match and best_score >= 1:
            lua_name, source_file = best_match
            lua_strings = lua_func_strings[best_match]
            overlap = decomp_strings & lua_strings
            ratio = best_score / best_total

            if ratio >= 1.0:
                confidence = 'confirmed'
            elif ratio >= 0.5 and best_score >= 2:
                confidence = 'likely'
            elif best_score >= 2:
                confidence = 'likely'
            else:
                # Single string match - only accept if that string is unique to one function
                unique = True
                matched_str = list(overlap)[0]
                candidates = string_index.get(matched_str, [])
                if len(candidates) > 1:
                    confidence = 'speculative'
                else:
                    confidence = 'likely'

            matches.append((addr, lua_name, source_file, confidence,
                           sorted(overlap), best_total))
            matched_addrs.add(addr)

    # Sort by address
    matches.sort(key=lambda x: int(x[0], 16))
    return matches


def print_results(matches):
    """Print matching results grouped by source file."""
    by_file = defaultdict(list)
    for m in matches:
        by_file[m[2]].append(m)

    confirmed = sum(1 for m in matches if m[3] == 'confirmed')
    likely = sum(1 for m in matches if m[3] == 'likely')
    speculative = sum(1 for m in matches if m[3] == 'speculative')

    print(f"\n{'='*80}")
    print(f"RESULTS: {len(matches)} total matches")
    print(f"  confirmed: {confirmed}  |  likely: {likely}  |  speculative: {speculative}")
    print(f"{'='*80}\n")

    for source_file in sorted(by_file.keys()):
        file_matches = by_file[source_file]
        print(f"\n--- {source_file} ({len(file_matches)} matches) ---")
        for addr, name, sf, conf, strings, total in file_matches:
            matched = len(strings)
            str_preview = ', '.join(f'"{s[:40]}"' for s in strings[:3])
            if len(strings) > 3:
                str_preview += f' ... (+{len(strings)-3} more)'
            print(f"  {addr}  {name:<35s} [{conf:<11s}] {matched}/{total} strings: {str_preview}")


def generate_symbols_table(matches):
    """Generate markdown table rows for SYMBOLS.md."""
    lines = []
    lines.append("")
    lines.append("## Lua 4.0.1 VM — Deep Match (via lua_match.py)")
    lines.append("")
    lines.append("| Address | IDA | Name | Confidence | Source | Key Strings |")
    lines.append("|---------|-----|------|------------|--------|-------------|")

    for addr, name, source_file, conf, strings, total in matches:
        ida = f"sub_{addr[2:]}"
        str_preview = ', '.join(f'`{s[:30]}`' for s in strings[:2])
        if not strings:
            str_preview = '(no strings)'
        lines.append(f"| {addr} | {ida} | {name} | {conf} | {source_file} | {str_preview} |")

    return '\n'.join(lines)


def main():
    parser = argparse.ArgumentParser(description='Deep Lua 4.0.1 function matching')
    parser.add_argument('--decomp', default=DEFAULT_DECOMP,
                        help='Path to IDA decompiled .c file')
    parser.add_argument('--lua-src', default=DEFAULT_LUA_SRC,
                        help='Path to Lua 4.0.1 src directory (for verification)')
    parser.add_argument('--update-symbols', action='store_true',
                        help='Print markdown table for SYMBOLS.md')
    parser.add_argument('--min-confidence', default='speculative',
                        choices=['confirmed', 'likely', 'speculative'],
                        help='Minimum confidence to include')
    args = parser.parse_args()

    print(f"=== Deep Lua 4.0.1 Function Matching ===")
    print(f"Decomp file: {args.decomp}")
    print(f"Lua 4.0.1 DB: {len(LUA401_FUNCTIONS)} source files, "
          f"{sum(len(v) for v in LUA401_FUNCTIONS.values())} functions")

    # Step 1: Extract strings from decompiled binary
    print(f"\nExtracting strings from decompiled functions...")
    func_strings = extract_func_strings(args.decomp)
    print(f"  {len(func_strings)} functions have string literals")

    # Step 2: Build string index
    string_index = build_unique_string_index()
    print(f"  {len(string_index)} unique Lua strings in database")

    # Step 3: Match
    print(f"\nMatching...")
    matches = match_functions(func_strings, string_index)

    # Filter by confidence
    conf_order = {'confirmed': 0, 'likely': 1, 'speculative': 2}
    min_conf = conf_order[args.min_confidence]
    matches = [m for m in matches if conf_order[m[3]] <= min_conf]

    # Step 4: Print results
    print_results(matches)

    # Step 5: Generate symbols table if requested
    if args.update_symbols:
        print(f"\n{'='*80}")
        print("MARKDOWN TABLE FOR SYMBOLS.md:")
        print(f"{'='*80}")
        print(generate_symbols_table(matches))


if __name__ == '__main__':
    main()

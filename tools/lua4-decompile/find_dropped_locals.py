#!/usr/bin/env python3
"""Find decompiler dropped-`local` bugs and name the missing variable.

The decompiler sometimes omits a `local` declaration, so a local silently becomes
a GLOBAL — which breaks the script at runtime (the sanjose "unable to run" bug)
even though it parses and recompiles. The original `.luab` carries local *names*
in its debug info, so we can pinpoint exactly which `local X` was dropped and in
which function, making a manual patch a quick lookup instead of a disasm dive.

For each function whose recompiled local-count is lower than the original, this
reports the dropped variable name(s) and the decompiled `function ...` they live
in, so you can add `local X` back by hand.

Usage:
    python find_dropped_locals.py path/to/foo.luab
    python find_dropped_locals.py --decompiler ./lua4dec.py path/to/foo.luab
"""
from __future__ import annotations

import argparse
import re
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
DEFAULT_DECOMPILER = HERE / "lua4dec.py"
DEFAULT_LUAC = HERE / "CFLuaDC-Lua4-Decompiler-main" / "luac4.exe"

_FUNC_HDR = re.compile(r"(main|function) <[^>]*> \((\d+) instr[^)]*\)\s*\n\s*\d+ params?, \d+ stacks?, (\d+) locals?")
_LOCAL_REF = re.compile(r"(?:GET|SET)LOCAL\s+\d+\s*;\s*(\S+)")


def run(cmd):
    return subprocess.run(cmd, capture_output=True, text=True, encoding="utf-8", errors="replace")


def per_function(disasm: str):
    """Split a `luac4 -l -p` listing into (instr_count, local_count, [local names]) per function."""
    hdrs = list(_FUNC_HDR.finditer(disasm))
    out = []
    for i, m in enumerate(hdrs):
        body = disasm[m.end():(hdrs[i + 1].start() if i + 1 < len(hdrs) else len(disasm))]
        names = []
        for r in _LOCAL_REF.finditer(body):
            if r.group(1) not in names:
                names.append(r.group(1))
        out.append((int(m.group(2)), int(m.group(3)), names))
    return out


def source_function_names(lua_src: str):
    # decompiled `function NAME(...)` / `function obj:NAME(...)` in order; main() is the chunk itself.
    return ["<main chunk>"] + re.findall(r"^\s*function\s+([^\s(]+)", lua_src, re.MULTILINE)


def main() -> int:
    ap = argparse.ArgumentParser(description="Find dropped-`local` decompiler bugs and name the missing var")
    ap.add_argument("luab", type=Path)
    ap.add_argument("--decompiler", type=Path, default=DEFAULT_DECOMPILER)
    ap.add_argument("--luac", type=Path, default=DEFAULT_LUAC)
    args = ap.parse_args()

    with tempfile.TemporaryDirectory(prefix="dl_") as td:
        tmp = Path(td)
        lua = tmp / "out.lua"
        rc = tmp / "out.rc.luab"
        if run([sys.executable, str(args.decompiler), str(args.luab), "-o", str(lua)]).returncode != 0 or not lua.exists():
            print("decompile failed", file=sys.stderr)
            return 2
        if run([str(args.luac), "-o", str(rc), str(lua)]).returncode != 0 or not rc.exists():
            print("recompile failed (decompiled output doesn't compile)", file=sys.stderr)
            return 2

        orig = per_function(run([str(args.luac), "-l", "-p", str(args.luab)]).stdout)
        recomp = per_function(run([str(args.luac), "-l", "-p", str(rc)]).stdout)
        fnames = source_function_names(lua.read_text(encoding="utf-8", errors="replace"))

    if len(orig) != len(recomp):
        print(f"WARNING: function count differs (orig {len(orig)} vs recompiled {len(recomp)}) — "
              "report may be misaligned")

    found = 0
    for i, (o, r) in enumerate(zip(orig, recomp)):
        if r[1] < o[1]:  # fewer locals after round-trip => dropped local(s)
            dropped = [n for n in o[2] if n not in r[2]]
            fn = fnames[i] if i < len(fnames) else f"<function #{i}>"
            print(f"function #{i}  {fn}")
            print(f"    locals: original {o[1]} -> recompiled {r[1]}  (dropped {o[1] - r[1]})")
            print(f"    likely missing `local`: {', '.join(dropped) if dropped else '(name not in debug info)'}")
            print(f"    -> add `local <name>` in that function; it currently reads/writes as a GLOBAL")
            found += 1

    if found == 0:
        print(f"{args.luab.name}: no dropped locals (all function local-counts match the original)")
    else:
        print(f"\n{found} function(s) with a dropped local in {args.luab.name}")
    return 1 if found else 0


if __name__ == "__main__":
    raise SystemExit(main())

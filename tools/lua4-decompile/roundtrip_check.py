#!/usr/bin/env python3
"""Lua 4 decompiler round-trip regression harness.

For every original .luab, run the full pipeline and report fidelity signals:

    .luab --(lua4dec.py)--> .lua --(luac4 -p)--> syntax-ok?
                                 --(luac4 -o)--> .luab' --(luac4 -l)--> disasm
    diff( norm(disasm(orig)), norm(disasm(recompiled)) )  -> opcode-diff count

Why not byte-compare .luab directly?  Recompiled bytecode legitimately differs
from the original in debug/line info and embedded source path, so raw byte or
even raw-disasm comparison is noisy.  We normalize those volatile bits away and
count the *remaining* disassembly diff lines.

IMPORTANT: a nonzero opcode-diff is NOT proof of a bug.  The decompiler often
emits a semantically-equivalent-but-different jump arrangement for boolean
conditions (e.g. `a or b`).  Use the diff count as a *regression signal* (it
should never go UP for a given file across decompiler changes) and use the
`empty_if` count as a *bug signal*: an `if <cond> then` immediately followed by
`end` is the fingerprint of a mis-reconstructed compound `or`/negated condition
(the second operand collapsed into a dead empty block).  See sanjose.lua /
intro.lua.

Usage:
    python roundtrip_check.py                      # table for all files
    python roundtrip_check.py --json baseline.json # write/refresh a baseline
    python roundtrip_check.py --baseline baseline.json   # fail on regression
    python roundtrip_check.py --decompiler ../other/lua4dec.py   # A/B a build
    python roundtrip_check.py --only sanjose skeleton
"""
from __future__ import annotations

import argparse
import json
import re
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
DEFAULT_DECOMPILER = HERE / "lua4dec.py"
DEFAULT_LUAC = HERE / "CFLuaDC-Lua4-Decompiler-main" / "luac4.exe"
DEFAULT_ORIG = Path(r"N:\GamesRE\CarJacker\Scripts\original-luab")

# All 16 shipped scripts, stable name order.
FILES = [
    "CarSettings", "Materials", "english", "game", "gamegui", "german",
    "globals", "intro", "menu", "mimics", "polish", "rush", "russian",
    "sanjose", "skeleton", "weather",
]

# --- disassembly normalization ----------------------------------------------
# Strip the volatile columns/fields that differ even when bytecode is identical:
#   "   123\t"            leading instruction-number column
#   "[45]\t"             source-line debug column
#   "(N instructions/M bytes at ADDR)"  -> "(N instr)"  (drop byte count + addr)
#   "at DEADBEEF)"        runtime prototype pointer in CLOSURE operands
#   "<0:@C:/.../foo.lua>" function header source path
#   "@C:/some/path"       embedded chunk source name
#   ", 210 lines"         per-function source line total
_SUBS = [
    (re.compile(r"^[ \t]*[0-9]+\t"), ""),
    (re.compile(r"^\[[0-9]+\]\t"), ""),
    (re.compile(r"\(([0-9]+) instructions/[0-9]+ bytes at [0-9A-Fa-f]+\)"), r"(\1 instr)"),
    (re.compile(r"at [0-9A-Fa-f]{6,}\)"), ")"),
    (re.compile(r"<[0-9]+:@[^>]+>"), "<@X>"),
    (re.compile(r"@[^ )]+"), "@X"),
    (re.compile(r", [0-9]+ lines$"), ""),
]


def norm(disasm: str) -> list[str]:
    out = []
    for line in disasm.splitlines():
        for pat, repl in _SUBS:
            line = pat.sub(repl, line)
        out.append(line)
    return out


# An `if ... then` whose body is empty (only blank lines before `end`) is the
# fingerprint of a broken compound-condition reconstruction.
_IF_THEN = re.compile(r"^\s*if .*\bthen\s*$")
_END = re.compile(r"^\s*end\s*$")


def count_empty_ifs(lua_src: str) -> int:
    lines = lua_src.splitlines()
    n = 0
    for i, line in enumerate(lines):
        if _IF_THEN.match(line):
            j = i + 1
            while j < len(lines) and lines[j].strip() == "":
                j += 1
            if j < len(lines) and _END.match(lines[j]):
                n += 1
    return n


def run(cmd: list[str]) -> subprocess.CompletedProcess:
    # luac4 disasm embeds raw string constants with non-cp1252 bytes; decode
    # permissively so the harness never dies on exotic bytes.
    return subprocess.run(cmd, capture_output=True, text=True,
                          encoding="utf-8", errors="replace")


def disasm(luac: Path, luab: Path) -> str:
    # -l list, -p parse-only (don't need to execute)
    return run([str(luac), "-l", "-p", str(luab)]).stdout


def check_one(name: str, decompiler: Path, luac: Path, orig_dir: Path,
              tmp: Path) -> dict:
    src_luab = orig_dir / f"{name}.luab"
    lua = tmp / f"{name}.lua"
    rc = tmp / f"{name}.rc.luab"
    res: dict = {"file": name}

    dec = run([sys.executable, str(decompiler), str(src_luab), "-o", str(lua)])
    res["decompile_ok"] = dec.returncode == 0 and lua.exists()
    if not res["decompile_ok"]:
        res["error"] = (dec.stderr or "decompile failed").strip().splitlines()[-1:] or [""]
        res.update(parse_ok=False, recompile_ok=False, diffs=None, empty_if=None)
        return res

    src_text = lua.read_text(encoding="utf-8", errors="replace")
    res["empty_if"] = count_empty_ifs(src_text)

    res["parse_ok"] = run([str(luac), "-p", str(lua)]).returncode == 0
    res["recompile_ok"] = run([str(luac), "-o", str(rc), str(lua)]).returncode == 0 and rc.exists()

    if res["recompile_ok"]:
        a = norm(disasm(luac, src_luab))
        b = norm(disasm(luac, rc))
        import difflib
        res["diffs"] = sum(1 for d in difflib.ndiff(a, b) if d[:1] in "+-")
    else:
        res["diffs"] = None
    return res


def main() -> int:
    ap = argparse.ArgumentParser(description="Lua 4 decompiler round-trip harness")
    ap.add_argument("--decompiler", type=Path, default=DEFAULT_DECOMPILER)
    ap.add_argument("--luac", type=Path, default=DEFAULT_LUAC)
    ap.add_argument("--orig", type=Path, default=DEFAULT_ORIG)
    ap.add_argument("--only", nargs="*", default=None, help="subset of file stems")
    ap.add_argument("--json", type=Path, help="write results as a baseline JSON")
    ap.add_argument("--baseline", type=Path, help="compare against baseline; nonzero exit on regression")
    args = ap.parse_args()

    for p, what in [(args.decompiler, "decompiler"), (args.luac, "luac4")]:
        if not p.exists():
            print(f"ERROR: {what} not found: {p}", file=sys.stderr)
            return 2
    if not args.orig.is_dir():
        print(f"ERROR: originals dir not found: {args.orig}", file=sys.stderr)
        return 2

    files = args.only if args.only else FILES
    results = []
    with tempfile.TemporaryDirectory(prefix="lua_rt_") as td:
        tmp = Path(td)
        for name in files:
            results.append(check_one(name, args.decompiler, args.luac, args.orig, tmp))

    # --- report table ---
    hdr = f"{'FILE':<14}{'DEC':>4}{'PAR':>4}{'REC':>4}{'DIFFS':>7}{'EMPTY_IF':>9}"
    print(hdr)
    print("-" * len(hdr))
    tick = lambda b: "ok" if b else "X"
    for r in results:
        print(f"{r['file']:<14}{tick(r['decompile_ok']):>4}{tick(r.get('parse_ok')):>4}"
              f"{tick(r.get('recompile_ok')):>4}"
              f"{(r['diffs'] if r['diffs'] is not None else '-'):>7}"
              f"{(r['empty_if'] if r['empty_if'] is not None else '-'):>9}")
    total_empty = sum(r["empty_if"] or 0 for r in results)
    print("-" * len(hdr))
    print(f"total broken-condition (empty_if) blocks: {total_empty}")

    if args.json:
        args.json.write_text(json.dumps({r["file"]: r for r in results}, indent=2))
        print(f"\nwrote baseline: {args.json}")

    if args.baseline:
        base = json.loads(args.baseline.read_text())
        regressed = []
        for r in results:
            b = base.get(r["file"])
            if not b:
                continue
            # regression = more diffs, more empty-ifs, or lost parse/recompile
            if (r["diffs"] is not None and b.get("diffs") is not None
                    and r["diffs"] > b["diffs"]):
                regressed.append(f"{r['file']}: diffs {b['diffs']} -> {r['diffs']}")
            if (r.get("empty_if") or 0) > (b.get("empty_if") or 0):
                regressed.append(f"{r['file']}: empty_if {b.get('empty_if')} -> {r.get('empty_if')}")
            if b.get("parse_ok") and not r.get("parse_ok"):
                regressed.append(f"{r['file']}: parse_ok regressed")
            if b.get("recompile_ok") and not r.get("recompile_ok"):
                regressed.append(f"{r['file']}: recompile_ok regressed")
        if regressed:
            print("\nREGRESSIONS:")
            for x in regressed:
                print(f"  {x}")
            return 1
        print("\nno regressions vs baseline.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

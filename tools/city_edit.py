#!/usr/bin/env python3
"""Programmatic editing of .city model placements — the data layer for a map editor.

Built on tools/city_format.py (byte-perfect parse/write). Because untouched records
re-serialize identically, an edit changes ONLY the intended bytes, so edits are safe
and diffable. This module is GUI-agnostic; a viewer/editor front-end (city_editor/)
can call these operations directly.

Operations (all write a NEW file; the input is never modified in place):
    list    FILE                              list model placements: idx, name, X Y Z
    move    FILE IDX DX DY DZ   -o OUT         translate a placement by (dx,dy,dz)
    setpos  FILE IDX X  Y  Z    -o OUT         set a placement's absolute position
    delete  FILE IDX            -o OUT         remove a placement
    dup     FILE IDX [DX DY DZ] -o OUT         duplicate a placement (optionally offset)
    selftest FILE                              verify edits touch only intended bytes

Example:
    python city_edit.py list  "N:/GamesRE/CarJacker/City/sanjose.city"
    python city_edit.py move  in.city 42 100 0 0 -o out.city
    python city_edit.py selftest "N:/GamesRE/CarJacker/City/sanjose.city"
"""
from __future__ import annotations

import argparse
import copy
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))
from city_format import CityFile, ModelPlacement  # noqa: E402


def _load(path: str) -> CityFile:
    return CityFile.read(path)


def _save(city: CityFile, out: str) -> None:
    Path(out).write_bytes(city.write())


def _check_idx(city: CityFile, idx: int) -> None:
    if not (0 <= idx < len(city.models)):
        raise SystemExit(f"error: placement index {idx} out of range (0..{len(city.models)-1})")


def op_list(city: CityFile) -> None:
    for i, m in enumerate(city.models):
        x, y, z = m.transform[3][:3]
        print(f"[{i:4}] {m.model_name:<28} pos=({x:10.1f}, {y:8.1f}, {z:10.1f})")
    print(f"\n{len(city.models)} placements")


def op_move(city: CityFile, idx: int, d) -> None:
    _check_idx(city, idx)
    row = city.models[idx].transform[3]
    row[0] += d[0]; row[1] += d[1]; row[2] += d[2]


def op_setpos(city: CityFile, idx: int, p) -> None:
    _check_idx(city, idx)
    row = city.models[idx].transform[3]
    row[0], row[1], row[2] = p[0], p[1], p[2]


def op_delete(city: CityFile, idx: int) -> None:
    _check_idx(city, idx)
    del city.models[idx]


def op_dup(city: CityFile, idx: int, d) -> None:
    _check_idx(city, idx)
    clone = copy.deepcopy(city.models[idx])  # keeps _raw_name => identical name bytes
    clone.transform[3][0] += d[0]
    clone.transform[3][1] += d[1]
    clone.transform[3][2] += d[2]
    city.models.append(clone)


# --- self-test: prove edits change only the intended bytes ----------------------

def selftest(path: str) -> int:
    original = Path(path).read_bytes()
    ok = True

    def check(name, cond):
        nonlocal ok
        print(f"  [{'PASS' if cond else 'FAIL'}] {name}")
        ok = ok and cond

    # 0. byte-perfect identity round-trip
    check("unedited write is byte-identical", _load(path).write() == original)

    if not _load(path).models:
        print("  (no model placements to test edits against)")
        return 0 if ok else 1

    # 1. move placement 0 by +100 X: exactly the 4 translation-X bytes change, count unchanged
    c = _load(path); before = c.write()
    n0 = len(c.models)
    x0 = c.models[0].transform[3][0]
    op_move(c, 0, (100.0, 0.0, 0.0))
    after = c.write()
    check("move: byte length unchanged", len(after) == len(before))
    diffs = [i for i in range(min(len(before), len(after))) if before[i] != after[i]]
    # Changing one float32 alters 1-4 bytes, all within its 4-byte slot.
    check("move: 1-4 bytes differ", 1 <= len(diffs) <= 4)
    check("move: all diffs within one float32 slot", bool(diffs) and (max(diffs) - min(diffs) < 4))
    rc = _load_bytes(after)
    check("move: placement count preserved", len(rc.models) == n0)
    check("move: X advanced by exactly 100", abs(rc.models[0].transform[3][0] - (x0 + 100.0)) < 1e-3)
    check("move: all other placements unchanged",
          all(rc.models[i].transform == _load(path).models[i].transform for i in range(1, n0)))

    # 2. delete last placement: count-1, all preceding identical
    c = _load(path); n0 = len(c.models)
    op_delete(c, n0 - 1)
    rc = _load_bytes(c.write())
    check("delete: count decreased by 1", len(rc.models) == n0 - 1)
    base = _load(path)
    check("delete: preceding placements byte-identical",
          all(rc.models[i].model_name == base.models[i].model_name
              and rc.models[i].transform == base.models[i].transform for i in range(n0 - 1)))

    # 3. duplicate placement 0 (+50 X): count+1, clone matches source name, offset applied
    c = _load(path); n0 = len(c.models)
    src_name = c.models[0].model_name; src_x = c.models[0].transform[3][0]
    op_dup(c, 0, (50.0, 0.0, 0.0))
    rc = _load_bytes(c.write())
    check("dup: count increased by 1", len(rc.models) == n0 + 1)
    check("dup: clone has same model name", rc.models[-1].model_name == src_name)
    check("dup: clone X offset by 50", abs(rc.models[-1].transform[3][0] - (src_x + 50.0)) < 1e-3)
    check("dup: original placement 0 unchanged", abs(rc.models[0].transform[3][0] - src_x) < 1e-3)

    print(f"\n{'ALL PASS' if ok else 'FAILURES PRESENT'}")
    return 0 if ok else 1


def _load_bytes(b: bytes) -> CityFile:
    import tempfile
    with tempfile.NamedTemporaryFile(suffix='.city', delete=False) as f:
        f.write(b); tmp = f.name
    try:
        return CityFile.read(tmp)
    finally:
        Path(tmp).unlink(missing_ok=True)


def main() -> int:
    ap = argparse.ArgumentParser(description="Edit .city model placements (data layer for a map editor)")
    sub = ap.add_subparsers(dest="cmd", required=True)

    p = sub.add_parser("list"); p.add_argument("file")
    p = sub.add_parser("move"); p.add_argument("file"); p.add_argument("idx", type=int)
    p.add_argument("dx", type=float); p.add_argument("dy", type=float); p.add_argument("dz", type=float)
    p.add_argument("-o", "--out", required=True)
    p = sub.add_parser("setpos"); p.add_argument("file"); p.add_argument("idx", type=int)
    p.add_argument("x", type=float); p.add_argument("y", type=float); p.add_argument("z", type=float)
    p.add_argument("-o", "--out", required=True)
    p = sub.add_parser("delete"); p.add_argument("file"); p.add_argument("idx", type=int)
    p.add_argument("-o", "--out", required=True)
    p = sub.add_parser("dup"); p.add_argument("file"); p.add_argument("idx", type=int)
    p.add_argument("dx", type=float, nargs="?", default=0.0); p.add_argument("dy", type=float, nargs="?", default=0.0)
    p.add_argument("dz", type=float, nargs="?", default=0.0); p.add_argument("-o", "--out", required=True)
    p = sub.add_parser("selftest"); p.add_argument("file")

    a = ap.parse_args()
    if a.cmd == "selftest":
        return selftest(a.file)
    if a.cmd == "list":
        op_list(_load(a.file)); return 0

    city = _load(a.file)
    if a.cmd == "move":
        op_move(city, a.idx, (a.dx, a.dy, a.dz))
    elif a.cmd == "setpos":
        op_setpos(city, a.idx, (a.x, a.y, a.z))
    elif a.cmd == "delete":
        op_delete(city, a.idx)
    elif a.cmd == "dup":
        op_dup(city, a.idx, (a.dx, a.dy, a.dz))
    _save(city, a.out)
    print(f"wrote {a.out} ({len(city.models)} placements)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

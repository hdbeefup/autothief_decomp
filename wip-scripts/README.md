# wip-scripts — hand-patched decompiled scripts (NEEDS in-game testing)

Decompiled scripts with **manual fixes** for decompiler bugs, **not yet verified in-game**. Do not treat as stable
(that's `../../ScriptsStable/`). Once a file here passes an in-game smoke test, promote it to ScriptsStable.

## sanjose.lua — dropped-local fix (test this)
The decompiler dropped the `local progress` declaration in `ShowLoadProgressBar`, turning it into a global, which
broke map/mission loading (the "sanjose unable to run" bug). Hand-patched: added `local progress=0;` before the
`while` loop (line 53). Verified: parses (`luac4 -p`), and per-function local counts now match the original `.luab`
exactly (0 dropped-local mismatches).

**To test:** back up `N:\GamesRE\CarJacker\Scripts\sanjose.lua` (or just the original `.luab`), copy this file in, and
load the city / start a mission. If it loads and plays, report back and it gets promoted to ScriptsStable. If it still
fails, the console/log error will point at the next issue (sanjose still has ~127 benign-looking bytecode diffs from
the original; this fix addresses the one known runtime-breaking one).

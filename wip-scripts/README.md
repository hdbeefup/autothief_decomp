# wip-scripts — hand-patched decompiled scripts (NEEDS in-game testing)

Decompiled scripts with **manual fixes** for decompiler bugs, **not yet verified in-game**. Do not treat as stable
(that's `../../ScriptsStable/`). Once a file here passes an in-game smoke test, promote it to ScriptsStable.

## rush.lua + globals.lua — GTA-like shooting v1 (lock-on reticle) — TEST AS A PAIR
Drop in **both** `rush.lua` and `globals.lua` together (the game loads loose `.lua` over `.luab`).
- `globals.lua`: based on the known-working stable globals + fixes the aim bug — `GetAutoAimTarget` had `bestoy`/`bestoz`
  dropped to globals; now declared `local`.
- `rush.lua`: based on stable rush + a new `ShowAimLock(weapon)` that runs each frame the gun is out and draws a
  marker on the auto-aim target (`AddMarker "marker\checkpoint"` over the locked enemy).

**What to look for:** equip a gun, point near an enemy. A marker should appear over the enemy the game is locking
(GTA lock-on). It's also a **diagnostic** — if the marker shows on enemies, acquisition + lock work (and shots should
land, since BulletShot already aims at the locked target's chest). If it *never* shows, auto-aim isn't acquiring and
the next step is tuning the cone (`autoaimangle`) / removing the random Y jitter — tell me which you see.

This is v1 (lock-on half of the hybrid). The free-aim crosshair (for when nothing is locked) is v2, once lock-on is
confirmed. The marker uses the checkpoint sprite for now; a custom reticle texture can be swapped in later.

## sanjose.lua — dropped-local fix (DONE — promoted to ScriptsStable)
The decompiler dropped the `local progress` declaration in `ShowLoadProgressBar`, turning it into a global, which
broke map/mission loading (the "sanjose unable to run" bug). Hand-patched: added `local progress=0;` before the
`while` loop (line 53). Verified: parses (`luac4 -p`), and per-function local counts now match the original `.luab`
exactly (0 dropped-local mismatches).

**To test:** back up `N:\GamesRE\CarJacker\Scripts\sanjose.lua` (or just the original `.luab`), copy this file in, and
load the city / start a mission. If it loads and plays, report back and it gets promoted to ScriptsStable. If it still
fails, the console/log error will point at the next issue (sanjose still has ~127 benign-looking bytecode diffs from
the original; this fix addresses the one known runtime-breaking one).

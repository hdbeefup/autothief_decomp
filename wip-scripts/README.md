# wip-scripts — hand-patched decompiled scripts (NEEDS in-game testing)

Decompiled scripts with **manual fixes** for decompiler bugs, **not yet verified in-game**. Do not treat as stable
(that's `../../ScriptsStable/`). Once a file here passes an in-game smoke test, promote it to ScriptsStable.

## intro.lua — faithful + logic-fixed (TEST: does loading still hang?)
Current-decompiler intro + the one real logic fix. The fade-out gate was decompiled wrong:
`not not((not loadingcode)) or (loadingcode>0)` → restored to the correct **`loadingcode and (loadingcode>0)`**
(line 235). The working 272713c version sidestepped this by *dropping* the condition entirely (`if fadeout==0 then
fadeout=1`); this version restores the original AND logic faithfully.

The remaining ~43 byte-diffs from the original are the inherent `NOT;JMPT`→`not((not X))` artifact (e.g.
`if not((not intro["snd"]))` = `if intro["snd"]`). They're **semantically equivalent and byte-faithful** — luac4
recompiles `not((not X))` back to `NOT;JMPT`, whereas the cleaner `if X` emits `JMPF` and diverges. So they're kept
(ugly but correct); they can be simplified for readability later at the cost of byte-identity.

**Test:** drop in, start a new game / loading sequence. Does it load past the intro without hanging? If yes, this
replaces the 272713c special-case as the canonical intro.

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

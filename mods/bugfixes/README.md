# Bugfix mod — original-game bugs

Optional, drop-in fixes for confirmed **original-game** bugs (present in the retail `.luab`, verified in bytecode).
These are deliberately kept OUT of `../../../ScriptsStable/` (which stays faithful to the original). See
`../../docs/ORIGINAL_BUGS.md` for the bug registry.

## How to use
Copy the `.lua` files here into the game's `Scripts\` folder (back up the originals first). The game runs loose
`.lua` directly (per `autoexec.cfg`), so no recompilation is needed.

## Fixes included

### `skeleton.lua` + `rush.lua` — PlaySound3D 3D-distance ignores the Z axis
The distance² in both `PlaySound3D` functions had `((sz - sz) * (sz - pz))` (always 0) instead of
`((sz - pz) * (sz - pz))`, so 3D positional sound was culled by horizontal distance only — height was ignored.
Fixed to `((sz - pz) * (sz - pz))`. (One line changed per file; everything else is the faithful decompile.)

> Coordinate note: in this engine `sx,sy,sz = ScrPos()` and `px,py,pz` is the sound position. The fix assumes the
> formula intended all three squared deltas (matching the X/Y terms). Verify the audible result in-game.

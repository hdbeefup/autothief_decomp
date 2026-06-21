# Original-game bugs (bugfix-mod candidates)

Bugs that exist in the **original game**, found in the faithfully-decompiled Lua (verified present in the original
`.luab` bytecode). These are NOT decompiler errors — `ScriptsStable` reproduces them on purpose to stay faithful.
They are candidates for an **optional bugfix mod** (a separate, clearly-labelled variant), not changes to the
faithful scripts. Aligns with the Phase-2 "labor of love" goal.

Method: audited all 16 faithfully-decompiled scripts for high-signal bug patterns (self-subtraction `(X - X)`,
self-comparison, arithmetic no-ops, axis typos in vector math, suspicious loop bounds). Most hits were intentional or
known cosmetic decompiler artifacts (the reversed multiple-assignment temp, e.g. `vz, vy, vx = vz, Normalize(...)` —
valid Lua, bytecode-correct, not a bug). One real bug class surfaced, in two places.

## 1. PlaySound3D — 3D sound distance ignores the Z/height axis  (confirmed in bytecode)
**Files:** `skeleton.lua` (`PlaySound3D`, ~line 415) and `rush.lua` (~line 606) — the same buggy formula copy-pasted.

```lua
local dist2=((((sx - px) * (sx - px)) + ((sy - py) * (sy - py))) + ((sz - sz) * (sz - pz)));
--                                                                    ^^^^^^^ should be (sz - pz)
```
The third term is `(sz - sz) * (sz - pz)` = `0 * anything` = 0, so the squared distance used for sound culling
**omits the Z axis entirely**. Confirmed in the original bytecode (e.g. skeleton instr 18-20 / rush instr 320-322:
`GETLOCAL sz; GETLOCAL sz; SUB`), so it is a faithful decompile of a real developer typo, not a decompiler artifact.

**Effect:** 3D positional sounds are culled by horizontal (XY) distance only; height difference is ignored — sounds
above/below the listener are treated as if at listener height. Minor in a near-top-down game, but wrong.

**Fix (in a bugfix mod only):** change `(sz - sz)` → `(sz - pz)` in both files. Trivial and safe.

> Note: in this engine `sx,sy,sz = ScrPos()` (screen/camera position) and `px,py,pz` is the sound position. Confirm
> which axis is the vertical one in this coordinate system before shipping — the fix assumes the formula intended all
> three squared deltas (`(sz-pz)²`), matching the X and Y terms.

---

## Not bugs (audited and cleared)
- **Reversed multiple-assignment temporaries** (`a, b, c = a, Func(...)`) — cosmetic decompiler output; valid Lua,
  recompiles identically. Appears in globals/rush/skeleton/game.
- **`sanjose.lua` `rating = rating`** — harmless self-assignment no-op; no behavioral effect.
- **`gamegui.lua` `for i=1, gui_NumMessages-1 do HelpMsg[i]=HelpMsg[i+1]`** — correct message-queue shift (removing the
  first message), not an off-by-one.
- **`health` comparisons** (`>0`, `<=0`, `<10`, `<20`) — intentional, context-appropriate (alive / dead / low-health).

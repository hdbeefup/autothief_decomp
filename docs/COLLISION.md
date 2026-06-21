# Collision / ODE vehicle physics — "magnetic trees" + LCP errors

Root-cause scoping for two complaints: cars getting **pulled into trees** ("magnetic"), and `stderr.txt` spam
`ODE Message 3: LCP internal error, s <= 0` / `disabling bodies`. ODE is statically linked (symbols recovered by
struct layout + error strings).

## How the Lua globals map to ODE (confirmed)
World ctor `FUN_00429b50` (globals_01.c:13666): `CFM`→`dWorldSetCFM` (`FUN_004e4204`), `ERP`→`dWorldSetERP`
(`FUN_004e4210`). Per-step `FUN_00427440` (globals_01.c:12879): `G_GRAVITY`→`dWorldSetGravity` on Y.
- **`G_ITERATIONS` is a DEAD no-op** — zero references in the decomp; the engine uses ODE's big-matrix **direct**
  solver `dWorldStep` (`FUN_004e3f90`→`dProcessIslands`→`dInternalStepIsland`→`dSolveLCP`), NOT `dWorldQuickStep`.
  `dWorldSetQuickStepNumIterations` is never called. Raising `G_ITERATIONS` changes nothing. (This direct solver is
  also why an `LCP` error is possible — QuickStep has no LCP.)

## Collision driver
`FUN_00424b10` (globals_01.c:12272), once per frame from `FUN_00427440`: broad-phase AABB → contact collector
(`FUN_004229a0`: max **10 contacts/pair**, merge radius **0.01**) → collide test (vtable+8) → contact generation
(vtable+0x10, indirect → `FUN_00433bb0`/`FUN_00433490`) → contact joints (`FUN_00431890`). The vehicle is a
**sphere-set** collided against **plane sets**.

## "Magnetic trees" — root cause (oversized box + inward normal + zero wall friction)
Static obstacles are collided as a **6-plane oriented box** (`FUN_00433bb0`, globals_01.c:18837) built from the
prop's box extents + skin margin. Contact surface authored in `FUN_00433490` (globals_01.c:18584):
- `surface.mu = |contact-normal.y| × 300` → ground (n.y≈1) mu≈300, but a **tree/wall (n.y≈0) → mu≈0 (frictionless)**.
- `surface.mode = dContactBounce` only — **no `dContactSoftCFM`/`dContactSoftERP`/`dContactApprox1`**.
- depth clamp only `≤ 2×radius`; contact normal = **negated plane normal**.

So: a tree's **bounding box** (canopy included) is much bigger than its trunk → the car is grabbed from far away
(oversized geom). On deep penetration (fast car drives its sphere center past a box face in one big step) the selected
per-face normal points **laterally/inward**, and full-stiff ERP (0.4) position-correction shoves the car toward/over
the box — with **mu≈0** there's no friction to resist, so it slides "magnetically." No soft-CFM means no cushioning.

## LCP error — root cause (0.1 s max-timestep clamp)
`FUN_00424b10` clamps the step dt to roughly **[0.02 s, 0.1 s]** before `dWorldStep` (globals_01.c:12411-12418):
```c
param_2 = frame_dt;
if (DAT_587db8 < param_2) param_2 = 0.1;    // dt too big -> CLAMP UP to 0.1 s
if (param_2 < DAT_587db0) param_2 = 0.02;
FUN_004e3f90(world, param_2);               // dWorldStep
```
On any frame hitch (level stream, GC, alt-tab) dt becomes **0.1 s** — a huge step for a stiff direct LCP under
gravity. In one such step a car penetrates a box deeply → degenerate/over-constrained system (huge correction impulse,
near-coincident contacts after the 0.01 merge) → `dSolveLCP` hits `s ≤ 0` → ODE auto-disables the bodies. The hard
`0.1` literal at globals_01.c:12413 is the single highest-value fix target.

## Fixes (ranked)
**A. Lua tuning (lowest effort, confirmed consumed):** `ERP` 0.4→~0.2, `CFM` 0.001→~0.01 in `globals.lua` — softens
position correction, reduces the yank and LCP stress. **Do NOT touch `G_ITERATIONS` (dead).**

**B. Native near-callback patch `FUN_00433490` @ 0x00433490 (the real fix):**
- add `dContactSoftCFM | dContactSoftERP` (+ set the soft fields) to the mode word (`local_80`, currently `4`) → regularizes the LCP, kills the hard yank.
- add `dContactApprox1` → decouples friction from the (huge) normal force.
- give wall contacts a **nonzero `mu` floor** (currently collapses to 0 on vertical faces).
- tighten depth clamp `2×radius`→`~0.5×radius` (globals_01.c:18685/18784) and reject contacts where the sphere center crossed the face → kills the inward-normal case.
- **reduce the max-dt clamp** in `FUN_00424b10` (globals_01.c:12413) `0.1`→`~0.033`, or sub-step → the most effective LCP fix.

**C. Tree-geom resizing (highest effort):** shrink the per-prop collision box to the trunk footprint in the `.col`/prop
loader feeding `FUN_00433bb0`, or reduce the global skin margin `_DAT_00588878`.

## Key addresses
| Purpose | Function | Location |
|---|---|---|
| World ctor (CFM/ERP/group) | `FUN_00429b50` | globals_01.c:13666 (13734/13740/13743) |
| Per-step gravity | `FUN_00427440` | globals_01.c:12879 |
| Collision+step driver (dt clamp @12413) | `FUN_00424b10` | globals_01.c:12272 |
| Vehicle contact/surface builder (mu, mode, depth) | `FUN_00433490` | globals_01.c:18584 |
| Static-box obstacle response | `FUN_00433bb0` | globals_01.c:18837 |
| Contact add/dedupe (0.01 merge) | `FUN_004322e0` | globals_01.c:18072 |
| `dSolveLCP` error site / "disabling bodies" | — | globals_05.c:20247 / 17688 |
| ODE wrappers: dWorldStep / SetERP / SetCFM / SetGravity | `FUN_004e3f90 / 4e4210 / 4e4204 / 4e421c` | globals_05.c |

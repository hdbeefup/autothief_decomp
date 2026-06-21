# Audio fade-to-silence bug — investigation

**Symptom:** during gameplay, SFX and music get progressively quieter until nothing plays.

## It is NOT a naive leak
The OpenAL source/buffer lifecycle is **balanced** as decompiled:
- one `alGenSources` per *named channel* in `FUN_004f7af0` (`0x4F7AF0`, globals_05.c:24044), guarded against duplicate
  keys; matched `alDeleteSources` in the instance dtor `FUN_004f5bb0` (audio.c:71).
- the Lua SFX path `Close`s a channel before each `Open` (reusing a small fixed set of channel names).
- gain is recomputed **absolutely** from the menu sliders every frame — no compounding decay.
- a **3-second GC** `FUN_004f6a60` (`0x4F6A60`) reclaims finished one-shot sources (buffer-refcount sweep).
- music (streaming) is pumped by `FUN_004f7140` (`0x4F7140`).

All of the above reclamation is driven by the OpenAL manager's per-frame update **`sub_4F7560` (`0x4F7560`)**.

## Most probable root cause
`sub_4F7560` is an indirect vtable call from the engine's object-update list; its per-frame call site couldn't be
traced statically. If the OpenAL manager stops being ticked in some state (level/menu transition, or after a `"Kill"`,
e.g. `gamegui.lua:460`), then:
- the GC stops → one-shot sources accumulate → the driver voice pool exhausts → new `alSourcePlay` silently no-ops →
  **progressive SFX thinning → silence**;
- the stream pump stops → **music goes silent**.

This matches the symptom exactly. `sub_4F7560` (and its caller) is the function to confirm.

## Confirm WITHOUT a code change (do this first)
The OpenAL command dispatcher `sub_4F8180` (`0x4F8180`) exposes console/Lua commands (call via
`alCmd(cmd)` = `Cmd(FindObject("OpenAL"), cmd)`; CarJacker's `config.ini` has the console enabled):
- **`alCmd("Stat")`** → prints `"%d buffers, %d sounds"`. If "sounds" climbs steadily during play → accumulation confirmed.
- **`alCmd("Clean")`** → forces the GC. If running it temporarily **restores** audio → the GC isn't running on its own
  → confirms the `sub_4F7560`-not-ticking theory.

(Alternatively, hook `alGenSources`/`alDeleteSources` in the live process and watch the counter climb to the driver cap.)

## Candidate fixes
- **Lua-level workaround (testable now, no native patching):** if `Clean` restores audio, add a periodic
  `alCmd("Clean")` (e.g. every ~2 s) to a per-frame Lua update so the GC always runs. Mitigates the symptom even if the
  native tick is the real culprit. Worth trying once the `Stat`/`Clean` test confirms the theory.
- **Native fix (proper):** ensure `sub_4F7560` ticks every frame regardless of level/menu state (binary patch or
  reconstructed source). Defense-in-depth: in `FUN_004f7af0`, check `alGetError()` after `alGenSources` and bail
  (return 0) rather than using source name 0. Optional: pre-gen a fixed pool of 16–32 sources at init.

## Side finding (separate, NOT the fade bug)
`skeleton.lua` `PlaySound3D` computes `dist2` with `((sz - sz) * (sz - pz))` instead of `((sz - pz) * (sz - pz))`.
Confirmed in the **original bytecode** (instr 18-20 `GETLOCAL sz; GETLOCAL sz; SUB`), so it is a faithful decompile of
a real developer typo — 3D sound distance culling ignores the Z/height axis. Leave `ScriptsStable` faithful; this is a
candidate for a future **bugfix-mod**, not a decompilation change.

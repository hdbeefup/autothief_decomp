# Fresh-session prompt — Lua 4 decompiler perfection

Copy everything in the fenced block below into a fresh Claude Code session.

---

```
GOAL: Make the Lua 4.0.1 bytecode decompiler `tools/lua4-decompile/lua4dec.py` produce
bytecode-FAITHFUL output for all 16 CarJacker/AutoThief `.luab` scripts, so the decompiled
`.lua` round-trip without hand-patches and run in-game unchanged. Right now scripts run only
because each known bug is hand-patched per-file; I want the DECOMPILER fixed at the source.

CONTEXT
- Repo (git root): N:\ProjectsCODE\autothief_decomp\autothief_decomp  (nested; read CLAUDE.md + TODO.md first).
- Decompiler: tools/lua4-decompile/lua4dec.py  (canonical; ~1700 LOC, lineage "008e457" + fixes c4e7889 + reversed-temp fix).
- Lua 4 toolchain: tools/lua4-decompile/CFLuaDC-Lua4-Decompiler-main/luac4.exe (compiler/disassembler: `-l -p`),
  lua4.exe (interpreter). The game is Lua 4.0.1.
- Original bytecode: N:\GamesRE\CarJacker\Scripts\original-luab\*.luab  (16 files).
- Stable hand-verified output (separate git repo): ..\ScriptsStable\  (see its DECOMPILER_SOURCES.md).
- Game install (loads loose Scripts\*.lua over .luab): N:\GamesRE\CarJacker\ ; deploy via wip-scripts/deploy.sh.

VERIFICATION (the rules — never break these)
- Regression harness: `python tools/lua4-decompile/roundtrip_check.py --baseline tools/lua4-decompile/baseline_roundtrip.json`
  For each .luab: decompile -> `luac4 -p` (parse) -> recompile -> normalized `luac4 -l` disasm diff + empty_if count.
  Run it BEFORE and AFTER every lua4dec.py change. No file's DIFFS or EMPTY_IF may rise. When you intentionally
  reduce them, refresh the baseline with `--json`.
- DIFFS is only a regression signal (the decompiler legitimately emits equivalent jump arrangements); the real bug
  metrics are EMPTY_IF and DROP_LOCAL.
- Dropped-local detector: `python tools/lua4-decompile/find_dropped_locals.py <file.luab>` -> names the function +
  the missing `local`. Goal: total DROP_LOCAL across all 16 -> 0.
- Bytecode-faithful ground truth = `luac4 -l -p original.luab` vs `luac4 -l -p recompiled.luab` (normalized).
- Necessary but NOT sufficient: also eyeball compound conditions and, for gameplay scripts, smoke-test in-game.

KNOWN BUG CLASSES (root causes already diagnosed — fix at the source, harness-gated)
1. DROPPED LOCAL (highest value; 7 functions: game, gamegui, globals, mimics, sanjose, skeleton x2).
   Root cause: a local's `startpc` (Lua 4 debug info) marks where its SCOPE OPENS — often the next
   statement/block boundary (e.g. the GETGLOBAL that starts a following `while`), which can be AFTER its
   initializer push. `push_val` (lua4dec.py ~934) only emits `local x=val` when `_find_locals_at` finds
   startpc == vb_pc (vb_pc = pc+1); when the initializer push PC and startpc diverge, no `local` is emitted and
   the var leaks to a GLOBAL. Concrete repro: sanjose `ShowLoadProgressBar` local `progress` = slot 6, startpc=20,
   but instruction[20] is the while-loop GETGLOBAL.
   Suggested fix: declare a non-param local LAZILY when execution reaches its startpc (read its value from its
   stack slot) inside `process_locals` (lua4dec.py ~920), instead of relying only on push_val's exact-PC match.
   This is core local-tracking surgery — do it incrementally and re-run the harness after every step. A safer
   alternative if surgery is too risky: a post-pass that injects the missing `local` at the first assignment of a
   debug-info local name that the body never declared (turn find_dropped_locals from detector into fixer).
2. MERGED-ELSE: an if/else where the else-branch is collapsed into the if body, e.g.
   `if not time then msg_alpha=4; msg_alpha=time; end` should be `... else msg_alpha=time; end`
   (gamegui message/message2; intro skip; sanjose mission-fail). Bytecode tell: JMP over the else into the body.
3. COMPOUND-OR-WITH-COMPARISON: `if (a > x) or (b and c) then BODY` where the first comparison's success-jump
   (JMPGT/JMPLT/etc.) targets the BODY. The decompiler INVERTS the comparison and drops the OR, yielding
   `if (a <= x) and (b) then if (c) ...`. Concrete: sanjose `gangpikap_Update` respawn condition was
   `if (dist2>15000^2) or ((timeout>5) and (dist2>5000^2))` -> mis-decompiled to the inverted `and` form.
   Related to the already-fixed compound-OR (c4e7889 `_find_next_condition` ~line 378) but the operand is a
   comparison, not a function call — extend that logic to comparison-success-jumps-to-body.
4. TAILCALL DROPPED RETURN: `Op.TAILCALL` (`return f(...)`) is emitted as plain `f(...)` without `return`
   (CALL handler ~line 1060). Only one instance in 16 scripts (game.lua `Animate`). Emit `return ` for TAILCALL.

NOT BUGS (leave as-is — they are byte-faithful; "fixing" them REGRESSED game/menu/skeleton last time)
- The `JMPT`/`NOT;JMPT` artifact rendered as `if not((not X))` (== `if X`). luac4 recompiles it back identically;
  the cleaner `if X` emits JMPF and DIVERGES. Faithful — do not touch the shared JMPT/JMPF handler (~line 1491).
- The 3 residual EMPTY_IF (menu x2 `if GAMEMODE==0/==1 then end`, sanjose `if active==1 then end`) are GENUINE
  empty source stubs (cond-jump target == block end) — confirmed in bytecode, not bugs.

WORKFLOW
- Commit working state before risky changes; descriptive `fix:`/`feat:`/`docs:` messages; never amend; commit to main.
- Pick ONE bug class at a time, smallest repro first, harness-gate every change. Start with #1 (dropped local) since
  find_dropped_locals gives an exact pass/fail and it's the one that actually breaks gameplay.
- When a class hits 0 across all 16 with no DIFFS regression, refresh baseline_roundtrip.json and re-decompile +
  re-promote the affected ScriptsStable files (drop their hand-patches, since the decompiler now produces them).
- Cross-references: ScriptsStable/DECOMPILER_SOURCES.md (per-file source + which hand-patches exist),
  TODO.md "MAJOR FIX" + "Decompiler bug PATTERNS" sections, and the project memory file
  project_decompiler_status.md (has the same root-cause notes).

DELIVERABLE: lua4dec.py changes that drive total DROP_LOCAL -> 0 and remove the merged-else / compound-OR-comparison
/ tailcall classes, harness green (zero regressions), baseline refreshed, and the relevant ScriptsStable scripts
re-decompiled clean (no hand-patches) + smoke-tested in-game.
```

---

Tip: hand the fresh session the no-arg `roundtrip_check.py` table first so it sees the live state, then have it
start on the dropped-local class (option: lazy-declare in `process_locals`, or the safer find_dropped_locals
auto-patcher post-pass).

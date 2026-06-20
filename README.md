# autothief_decomp

Reverse-engineering of **CarJacker / AutoThief** ("Crazy Drive Away", Kozmogames 2005), a 2005 GTA-clone:
recovering the source (native `.exe`, Lua `.luab → .lua`), building modding tools, and a labor-of-love
improvement pass (collision, jumping, shooting, open-world, DX8→DX9).

- **`CLAUDE.md`** — orientation: layout, toolchain, methodology, conventions. Start here.
- **`ROADMAP.md`** — goals, strategy, phased plan.
- **`TODO.md`** — the actionable task pile.
- **`docs/`** — binary format specs (`PM`, `ALF`, `CITY`, `PAK`, `PSF`, `STR_DLG`), `SYMBOLS.md`, and the
  format/animation `TODO.md`.

Sibling repos: `..\ScriptsStable\` (verified decompiled Lua), `..\lua4-decompiler\` (standalone decompiler copy).

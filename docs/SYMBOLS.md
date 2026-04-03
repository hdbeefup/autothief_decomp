# AutoThief Symbol Dictionary

Function and global naming dictionary for AutoThief.exe decompilation.
Primary sources: format spec docs (`docs/`), IDA Pro named exports, string cross-references.

**Confidence levels:**
- **confirmed** — verified from strings, behavior analysis, or matching open-source code
- **likely** — strong contextual evidence (call patterns, surrounding code)
- **speculative** — educated guess

---

## PAK / File I/O

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x0040ef80 | FUN_0040ef80 | sub_40EF80 | Cipher_ROR1 | confirmed | ROR-1 per-byte rotate cipher. PAK_FORMAT.md |
| 0x004103c0 | FUN_004103c0 | sub_4103C0 | FileIO_ZipFallback | confirmed | data.zip fallback loader. PAK_FORMAT.md |
| 0x00410060 | FUN_00410060 | sub_410060 | PakArchive_LoadAndLookup | confirmed | Load pak directory, look up files by name. PAK_FORMAT.md |
| 0x00410660 | FUN_00410660 | sub_410660 | FileIO_Open | confirmed | Try pak → zip → raw fopen. PAK_FORMAT.md |
| 0x0040f000 | FUN_0040f000 | sub_40F000 | FileIO_Read | confirmed | Generic fread wrapper. PM_FORMAT.md, CITY_FORMAT.md |

### PAK Global State

| Address | Name | Type | Notes |
|---------|------|------|-------|
| 0x5B5ED4 | g_pakDirectoryLoaded | int | Set to 1 after first pak load |
| 0x5B5F00 | g_pakFileMap | std::map | Maps filename → {FILE*, offset, size} |
| 0x5B5F08 | g_pakMapEndSentinel | - | Map end() sentinel for miss detection |
| 0x5B5F0C | g_pakMapNonEmpty | int | Flag: map has entries |
| 0x5B5ECC | g_zipDirectoryLoaded | int | Set to 1 after zip directory load |
| 0x5B5ED0 | g_zipFileHandle | void* | Zip file handle (minizip) |

---

## PM Model Loading

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x00446bd0 | FUN_00446bd0 | sub_446BD0 | CPMTemplate_Load | confirmed | PM file parser (magic, header, verts, tris, materials). PM_FORMAT.md |
| 0x0043fd90 | FUN_0043fd90 | sub_43FD90 | CPMTemplate_RenderTriangles | confirmed | Triangle rendering + UV computation. PM_FORMAT.md |
| 0x0043fbe0 | FUN_0043fbe0 | sub_43FBE0 | CPMTemplate_ComputeBBox | confirmed | Bounding box calculation. PM_FORMAT.md |
| 0x00446470 | FUN_00446470 | sub_446470 | CPMTemplate_SetupMaterials | confirmed | Material/texture setup from PM file. PM_FORMAT.md |

---

## ALF Animation

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x004456c0 | FUN_004456c0 | sub_4456C0 | Animation_Load | confirmed | Builds path, reads file, calls parser. ALF_FORMAT.md |
| 0x004f5530 | FUN_004f5530 | sub_4F5530 | ALF_Parse | confirmed | Reads header, bones, keyframes, root positions. ALF_FORMAT.md |
| 0x004f5490 | FUN_004f5490 | sub_4F5490 | ALF_AllocStruct | confirmed | malloc 0x4C header + bone/frame arrays. ALF_FORMAT.md |
| 0x004f54e0 | FUN_004f54e0 | sub_4F54E0 | BinaryReader_Read | confirmed | memcpy from buffer with bounds check. ALF_FORMAT.md |

---

## City / Road Network

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x0047daa0 | FUN_0047daa0 | sub_47DAA0 | City_Parse | confirmed | Main parser: segments, junctions, connections, models. CITY_FORMAT.md |
| 0x00478960 | FUN_00478960 | sub_478960 | City_ReadSegment | confirmed | Reads into 0x13C-byte runtime object. CITY_FORMAT.md |
| 0x0046bc60 | FUN_0046bc60 | sub_46BC60 | City_ReadConnection | confirmed | Connection parser (0x28-byte objects). CITY_FORMAT.md |

---

## USMFile / STR-DLG Serialization

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x00554200 | FUN_00554200 | sub_554200 | USMFile_Load | confirmed | USMFile#2 container loader (header, footer, registry, instances). STR_DLG_FORMAT.md |
| 0x00554ad0 | FUN_00554ad0 | sub_554AD0 | USMFile_DeserializeRecord | confirmed | Generic record deserialization engine. STR_DLG_FORMAT.md |
| 0x005537a0 | FUN_005537a0 | sub_5537A0 | USMFile_BeginType | confirmed | Begin new type registration. STR_DLG_FORMAT.md |
| 0x00553820 | FUN_00553820 | sub_553820 | USMFile_AddFixedField | confirmed | Add fixed-size field to type. STR_DLG_FORMAT.md |
| 0x00553860 | FUN_00553860 | sub_553860 | USMFile_AddVarField | confirmed | Add variable-length field to type. STR_DLG_FORMAT.md |
| 0x00553ba0 | FUN_00553ba0 | sub_553BA0 | USMFile_FinalizeType | confirmed | Finalize type registration. STR_DLG_FORMAT.md |
| 0x0054aa40 | FUN_0054aa40 | sub_54AA40 | Dialog_Load | confirmed | Dialog loading + REPLIC/ANSWER type registration. STR_DLG_FORMAT.md |
| 0x00549f50 | FUN_00549f50 | sub_549F50 | StringTable_Load | confirmed | STRING_T loading from text.str. STR_DLG_FORMAT.md |
| 0x0051a0b0 | FUN_0051a0b0 | sub_51A0B0 | Dialog_LoadFile | confirmed | Dialog file loader wrapper. STR_DLG_FORMAT.md |

---

## PSF Particle System

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x004699e0 | FUN_004699e0 | sub_4699E0 | PSF_LoadFile | confirmed | fread 0x14C bytes into obj+0x118. PSF_FORMAT.md |
| 0x00469940 | FUN_00469940 | sub_469940 | PSF_RegisterInMap | confirmed | Store PSF data in hash map by filename. PSF_FORMAT.md |
| 0x00466a40 | FUN_00466a40 | sub_466A40 | Particle_LoadTexture | confirmed | Extract filename from PSF path, load TGA. PSF_FORMAT.md |
| 0x00466c50 | FUN_00466c50 | sub_466C50 | Particle_Spawn | confirmed | Randomize size/dir/velocity, alloc 0x138-byte instance. PSF_FORMAT.md |
| 0x004670d0 | FUN_004670d0 | sub_4670D0 | Particle_Update | confirmed | Apply gravity, accumulate distance, kill expired. PSF_FORMAT.md |
| 0x004573b0 | FUN_004573b0 | sub_4573B0 | ParticleSystem_Constructor | confirmed | Allocate 0x2A0-byte particle system object. PSF_FORMAT.md |

---

## CRT / Runtime (IDA Named)

These are standard library functions already identified by IDA Pro's FLIRT signatures.

| Name | Module | Notes |
|------|--------|-------|
| operator_new | crt_runtime | C++ new |
| operator_delete | crt_runtime | C++ delete |
| operator_delete[] | crt_runtime | C++ delete[] |
| malloc, calloc, free | crt_runtime | C heap |
| fopen, fclose, fread, fwrite, fseek, ftell | crt_runtime | C stdio |
| sprintf, _snprintf, _vsnprintf, sscanf | crt_runtime | String formatting |
| memset, _strdup, atoi, qsort | crt_runtime | Misc C stdlib |
| __security_check_cookie | crt_runtime | MSVC buffer overrun check (MSVC 7.1+) |
| __SEH_prolog, __SEH_epilog | crt_runtime | Structured exception handling |
| __CxxFrameHandler | crt_runtime | C++ exception frame handler |
| _CxxThrowException | crt_runtime | C++ throw |
| longjmp, setjmp3 | crt_runtime | Non-local jumps (used by Lua) |
| floor, acos, asin, atan, exp, fmod, log, pow | crt_runtime | Math functions |

---

## DirectX / Multimedia (IDA Named)

| Name | Module | Notes |
|------|--------|-------|
| Direct3DCreate8 | d3d_api | DirectX 8 initialization |
| AVIFileInit, AVIFileOpenA, AVIFileCreateStreamA | avi_video | Video for Windows |
| AVIMakeCompressedStream, AVIStreamWrite, AVIStreamSetFormat | avi_video | AVI encoding |
| AVIStreamRelease, AVIFileRelease, AVIFileExit | avi_video | AVI cleanup |

---

## Ogg Vorbis (IDA Named)

| Name | Module | Notes |
|------|--------|-------|
| ov_clear | ogg_vorbis | Close vorbis file |
| ov_comment | ogg_vorbis | Get comment metadata |
| ov_info | ogg_vorbis | Get stream info |
| ov_open_callbacks | ogg_vorbis | Open with custom I/O |
| ov_pcm_seek | ogg_vorbis | Seek to PCM position |
| ov_pcm_total | ogg_vorbis | Get total PCM length |
| ov_read | ogg_vorbis | Decode audio data |

---

## ATL/COM (IDA Named)

| Name | Module | Notes |
|------|--------|-------|
| CAtlComModule | atl_com | ATL COM module class |
| CAtlWinModule | atl_com | ATL Windows module class |

---

## Texture Loading

| Address | Ghidra | IDA | Name | Confidence | Notes |
|---------|--------|-----|------|------------|-------|
| 0x00429a60 | FUN_00429a60 | sub_429A60 | Texture_LoadTGA | likely | TGA texture load (referenced by PSF sprite loading). PSF_FORMAT.md |

---

## Lua 4.0 VM (matched by error strings via harvest_symbols.py)

Functions currently mis-classified in "compression" module — these are Lua 4.0 VM internals.

| Address | Ghidra | IDA | Name | Confidence | Lua Source | Matched String |
|---------|--------|-----|------|------------|------------|----------------|
| 0x00412294 | FUN_00412294 | sub_412294 | luaD_checkstack | confirmed | ldo.c | "stack overflow" |
| 0x00412DF0 | FUN_00412df0 | sub_412DF0 | luaT_validevent | confirmed | ltm.c | "invalid tag" |
| 0x004131E0 | FUN_004131e0 | sub_4131E0 | luaH_next | confirmed | lhash.c | "table overflow" |
| 0x004135A0 | FUN_004135a0 | sub_4135A0 | luaH_next_variant | confirmed | lhash.c | "table overflow" |
| 0x00413834 | FUN_00413834 | sub_413834 | luaT_settagmethod | confirmed | ltm.c | "tag method must be a function" |
| 0x00414250 | FUN_00414250 | sub_414250 | luaV_lessthan | confirmed | lvm.c | "attempt to compare two" |
| 0x004143D0 | FUN_004143d0 | sub_4143D0 | luaV_execute | confirmed | lvm.c | "`for' step must be a number" |
| 0x00417758 | FUN_00417758 | sub_417758 | luaH_next_variant2 | confirmed | lhash.c | "table overflow" |
| 0x00417F98 | FUN_00417f98 | sub_417F98 | luaH_set | confirmed | lhash.c | "constant table overflow" |
| 0x00418B6C | FUN_00418b6c | sub_418B6C | luaH_set_variant | confirmed | lhash.c | "constant table overflow" |
| 0x0041952C | FUN_0041952c | sub_41952C | luaY_parser | confirmed | lparser.c | "unexpected end of file" |
| 0x0041AF58 | FUN_0041af58 | sub_41AF58 | luaH_set_variant2 | confirmed | lhash.c | "constant table overflow" |
| 0x0041C0F0 | FUN_0041c0f0 | sub_41C0F0 | luaY_read_long_string | confirmed | llex.c | "unfinished long string" |
| 0x0041C334 | FUN_0041c334 | sub_41C334 | luaY_read_string | confirmed | llex.c | "unfinished string" |
| 0x0042E510 | FUN_0042e510 | sub_42E510 | luaM_realloc | confirmed | lmem.c | "not enough memory" |
| 0x004A7213 | FUN_004a7213 | sub_4A7213 | luaD_checkstack_2 | confirmed | ldo.c | "stack overflow" |
| 0x0054B9E0 | FUN_0054b9e0 | sub_54B9E0 | luaM_realloc_2 | confirmed | lmem.c | "not enough memory" |
| 0x0054BB54 | FUN_0054bb54 | sub_54BB54 | luaM_realloc_3 | confirmed | lmem.c | "not enough memory" |
| 0x0054C07C | FUN_0054c07c | sub_54C07C | lua_db_line | confirmed | ldblib.c | "lua_debug> " |
| 0x0054CBFC | FUN_0054cbfc | sub_54CBFC | luaL_check_args | confirmed | lauxlib.c | "wrong number of arguments" |
| 0x0054F994 | FUN_0054f994 | sub_54F994 | lua_version | confirmed | lstate.c | "Lua 4.0" |
| 0x0054FD40 | FUN_0054fd40 | sub_54FD40 | luaD_checkstack_3 | confirmed | ldo.c | "stack overflow" |
| 0x0055029C | FUN_0055029c | sub_55029C | luaL_argerror | confirmed | lauxlib.c | "bad argument" |

Note: Multiple addresses match the same Lua function name (e.g., `luaH_set` appears 3 times). These are likely inlined copies or compiler-duplicated versions. Cross-check against Lua 4.0.1 source to disambiguate.

---

## zlib (matched by error strings via harvest_symbols.py)

zlib version appears to be 1.1.x (matched string `"1.1."`). Two copies exist — likely one statically linked, one from a DLL or separate compilation unit.

| Address | Ghidra | IDA | Name | Confidence | zlib Source | Matched String |
|---------|--------|-----|------|------------|------------|----------------|
| 0x004B350E | FUN_004b350e | sub_4B350E | zlibVersion | confirmed | zlib.c | "1.1." |
| 0x004BA4DB | FUN_004ba4db | sub_4BA4DB | inflate | confirmed | inflate.c | "incorrect header check" |
| 0x004CA151 | FUN_004ca151 | sub_4CA151 | inflate_blocks | confirmed | infblock.c | "invalid block type" |
| 0x004CC4F5 | FUN_004cc4f5 | sub_4CC4F5 | inflate_codes | confirmed | infcodes.c | "invalid literal/length code" |
| 0x004CECFD | FUN_004cecfd | sub_4CECFD | inflate_codes_2 | confirmed | infcodes.c | "invalid distance code" |
| 0x004D0770 | FUN_004d0770 | sub_4D0770 | zlibVersion_2 | confirmed | zlib.c | "1.1." |
| 0x004D0D60 | FUN_004d0d60 | sub_4D0D60 | inflate_2 | confirmed | inflate.c | "unknown compression method" |
| 0x004D13C0 | FUN_004d13c0 | sub_4D13C0 | inflate_blocks_2 | confirmed | infblock.c | "invalid block type" |
| 0x004D2100 | FUN_004d2100 | sub_4D2100 | inflate_codes_3 | confirmed | infcodes.c | "invalid literal/length code" |
| 0x004D30D0 | FUN_004d30d0 | sub_4D30D0 | inflate_codes_4 | confirmed | infcodes.c | "invalid distance code" |

---

## Engine Subsystems (matched by string cross-references)

Functions identified by unique string literals in their bodies.

| Address | Ghidra | IDA | Name | Confidence | String Evidence |
|---------|--------|-----|------|------------|-----------------|
| 0x00465D40 | FUN_00465d40 | sub_465D40 | CTerrain_Init | confirmed | "CTerrain: Initialized ok, subdivLevel = %d" |
| 0x00476B60 | FUN_00476b60 | sub_476B60 | CRoadNetwork_BuildTreeRenderable | confirmed | "CRoadNetwork::BuildTreeRenderable()" |
| 0x00479450 | FUN_00479450 | sub_479450 | CRoadNetwork_BuildTree | confirmed | "CRoadNetwork::BuildTree()" |
| 0x004803B0 | FUN_004803b0 | sub_4803B0 | CRoadNetwork_TerrainCheck | likely | "CRoadNetwork: terrain missed information" |
| 0x00483C80 | FUN_00483c80 | sub_483C80 | CRoadNetwork_BuildAllotments | confirmed | "CRoadNetwork: allotments (%d convex %d concave)" |
| 0x00484F60 | FUN_00484f60 | sub_484F60 | CRoadNetwork_BuildShapes | confirmed | "CRoadNetwork: %d buildings shapes generated" |
| 0x0041DA10 | FUN_0041da10 | sub_41DA10 | pbeScene_AssertFunc1 | likely | "Src\\pbeScene.cpp" (debug assert) |
| 0x0041E330 | FUN_0041e330 | sub_41E330 | pbeScene_AssertFunc2 | likely | "Src\\pbeScene.cpp" (debug assert) |
| 0x0041E470 | FUN_0041e470 | sub_41E470 | pbeScene_AssertFunc3 | likely | "Src\\pbeScene.cpp" (debug assert) |
| 0x004FB620 | FUN_004fb620 | sub_4FB620 | pbeTexture_Main | likely | "Src\\pbeTexture.cpp" (multiple refs) |
| 0x0040AC60 | FUN_0040ac60 | sub_40AC60 | Input_OnKeyDn | confirmed | "OnKeyDn" |
| 0x0040ABA0 | FUN_0040aba0 | sub_40ABA0 | Input_OnKeyUp | confirmed | "OnKeyUp" |
| 0x00405940 | FUN_00405940 | sub_405940 | Config_Load | likely | "Config.ini" |
| 0x0042B540 | FUN_0042b540 | sub_42B540 | Config_ReadSetting | likely | "Config.ini" |

---

## Summary

| Category | Named Functions | Source |
|----------|----------------|--------|
| PAK / File I/O | 5 + 6 globals | PAK_FORMAT.md |
| PM Model | 4 | PM_FORMAT.md |
| ALF Animation | 4 | ALF_FORMAT.md |
| City / Road | 3 | CITY_FORMAT.md |
| USMFile / STR-DLG | 9 | STR_DLG_FORMAT.md |
| PSF Particles | 6 | PSF_FORMAT.md |
| Texture | 1 | PSF_FORMAT.md |
| Lua 4.0 VM | 23 | harvest_symbols.py --lua-match |
| zlib | 10 | harvest_symbols.py --zlib-match |
| Engine subsystems | 14 | harvest_symbols.py --scan-strings |
| CRT/Runtime | ~40 | IDA FLIRT signatures |
| DirectX/AVI | ~10 | IDA FLIRT signatures |
| Ogg Vorbis | 7 | IDA FLIRT signatures |
| ATL/COM | 2 | IDA FLIRT signatures |
| **Total** | **~138 game + ~60 library** | |

### TODO: Next naming passes

- [x] ~~**Lua 4.0 VM** — Match "compression" module functions against Lua 4.0.1 source~~ (23 matched)
- [x] ~~**zlib** — Match inflate/deflate functions against zlib source~~ (10 matched)
- [x] ~~**String cross-refs** — Functions referencing pbeScene, pbeTexture, CTerrain, etc.~~ (14 matched)
- [ ] **Lua 4.0 deep pass** — Download Lua 4.0.1 source, match ALL Lua functions (not just those with error strings). Expected: 100+ more
- [ ] **Ogg Vorbis deep pass** — Match ov_* function bodies against libvorbisfile source
- [ ] **zlib deep pass** — Match remaining zlib/PNG functions (adler32, crc32, deflate, etc.)
- [ ] **Lua script callbacks** — Match CamelCase command strings (InsertTerrain, InsertRoadNetwork, etc.) to their registration functions
- [ ] **AutoThief↔CarJacker2 cross-check** — Identify shared engine vs game-specific functions
- [ ] **Fix split_autothief.py** — Separate "compression" module into lua_vm + zlib + png

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

## Lua 4.0.1 VM (deep match via lua_match.py against Lua 4.0.1 source)

**136 functions matched** (115 confirmed, 21 likely). Multiple addresses matching the same name
indicate inlined copies or compiler-duplicated code. Address range 0x0041xxxx–0x0041Cxxx is the
main Lua VM block; 0x0044xxxx–0x0045xxxx are game-side Lua wrappers; 0x0054xxxx–0x0055xxxx are
the Lua standard libraries (io, string, math, debug, base).

### Lua Core VM (lapi, lcode, ldebug, ldo, llex, lmem, lobject, lparser, lstate, ltable, ltm, lundump, lvm)

| Address | IDA | Name | Confidence | Source | Key Strings |
|---------|-----|------|------------|--------|-------------|
| 0x00411F64 | sub_411F64 | luaD_lineHook | confirmed | ldo.c | `line` |
| 0x00412294 | sub_412294 | luaD_checkstack | confirmed | ldo.c | `stack overflow` |
| 0x00412564 | sub_412564 | parse_file | confirmed | ldo.c | `(stdin)`, `@` |
| 0x00412830 | sub_412830 | parse_buffer | confirmed | ldo.c | `?` |
| 0x00412AE4 | sub_412AE4 | lua_typename | confirmed | lapi.c | `no value` |
| 0x00412DF0 | sub_412DF0 | lua_pushusertag | confirmed | lapi.c | `invalid tag for a userdata (%d)` |
| 0x004131E0 | sub_4131E0 | lua_ref | confirmed | lapi.c | `reference table overflow` |
| 0x00413304 | sub_413304 | lua_settag | confirmed | lapi.c | `cannot change the tag of a %.20s` |
| 0x00413410 | sub_413410 | lua_getn | confirmed | lapi.c | `n` |
| 0x004135A0 | sub_4135A0 | lua_newtag | confirmed | ltm.c | `tag table overflow` |
| 0x004135E4 | sub_4135E4 | luaT_realtag | confirmed | ltm.c | `tag %d was not created by 'newtag'` |
| 0x0041369C | sub_41369C | checktag | confirmed | ltm.c | `%d is not a valid tag` |
| 0x00413764 | sub_413764 | luaI_checkevent | confirmed | ltm.c | `event '%.50s' is deprecated`, `'%.50s' is not a valid event name` |
| 0x00413834 | sub_413834 | lua_settagmethod | confirmed | ltm.c | `tag method must be a function (or nil)`, `cannot change '%.20s' tag method` |
| 0x00413D50 | sub_413D50 | getobjname | confirmed | ldebug.c | `field`, `global`, `local` |
| 0x00413F9C | sub_413F9C | getname | confirmed | ldebug.c | `global`, `tag-method` |
| 0x004141AC | sub_4141AC | funcinfo | confirmed | ldebug.c | `=C`, `C`, `main`, `value for 'lua_getinfo' is not a function` |
| 0x00414230 | sub_414230 | infoLproto | confirmed | ldebug.c | `Lua` |
| 0x00414250 | sub_414250 | luaG_ordererror | confirmed | ldebug.c | `attempt to compare two %.10s values` |
| 0x004142C0 | sub_4142C0 | luaG_typeerror | confirmed | ldebug.c | `attempt to %.30s %.20s '%.40s' (a %.10s value)` |
| 0x004143D0 | sub_4143D0 | luaV_execute | confirmed | lvm.c | `'for' step/limit/index must be a number` (6 strings) |
| 0x0041643C | sub_41643C | luaV_strconc | confirmed | lvm.c | `string size overflow` |
| 0x00416674 | sub_416674 | call_arith | confirmed | lvm.c | `perform arithmetic on` |
| 0x0041670C | sub_41670C | lua_getn | confirmed | lapi.c | `n` |
| 0x004170A4 | sub_4170A4 | luaH_next | confirmed | ltable.c | `invalid key for 'next'` |
| 0x0041716C | sub_41716C | luaH_getany | confirmed | ltable.c | `table index is nil` |
| 0x004174A4 | sub_4174A4 | luaH_getany | confirmed | ltable.c | `table index is nil` |
| 0x00417758 | sub_417758 | setnodevector | confirmed | ltable.c | `table overflow` |
| 0x00417928 | sub_417928 | luaY_parser | confirmed | lparser.c | `<eof> expected` |
| 0x00417A4C | sub_417A4C | stat | confirmed | lparser.c | `<statement> expected` |
| 0x00417B70 | sub_417B70 | breakstat | confirmed | lparser.c | `no loop to break` |
| 0x00417D64 | sub_417D64 | simpleexp | confirmed | lparser.c | `<expression> expected` |
| 0x00417ED4 | sub_417ED4 | singlevar | confirmed | lparser.c | `cannot access a variable in outer scope` |
| 0x00417F98 | sub_417F98 | number_constant | confirmed | lcode.c | `constant table overflow` |
| 0x00417FF0 | sub_417FF0 | pushupvalue | confirmed | lparser.c | `cannot access upvalue in main` |
| 0x00418074 | sub_418074 | indexupvalue | confirmed | lparser.c | `upvalues` |
| 0x00418200 | sub_418200 | funcargs | confirmed | lparser.c | `function arguments expected` |
| 0x004182B8 | sub_4182B8 | constructor | confirmed | lparser.c | `invalid constructor syntax` |
| 0x004183D4 | sub_4183D4 | listfields | confirmed | lparser.c | `'item groups' in a list initializer` |
| 0x004185D4 | sub_4185D4 | recfield | confirmed | lparser.c | `<name> or '[' expected` |
| 0x00418668 | sub_418668 | check_match | confirmed | lparser.c | `'%.20s' expected (to close '%.20s' at line %d)` |
| 0x00418784 | sub_418784 | body | confirmed | lparser.c | `self` |
| 0x00418818 | sub_418818 | parlist | confirmed | lparser.c | `<name> or '...' expected` |
| 0x00418894 | sub_418894 | str_checkname | confirmed | lparser.c | `<name> expected` |
| 0x004188C4 | sub_4188C4 | new_localvar | confirmed | lparser.c | `local variables` |
| 0x00418978 | sub_418978 | code_params | confirmed | lparser.c | `arg` |
| 0x00418B6C | sub_418B6C | number_constant | confirmed | lcode.c | `constant table overflow` |
| 0x00418D2C | sub_418D2C | assignment | confirmed | lparser.c | `variables in a multiple assignment` |
| 0x00419040 | sub_419040 | forstat | confirmed | lparser.c | `'=' or ',' expected` |
| 0x004190C0 | sub_4190C0 | forlist | confirmed | lparser.c | `(table)`, `in` |
| 0x004191C8 | sub_4191C8 | fornum | confirmed | lparser.c | `(limit)`, `(step)` |
| 0x00419430 | sub_419430 | error_expected | confirmed | lparser.c | `'%.20s' expected` |
| 0x0041952C | sub_41952C | unexpectedEOZ | confirmed | lundump.c | `unexpected end of file in '%.99s'` |
| 0x0041956C | sub_41956C | LoadCode | confirmed | lundump.c | `bad code in '%.99s'` |
| 0x00419954 | sub_419954 | infoLproto | confirmed | ldebug.c | `Lua` |
| 0x00419E70 | sub_419E70 | luaM_realloc | confirmed | lmem.c | `memory allocation error: block too big` |
| 0x0041AAE4 | sub_41AAE4 | luaK_code2 | confirmed | lcode.c | `code size overflow` |
| 0x0041AE84 | sub_41AE84 | luaK_deltastack | confirmed | lcode.c | `function or expression too complex` |
| 0x0041AEE4 | sub_41AEE4 | codelineinfo | confirmed | lcode.c | `line info overflow` |
| 0x0041AF58 | sub_41AF58 | number_constant | confirmed | lcode.c | `constant table overflow` |
| 0x0041B3D0 | sub_41B3D0 | luaK_fixjump | confirmed | lcode.c | `control structure too long` |
| 0x0041B960 | sub_41B960 | luaX_lex | confirmed | llex.c | `unexpected '$' (pragmas are no longer supported)` |
| 0x0041BDB0 | sub_41BDB0 | inclinenumber | confirmed | llex.c | `lines in a chunk` |
| 0x0041BDFC | sub_41BDFC | luaX_checklimit | confirmed | llex.c | `too many %.50s (limit=%d)` |
| 0x0041BE38 | sub_41BE38 | read_number | confirmed | llex.c | `malformed number` |
| 0x0041C0F0 | sub_41C0F0 | read_long_string | confirmed | llex.c | `unfinished long string` |
| 0x0041C334 | sub_41C334 | read_string | confirmed | llex.c | `unfinished string`, `escape sequence too large` |
| 0x0041C824 | sub_41C824 | luaX_invalidchar | confirmed | llex.c | `invalid control char` |
| 0x0054FCAC | sub_54FCAC | errormessage | likely | lstate.c | `(no message)` |

### Lua Standard Libraries (lauxlib, lbaselib, ldblib, liolib, lstrlib, lmathlib)

| Address | IDA | Name | Confidence | Source | Key Strings |
|---------|-----|------|------------|--------|-------------|
| 0x0040D0A0 | sub_40D0A0 | io_seek | likely | liolib.c | `set` |
| 0x0040DAE0 | sub_40DAE0 | io_seek | likely | liolib.c | `set` |
| 0x00416620 | sub_416620 | io_write | confirmed | liolib.c | `%.16g` |
| 0x00418CCC | sub_418CCC | passresults | likely | lbaselib.c | `syntax error` |
| 0x004498E0 | sub_4498E0 | luaB_print | likely | lbaselib.c | `tostring` |
| 0x004499E0 | sub_4499E0 | luaB_print | likely | lbaselib.c | `tostring` |
| 0x004561A0 | sub_4561A0 | setloc | likely | liolib.c | `time` |
| 0x004578F0 | sub_4578F0 | code_params | confirmed | lparser.c | `arg` |
| 0x004579D0 | sub_4579D0 | code_params | confirmed | lparser.c | `arg` |
| 0x00457AC0 | sub_457AC0 | code_params | confirmed | lparser.c | `arg` |
| 0x00457BE0 | sub_457BE0 | code_params | confirmed | lparser.c | `arg` |
| 0x00457CE0 | sub_457CE0 | code_params | confirmed | lparser.c | `arg` |
| 0x00457E20 | sub_457E20 | code_params | confirmed | lparser.c | `arg` |
| 0x004583E0 | sub_4583E0 | luaB_print | likely | lbaselib.c | `tostring` |
| 0x004A5396 | sub_4A5396 | passresults | likely | lbaselib.c | `syntax error` |
| 0x004A68DC | sub_4A68DC | passresults | likely | lbaselib.c | `syntax error` |
| 0x004A7213 | sub_4A7213 | passresults | likely | lbaselib.c | `syntax error` |
| 0x004A76CC | sub_4A76CC | funcinfo | likely | ldebug.c | `C` |
| 0x00530870 | sub_530870 | getinfo | likely | ldblib.c | `name` |
| 0x00530940 | sub_530940 | getinfo | likely | ldblib.c | `name` |
| 0x00544590 | sub_544590 | getinfo | likely | ldblib.c | `name` |
| 0x0054AD20 | sub_54AD20 | getinfo | confirmed | ldblib.c | `flnSu`, `source`, `currentline`, `nups`, `name`, `func` (12 strings) |
| 0x0054AFA8 | sub_54AFA8 | getlocal | confirmed | ldblib.c | `level out of range` |
| 0x0054B0C0 | sub_54B0C0 | getlocal | confirmed | ldblib.c | `level out of range` |
| 0x0054B294 | sub_54B294 | sethook | confirmed | ldblib.c | `function expected` |
| 0x0054B3A0 | sub_54B3A0 | getnonullfile | confirmed | liolib.c | `invalid file handle` |
| 0x0054B3D4 | sub_54B3D4 | gethandle | confirmed | liolib.c | `cannot access a closed file` |
| 0x0054B63C | sub_54B63C | getfilebyref | confirmed | liolib.c | `global variable '%.10s' is not a file handle` |
| 0x0054B730 | sub_54B730 | io_read | likely | liolib.c | `*l`, `invalid format`, `too many arguments` |
| 0x0054B9E0 | sub_54B9E0 | read_file | confirmed | liolib.c | `not enough memory to read a file` |
| 0x0054BB54 | sub_54BB54 | read_file | confirmed | liolib.c | `not enough memory to read a file` |
| 0x0054BBF0 | sub_54BBF0 | io_write | confirmed | liolib.c | `%.16g` |
| 0x0054BD1C | sub_54BD1C | io_seek | likely | liolib.c | `cur` |
| 0x0054BE20 | sub_54BE20 | getnonullfile | confirmed | liolib.c | `invalid file handle` |
| 0x0054BF9C | sub_54BF9C | io_date | confirmed | liolib.c | `%c`, `invalid 'date' format` |
| 0x0054C018 | sub_54C018 | setloc | likely | liolib.c | `all` |
| 0x0054C07C | sub_54C07C | io_debug | likely | liolib.c | `lua_debug> ` |
| 0x0054C134 | sub_54C134 | openwithcontrol | likely | liolib.c | `_STDIN`, `_STDOUT`, `_STDERR` |
| 0x0054C278 | sub_54C278 | errorfb | likely | liolib.c | `error: `, `stack traceback:\n`, `function '%.50s'` |
| 0x0054CBFC | sub_54CBFC | math_random | confirmed | lbaselib.c | `interval is empty`, `wrong number of arguments` |
| 0x0054CFD4 | sub_54CFD4 | lua_mathlibopen | confirmed | lbaselib.c | `PI`, `pow` |
| 0x0054D390 | sub_54D390 | str_byte | confirmed | lstrlib.c | `out of range` |
| 0x0054D454 | sub_54D454 | str_char | confirmed | lstrlib.c | `invalid value` |
| 0x0054D564 | sub_54D564 | str_byte | confirmed | lstrlib.c | `out of range` |
| 0x0054D9BC | sub_54D9BC | luaI_classend | confirmed | lstrlib.c | `malformed pattern (ends with '%')` |
| 0x0054DA44 | sub_54DA44 | matchbalance | confirmed | lstrlib.c | `unbalanced pattern` |
| 0x0054DDF8 | sub_54DDF8 | capture_to_close | confirmed | lstrlib.c | `invalid pattern capture` |
| 0x0054DE28 | sub_54DE28 | start_capture | confirmed | lstrlib.c | `too many captures` |
| 0x0054DE80 | sub_54DE80 | push_captures | confirmed | lstrlib.c | `too many captures`, `unfinished capture` |
| 0x0054DFBC | sub_54DFBC | str_gsub | confirmed | lstrlib.c | `string or function expected` |
| 0x0054E30C | sub_54E30C | check_capture | confirmed | lstrlib.c | `invalid capture index` |
| 0x0054E344 | sub_54E344 | str_format | confirmed | lstrlib.c | `invalid option in 'format'` |
| 0x0054E7FC | sub_54E7FC | luaB_tonumber | confirmed | lbaselib.c | `base out of range` |
| 0x0054EC28 | sub_54EC28 | luaB_settagmethod | confirmed | lbaselib.c | `gc`, `deprecated use: cannot set the 'gc' tag method` |
| 0x0054ED30 | sub_54ED30 | luaB_gettagmethod | confirmed | lbaselib.c | `gc`, `deprecated use: cannot get the 'gc' tag method` |
| 0x0054EF3C | sub_54EF3C | luaB_dostring | confirmed | lbaselib.c | `'dostring' cannot run pre-compiled code` |
| 0x0054F01C | sub_54F01C | luaB_call | confirmed | lbaselib.c | `too many arguments`, `deprecated option 'p' in 'call'` |
| 0x0054F154 | sub_54F154 | luaB_tostring | confirmed | lbaselib.c | `table: %p`, `function: %p`, `userdata(%d): %p`, `nil` |
| 0x0054F388 | sub_54F388 | luaB_assert | confirmed | lbaselib.c | `assertion failed!  %.90s` |
| 0x0054F408 | sub_54F408 | lua_getn | confirmed | lapi.c | `n` |
| 0x0054F510 | sub_54F510 | lua_getn | confirmed | lapi.c | `n` |
| 0x0054F670 | sub_54F670 | auxsort | confirmed | lbaselib.c | `invalid order function for sorting` |
| 0x0054F994 | sub_54F994 | lua_baselibopen | confirmed | lbaselib.c | `_VERSION` |
| 0x0054FD40 | sub_54FD40 | luaL_checkstack | confirmed | lauxlib.c | `stack overflow (%.30s)` |
| 0x0054FD94 | sub_54FD94 | luaL_checkany | confirmed | lauxlib.c | `value expected` |
| 0x0055024C | sub_55024C | type_error | confirmed | lauxlib.c | `%.8s expected, got %.8s` |
| 0x0055029C | sub_55029C | lua_getn | confirmed | lapi.c | `n` |

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
| Lua 4.0.1 VM (core) | 68 | lua_match.py (deep) |
| Lua 4.0.1 Std Libs | 68 | lua_match.py (deep) |
| zlib | 10 | harvest_symbols.py --zlib-match |
| Engine subsystems | 14 | harvest_symbols.py --scan-strings |
| CRT/Runtime | ~40 | IDA FLIRT signatures |
| DirectX/AVI | ~10 | IDA FLIRT signatures |
| Ogg Vorbis | 7 | IDA FLIRT signatures |
| ATL/COM | 2 | IDA FLIRT signatures |
| **Total** | **~251 game + ~60 library** | |

### TODO: Next naming passes

- [x] ~~**Lua 4.0 VM** — Match against Lua 4.0.1 source~~ (136 matched, 115 confirmed + 21 likely)
- [x] ~~**zlib** — Match inflate/deflate functions against zlib source~~ (10 matched)
- [x] ~~**String cross-refs** — Functions referencing pbeScene, pbeTexture, CTerrain, etc.~~ (14 matched)
- [ ] **Ogg Vorbis deep pass** — Match ov_* function bodies against libvorbisfile source
- [ ] **zlib deep pass** — Match remaining zlib/PNG functions (adler32, crc32, deflate, etc.)
- [ ] **Lua script callbacks** — Match CamelCase command strings (InsertTerrain, InsertRoadNetwork, etc.) to their registration functions
- [ ] **AutoThief↔CarJacker2 cross-check** — Identify shared engine vs game-specific functions
- [ ] **Fix split_autothief.py** — Separate "compression" module into lua_vm + zlib + png

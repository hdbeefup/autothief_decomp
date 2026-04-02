# STR/DLG String and Dialog Format Specification

**Game:** AutoThief / CarJacker (Kozmogames, 2005)  
**Engine:** PBE Engine (USMFile serialization engine)  
**Magic:** `USMFile#2\0` (10 bytes)  
**File extensions:** `.str`, `.dlg`  
**Path convention:** `Texts/text.str`, `Texts/text.dlg`  

---

## File Layout Overview

| Region | Offset | Size | Description |
|--------|--------|------|-------------|
| Header | 0x000 | 10 | Magic string `USMFile#2\0` |
| Data Section | 0x00A | varies | Serialized type records (STRING_T, DIALOG_REPLIC_T, DIALOG_ANSWER_T) |
| Instance Section | footer[1] | varies | Object tree mapping named groups to data records |
| Type Registry | footer[0] | varies | Self-describing struct/field definitions |
| Footer | EOF-8 | 8 | Two uint32 offsets: type_registry_offset, instance_section_offset |

---

## USMFile#2 Container Format

Both `.str` and `.dlg` files share this generic container format. The engine's deserialization function (`FUN_00554200`) parses it.

### Header (10 bytes)

```
Offset  Size  Description
0x000   10    Magic: "USMFile#2\0" (55 53 4D 46 69 6C 65 23 32 00)
```

### Footer (last 8 bytes of file)

```
Offset      Size  Description
EOF - 8     4     Type registry absolute file offset (little-endian uint32)
EOF - 4     4     Instance section absolute file offset (little-endian uint32)
```

### Type Registry

Located at the offset stored in `footer[0]`. Describes the struct types used in the file.

```
Offset  Size     Description
+0x00   4        num_types (uint32)

Per type:
  +0x00   4      flags (uint32, typically 0x00 or 0x01)
  +0x04   4      name_length (uint32, includes null terminator)
  +0x08   N      type_name (null-terminated ASCII string, N = name_length)
  +N      4      num_fields (uint32)

  Per field:
    +0x00   4    field_type (uint32): 0 = fixed-size, 1 = variable-length
    +0x04   4    field_name_length (uint32, includes null terminator)
    +0x08   N    field_name (null-terminated ASCII string)
    +N      4    field_size (uint32, byte size for fixed fields)

    If field_type == 1 (variable-length), additional data follows:
      +0x00   4  secondary_name_length (uint32)
      +0x04   N  secondary_field_name (null-terminated, typically "size")
```

**Variable-length fields** (type 1) store data with a uint32 length prefix in the data section. The secondary field name references the companion size field. In the data section, variable fields are serialized as: `length(u32) + data(length bytes)`.

### Instance Section

Located at the offset stored in `footer[1]`. Maps named object groups to their data records.

```
Offset  Size     Description
+0x00   4        initial_entries_count (uint32, typically 0)

Per initial entry (if count > 0):
  12 bytes: 3 x uint32 (metadata)

Then repeated instance blocks until type_registry_offset:

Per block:
  +0x00   4      inst_type (uint32, always 1 for data blocks)
  +0x04   4      sequential_id (uint32, 1-based sequential block ID)
  +0x08   4      parent_id (uint32, 0 = root, otherwise parent block's sequential_id)
  +0x0C   1      name_length (uint8, includes null terminator)
  +0x0D   N      name (null-terminated ASCII string, N = name_length)
  +N      4      sub_count (uint32, number of sub-entries)

  Per sub-entry:
    +0x00   4    type_index (uint32, index into type registry)
    +0x04   4    record_count (uint32, number of records)
    +0x08   4    data_offset (uint32, absolute file offset to first record)
```

**Tree structure:** Blocks with `parent_id == 0` are root-level objects. Blocks with `parent_id != 0` are children of the block with that `sequential_id`. This forms a tree hierarchy used for dialog groups and their answer sets.

---

## STRING_T Record Format (text.str)

Type registered with 3 fields:

| Field | Type | Size | Description |
|-------|------|------|-------------|
| `id` | fixed | 4 bytes | String identifier (uint32) |
| `str` | variable | 4 + N bytes | String content: uint32 length prefix + null-terminated ASCII/Latin-1 data |
| `size` | fixed | 4 bytes | Redundant copy of string length (== str length prefix) |

**Record layout in data section:**
```
+0x00   4      id (uint32)
+0x04   4      str_length (uint32, includes null terminator)
+0x08   N      str_data (null-terminated string, N = str_length)
+N      4      size (uint32, equals str_length)
```

Records are **variable-length** due to the `str` field. They are stored sequentially starting at the data_offset from the instance section's sub-entry.

**Instance section:** Contains a single root block (e.g., `"ENGLISH"`) with one sub-entry of type_index=0 referencing all STRING_T records.

**String content types:**
- Dialog section names (e.g., `"GeneralChat"`, `"Mission1"`)
- NPC dialog lines (e.g., `"What do you want ?"`)
- Player response text (e.g., `"Nothing, just walking around!"`)
- Lua script code (e.g., `"goodbye ()"`, `"missionID = 2\r\ngoodbye ()"`)
- UI element references (e.g., `"#220 150 gui\\carphoto1"`)

---

## DIALOG_REPLIC_T Record Format (text.dlg)

Type registered with 8 fields, 29 bytes per record:

| Offset | Field | Type | Size | Description |
|--------|-------|------|------|-------------|
| 0x00 | `x` | fixed | 4 | Dialog box X position on screen (uint32) |
| 0x04 | `y` | fixed | 4 | Dialog box Y position on screen (uint32) |
| 0x08 | `w` | fixed | 4 | Dialog box width (uint32) |
| 0x0C | `h` | fixed | 4 | Dialog box height (uint32) |
| 0x10 | `bSelected` | fixed | 1 | Selection state flag (uint8) |
| 0x11 | `mID` | fixed | 4 | Replic ID within its dialog group (uint32, 1-based) |
| 0x15 | `mQuestionID` | fixed | 4 | String ID in text.str for the NPC question text (uint32) |
| 0x19 | `mPreQuestionID` | fixed | 4 | String ID for pre-question text (uint32, 0 = none) |

Total: 29 bytes (0x1D) per record.

---

## DIALOG_ANSWER_T Record Format (text.dlg)

Type registered with 3 fields, 12 bytes per record:

| Offset | Field | Type | Size | Description |
|--------|-------|------|------|-------------|
| 0x00 | `mNextReplicID` | fixed | 4 | ID of next replic to display (uint32, 0xFFFF = end dialog) |
| 0x04 | `mAnswerID` | fixed | 4 | String ID in text.str for the player's answer text (uint32) |
| 0x08 | `mResultID` | fixed | 4 | String ID in text.str for Lua code to execute (uint32) |

Total: 12 bytes (0x0C) per record.

---

## Dialog Tree Structure

The `.dlg` instance section encodes dialog conversations as a tree:

### Root Blocks (Dialog Sections)

Root blocks have `parent_id == 0`. Their **name** is the string ID (as a decimal string) in `text.str` that holds the dialog section name:

| Block Name | String ID | Section Name |
|------------|-----------|-------------|
| `"1"` | 1 | GeneralChat |
| `"5"` | 5 | Mission1 |
| `"15"` | 15 | Mission2 |
| `"42"` | 42 | Cop talk |
| `"48"` | 48 | Mission 3 |
| `"59"` | 59 | (Russian text) |
| `"90"` | 90 | Mission 4 |
| `"104"` | 104 | Race |
| `"122"` | 122 | Gas Station |

Each root block has a sub-entry with `type_index=0` (DIALOG_REPLIC_T) containing the NPC question/statement records.

### Answer Blocks

Child blocks have `parent_id` pointing to a root block. They are named `"ANSWERS_N"` where N is a 1-based index. Each has a sub-entry with `type_index=1` (DIALOG_ANSWER_T) containing the player response options.

### Dialog Flow

```
Dialog Section (root block)
  |
  +-- DIALOG_REPLIC_T records (NPC questions)
  |     Each has mID, mQuestionID -> str text, mPreQuestionID -> str text
  |
  +-- ANSWERS_1 (child block for replic with mID matching sequence)
  |     +-- DIALOG_ANSWER_T records
  |           mAnswerID -> str text (player choice)
  |           mResultID -> str text (Lua code to execute)
  |           mNextReplicID -> next replic mID (or 0xFFFF to end)
  |
  +-- ANSWERS_2 (child block)
  |     +-- DIALOG_ANSWER_T records
  ...
```

### Cross-References

All `mQuestionID`, `mAnswerID`, `mResultID`, and `mPreQuestionID` values are string IDs that reference entries in `text.str`. The referenced string may contain:
- Plain display text (for questions and answers)
- Lua script code (for results, executed when the player picks that answer)
- UI layout directives (e.g., `"#220 150 gui\\carphoto1"` to display an image)

---

## Ghidra Decompilation References

| Function | File | Description |
|----------|------|-------------|
| `FUN_00554200` | globals_08.c:2322 | USMFile#2 container loader (header, footer, type registry, instance section) |
| `FUN_00554ad0` | globals_08.c:2696 | Generic record deserialization engine |
| `FUN_005537a0` | globals_08.c:1558 | Type registration (begin new type) |
| `FUN_00553820` | globals_08.c:1598 | Add fixed-size field to type |
| `FUN_00553860` | globals_08.c:1619 | Add variable-length field to type |
| `FUN_00553ba0` | globals_08.c:1897 | Finalize type registration |
| `FUN_0054aa40` | gui.c:1900 | Dialog loading and DIALOG_REPLIC_T/DIALOG_ANSWER_T type registration |
| `FUN_00549f50` | globals_07.c:18026 | String table loading (STRING_T) |
| `FUN_0051a0b0` | globals_06.c:16420 | Dialog file loader wrapper |

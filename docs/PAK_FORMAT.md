# CarJacker data.pak Archive Format Specification

## Overview

The `data.pak` format is the primary asset archive for CarJacker / AutoThief (Kozmogames, 2005). All game assets (textures, models, scripts, sounds, configs) are packed into one or more `.pak` files with a simple byte-rotation cipher applied to both the directory table and file data.

- **Endianness:** Little-endian
- **Cipher:** ROR-1 (rotate right 1 bit per byte)
- **Reference file:** `data.pak` (126,140,773 bytes in Car Jacker 2)
- **Multi-file:** Up to 10 pak files (`data.pak`, `data1.pak` .. `data9.pak`)
- **Fallback:** Engine falls back to `data.zip` (standard zip) if no pak files found
- **Loaded by:** `FUN_00410060` (Ghidra) / `sub_410060` (IDA Pro)
- **Cipher function:** `FUN_0040ef80` (Ghidra) / `sub_40EF80` (IDA Pro)
- **File I/O wrapper:** `FUN_00410660` / `FUN_004103c0` (tries pak, then zip, then raw fopen)

---

## File Layout

```
+-----------------------------------------------+
|  File data (concatenated, encrypted)          |
|  [file 0 data] [file 1 data] ... [file N]    |
+-----------------------------------------------+
|  Directory table (N entries x 144 bytes each) |  <-- encrypted
+-----------------------------------------------+
|  Entry count (4 bytes, stored as negative)    |  <-- NOT encrypted
+-----------------------------------------------+
  ^                                              ^
  |  seek: file_size - entry_count*144 - 4       |  file_size - 4
```

The directory table and entry count are stored at the **end** of the file. File data occupies the beginning.

---

## Entry Count (Last 4 Bytes)

| Offset from EOF | Size | Type   | Description |
|-----------------|------|--------|-------------|
| -4              | 4    | int32  | Negative of the entry count |

The engine reads this value and negates it:
```c
fread(&count, 1, 4, f);
count = -count;  // actual number of entries
```

The raw stored value for 500 entries would be `-500` (0xFFFF_FE0C in two's complement).

---

## Directory Entry (144 bytes / 0x90)

Each entry is **encrypted** with the ROR-1 cipher. After decryption:

```
Offset  Size    Type      Description
0x00    128     char[128] Filename (null-terminated, zero-padded)
0x80    4       uint32    File data offset within this pak file
0x84    4       uint32    File data size (bytes)
0x88    4       uint32    Unknown field 1
0x8C    4       uint32    Unknown field 2
```

**Total: 144 bytes (0x90)**

### Filename Field

- Stored as a relative path with `.\` or `./` prefix (e.g., `.\Textures\Weather\sky1.dds`)
- The engine strips the `.\` or `./` prefix when loading
- Path separators are normalized: `/` converted to `\`, all characters lowercased
- Null-terminated, remaining bytes zero-padded to 128 bytes

### Unknown Fields

- **0x88 (unknown1):** Always 0 in the Car Jacker 2 `data.pak` (1196 entries tested).
- **0x8C (unknown2):** Always equal to the file size field at 0x84 in Car Jacker 2 — possibly an uncompressed size field (redundant since no compression is used), or a copy for validation.

Both fields are stored in the engine's in-memory file map but are never referenced during file loading.

---

## ROR-1 Cipher

All directory entries and file data are obfuscated with a per-byte rotate-right-by-1 operation:

```
Encrypt (applied when writing):  byte = (byte << 1) | (byte >> 7)    [ROL 1]
Decrypt (applied when reading):  byte = (byte >> 1) | (byte << 7)    [ROR 1]
```

Or equivalently, the engine applies this transform on read:
```c
void decrypt(char *buf, int len) {
    for (int i = 0; i < len; i++)
        buf[i] = (buf[i] << 7) | (buf[i] >> 1);  // ROR 1
}
```

Note: Ghidra decompiles this as `(byte << 7) | (byte >> 1)` which is equivalent to ROR-1.

The cipher is its own inverse after 8 applications, but a single decrypt pass uses the complementary rotation (ROL-1) to reverse it.

---

## Reading Process

The engine's file loading procedure (`sub_410060`):

1. **Initialize** (once, on first file access):
   - For each pak file (`data.pak`, `data1.pak` .. `data9.pak`):
     a. Open in binary read mode
     b. Seek to end, get file size via `ftell`
     c. Seek to `file_size - 4`, read 4-byte entry count (negate it)
     d. Seek to `file_size - (entry_count * 144) - 4` (directory start)
     e. For each entry:
        - Read 144 bytes
        - Decrypt with ROR-1 cipher
        - Extract filename (strip `.\`/`./` prefix, lowercase)
        - Store in `std::map<string, EntryInfo>` keyed by filename
   - The map value stores: `{FILE*, offset, size, unknown1, unknown2}`

2. **File lookup** (on each file request):
   a. Normalize requested path (lowercase, `\` separators, strip `.\`)
   b. Look up in the map
   c. Allocate buffer of `size` bytes
   d. `fseek` to `offset` in the associated pak file
   e. `fread` the data
   f. Decrypt data with ROR-1 cipher
   g. Return buffer and size

3. **Fallback** (`FUN_004103c0`):
   - If pak lookup fails, try `data.zip` using minizip/unzip API

---

## Multi-Pak Support

The engine iterates pak files 0-9:
```
data.pak    (index 0)
data1.pak   (index 1)
data2.pak   (index 2)
...
data9.pak   (index 9)
```

Each pak file has its own independent directory table. Entries from all pak files are merged into a single in-memory map. Later pak files can override entries from earlier ones (last-write-wins in the map).

---

## Decompilation References

| Function | Ghidra | IDA Pro | Purpose |
|----------|--------|---------|---------|
| Pak loader | `FUN_00410060` (globals_00.c:10333) | `sub_410060` (line 21693) | Load directory, look up files |
| ROR-1 cipher | `FUN_0040ef80` (globals_00.c:9237) | `sub_40EF80` (line 20721) | Decrypt/encrypt data |
| File I/O wrapper | `FUN_00410660` (globals_00.c:10627) | `sub_410660` (line 21838) | Try pak, then zip, then fopen |
| Zip fallback | `FUN_004103c0` (globals_00.c:10505) | `sub_4103C0` (line 21830) | data.zip fallback loader |

### Global State

| Address | Purpose |
|---------|---------|
| `0x5B5ED4` | Pak directory loaded flag (set to 1 after first load) |
| `0x5B5F00` | `std::map` for pak file entries |
| `0x5B5F08` | Map end sentinel (used to detect lookup misses) |
| `0x5B5F0C` | Map non-empty flag |
| `0x5B5ECC` | Zip directory loaded flag |
| `0x5B5ED0` | Zip file handle |

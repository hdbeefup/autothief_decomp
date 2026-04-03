"""
CarJacker data.pak archive tool.

Format specification: docs/PAK_FORMAT.md

Usage:
    python pak_tool.py list <data.pak> [data1.pak ...]       List all entries
    python pak_tool.py extract <data.pak> [output_dir]       Extract all files
    python pak_tool.py pack <input_dir> <output.pak>         Pack directory into pak
    python pak_tool.py roundtrip <data.pak>                  Extract, repack, byte-compare
"""

import struct
import sys
import os
from dataclasses import dataclass
from pathlib import Path
from typing import List, Tuple, Optional

ENTRY_SIZE = 144  # 0x90 bytes
FILENAME_SIZE = 128  # 0x80 bytes


@dataclass
class PakEntry:
    filename: str
    offset: int
    size: int
    unknown1: int
    unknown2: int


def ror1(data: bytes) -> bytes:
    """Decrypt: rotate each byte right by 1 bit."""
    return bytes(((b >> 1) | (b << 7)) & 0xFF for b in data)


def rol1(data: bytes) -> bytes:
    """Encrypt: rotate each byte left by 1 bit (inverse of ror1)."""
    return bytes(((b << 1) | (b >> 7)) & 0xFF for b in data)


def read_directory(f) -> List[PakEntry]:
    """Read and decrypt the directory table from a pak file."""
    f.seek(0, 2)
    file_size = f.tell()

    # Read entry count (stored as negative int32 at EOF-4)
    f.seek(file_size - 4)
    raw_count = struct.unpack('<i', f.read(4))[0]
    entry_count = -raw_count

    if entry_count <= 0:
        return []

    # Seek to directory start
    dir_offset = file_size - (entry_count * ENTRY_SIZE) - 4
    f.seek(dir_offset)

    entries = []
    for _ in range(entry_count):
        raw = f.read(ENTRY_SIZE)
        if len(raw) < ENTRY_SIZE:
            break
        decrypted = ror1(raw)

        # Parse filename (128 bytes, null-terminated)
        name_bytes = decrypted[:FILENAME_SIZE]
        null_pos = name_bytes.find(b'\x00')
        if null_pos >= 0:
            name_bytes = name_bytes[:null_pos]
        filename = name_bytes.decode('ascii', errors='replace')

        # Strip .\ or ./ prefix
        if filename.startswith('.\\') or filename.startswith('./'):
            filename = filename[2:]

        # Parse metadata fields
        offset, size, unk1, unk2 = struct.unpack_from('<IIII', decrypted, FILENAME_SIZE)

        entries.append(PakEntry(filename, offset, size, unk1, unk2))

    return entries


def read_file_data(f, entry: PakEntry) -> bytes:
    """Read and decrypt a file's data from the pak."""
    f.seek(entry.offset)
    raw = f.read(entry.size)
    return ror1(raw)


def write_pak(entries: List[Tuple[str, bytes]], output_path: Path,
              unknown_fields: Optional[dict] = None):
    """
    Pack files into a pak archive.

    entries: list of (filename, file_data) tuples
    unknown_fields: optional dict mapping filename -> (unknown1, unknown2)
    """
    with open(output_path, 'wb') as f:
        dir_entries = []
        for filename, data in entries:
            offset = f.tell()
            encrypted_data = rol1(data)
            f.write(encrypted_data)

            unk1, unk2 = 0, 0
            if unknown_fields and filename in unknown_fields:
                unk1, unk2 = unknown_fields[filename]

            dir_entries.append(PakEntry(filename, offset, len(data), unk1, unk2))

        # Write directory table
        for entry in dir_entries:
            # Build 144-byte entry
            stored_name = '.\\'  + entry.filename
            name_bytes = stored_name.encode('ascii')[:FILENAME_SIZE - 1]
            name_padded = name_bytes + b'\x00' * (FILENAME_SIZE - len(name_bytes))
            meta = struct.pack('<IIII', entry.offset, entry.size,
                               entry.unknown1, entry.unknown2)
            raw_entry = name_padded + meta
            assert len(raw_entry) == ENTRY_SIZE
            f.write(rol1(raw_entry))

        # Write entry count as negative int32
        f.write(struct.pack('<i', -len(dir_entries)))


# --- CLI commands ---

def cmd_list(pak_paths: List[str]):
    """List all entries in one or more pak files."""
    total_entries = 0
    total_size = 0
    for pak_path in pak_paths:
        with open(pak_path, 'rb') as f:
            entries = read_directory(f)
        if len(pak_paths) > 1:
            print(f"\n=== {pak_path} ({len(entries)} entries) ===")
        print(f"{'Offset':>10}  {'Size':>10}  {'Unk1':>10}  {'Unk2':>10}  Filename")
        print(f"{'------':>10}  {'----':>10}  {'----':>10}  {'----':>10}  --------")
        for e in entries:
            print(f"{e.offset:>10}  {e.size:>10}  {e.unknown1:>10}  {e.unknown2:>10}  {e.filename}")
        total_entries += len(entries)
        total_size += sum(e.size for e in entries)
    print(f"\nTotal: {total_entries} entries, {total_size:,} bytes")


def cmd_extract(pak_paths: List[str], output_dir: str):
    """Extract all files from pak archive(s)."""
    out = Path(output_dir)
    out.mkdir(parents=True, exist_ok=True)

    extracted = 0
    for pak_path in pak_paths:
        with open(pak_path, 'rb') as f:
            entries = read_directory(f)
            for entry in entries:
                data = read_file_data(f, entry)
                # Normalize path separators
                rel_path = entry.filename.replace('\\', os.sep).replace('/', os.sep)
                file_out = out / rel_path
                file_out.parent.mkdir(parents=True, exist_ok=True)
                file_out.write_bytes(data)
                extracted += 1
                if extracted % 100 == 0:
                    print(f"  extracted {extracted} files...")

    print(f"Extracted {extracted} files to {out}")


def cmd_pack(input_dir: str, output_path: str):
    """Pack a directory into a pak file."""
    root = Path(input_dir)
    if not root.is_dir():
        print(f"Error: {input_dir} is not a directory", file=sys.stderr)
        sys.exit(1)

    file_list = []
    for path in sorted(root.rglob('*')):
        if path.is_file():
            rel = path.relative_to(root)
            # Use backslash-separated paths (game convention)
            filename = str(rel).replace('/', '\\')
            data = path.read_bytes()
            file_list.append((filename, data))

    print(f"Packing {len(file_list)} files...")
    write_pak(file_list, Path(output_path))
    pak_size = Path(output_path).stat().st_size
    print(f"Written: {output_path} ({pak_size:,} bytes)")


def cmd_roundtrip(pak_path: str):
    """Extract and repack a pak file, then byte-compare."""
    import tempfile

    print(f"Round-trip test: {pak_path}")

    # Read original
    with open(pak_path, 'rb') as f:
        original_bytes = f.read()
        f.seek(0)
        entries = read_directory(f)

    print(f"  {len(entries)} entries")

    # Read all file data and preserve unknown fields
    file_list = []
    unknown_fields = {}
    with open(pak_path, 'rb') as f:
        for entry in entries:
            data = read_file_data(f, entry)
            file_list.append((entry.filename, data))
            unknown_fields[entry.filename] = (entry.unknown1, entry.unknown2)

    # Repack to temp file
    with tempfile.NamedTemporaryFile(suffix='.pak', delete=False) as tmp:
        tmp_path = tmp.name
    try:
        write_pak(file_list, Path(tmp_path), unknown_fields)
        repacked_bytes = Path(tmp_path).read_bytes()

        if original_bytes == repacked_bytes:
            print("  PASS: byte-perfect round-trip")
        else:
            print(f"  FAIL: size original={len(original_bytes)}, "
                  f"repacked={len(repacked_bytes)}")
            # Find first difference
            min_len = min(len(original_bytes), len(repacked_bytes))
            for i in range(min_len):
                if original_bytes[i] != repacked_bytes[i]:
                    print(f"  First difference at offset 0x{i:X}: "
                          f"original=0x{original_bytes[i]:02X} "
                          f"repacked=0x{repacked_bytes[i]:02X}")
                    break
            sys.exit(1)
    finally:
        os.unlink(tmp_path)


def find_pak_files(base_path: str) -> List[str]:
    """Find data.pak and data1..9.pak in the same directory."""
    p = Path(base_path)
    directory = p.parent
    paths = []
    # data.pak first
    if p.exists():
        paths.append(str(p))
    # data1.pak through data9.pak
    for i in range(1, 10):
        sibling = directory / f"data{i}.pak"
        if sibling.exists():
            paths.append(str(sibling))
    return paths


def main():
    if len(sys.argv) < 2:
        print(__doc__)
        sys.exit(1)

    cmd = sys.argv[1]

    if cmd == 'list':
        if len(sys.argv) < 3:
            print("Usage: pak_tool.py list <data.pak> [data1.pak ...]")
            sys.exit(1)
        if len(sys.argv) == 3:
            paks = find_pak_files(sys.argv[2])
        else:
            paks = sys.argv[2:]
        cmd_list(paks)

    elif cmd == 'extract':
        if len(sys.argv) < 3:
            print("Usage: pak_tool.py extract <data.pak> [output_dir]")
            sys.exit(1)
        pak_path = sys.argv[2]
        output_dir = sys.argv[3] if len(sys.argv) > 3 else 'pak_out'
        paks = find_pak_files(pak_path)
        cmd_extract(paks, output_dir)

    elif cmd == 'pack':
        if len(sys.argv) < 4:
            print("Usage: pak_tool.py pack <input_dir> <output.pak>")
            sys.exit(1)
        cmd_pack(sys.argv[2], sys.argv[3])

    elif cmd == 'roundtrip':
        if len(sys.argv) < 3:
            print("Usage: pak_tool.py roundtrip <data.pak>")
            sys.exit(1)
        cmd_roundtrip(sys.argv[2])

    else:
        print(f"Unknown command: {cmd}")
        print(__doc__)
        sys.exit(1)


if __name__ == '__main__':
    main()

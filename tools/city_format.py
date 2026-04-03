"""
CarJacker .city file format parser/writer.

Format specification: docs/CITY_FORMAT.md

Usage:
    python city_format.py info <file.city>         Print summary statistics
    python city_format.py dump <file.city>         Dump all data
    python city_format.py roundtrip <file.city>    Parse and rewrite, byte-compare
    python city_format.py plot <file.city>         Plot top-down map (requires matplotlib)
"""

import struct
import sys
from dataclasses import dataclass, field
from pathlib import Path
from typing import List, Tuple


@dataclass
class RoadSegment:
    id: int
    road_type: int
    center: Tuple[float, float, float]
    direction: Tuple[float, float, float]
    vertices: List[Tuple[float, float, float]]
    is_closed: int


@dataclass
class Junction:
    position: Tuple[float, float, float]


@dataclass
class Connection:
    param_a: float
    param_b: float
    junction_idx_a: int
    junction_idx_b: int


@dataclass
class ModelPlacement:
    model_name: str
    transform: List[List[float]]  # 4x4 matrix
    extra: float
    _raw_name: bytes = field(default=b'', repr=False)


@dataclass
class CityFile:
    segments: List[RoadSegment] = field(default_factory=list)
    junctions: List[Junction] = field(default_factory=list)
    connections: List[Connection] = field(default_factory=list)
    models: List[ModelPlacement] = field(default_factory=list)

    @staticmethod
    def read(filepath: str) -> 'CityFile':
        data = Path(filepath).read_bytes()
        off = 0
        city = CityFile()

        def read_u32():
            nonlocal off
            val = struct.unpack_from('<I', data, off)[0]
            off += 4
            return val

        def read_u8():
            nonlocal off
            val = data[off]
            off += 1
            return val

        def read_f32():
            nonlocal off
            val = struct.unpack_from('<f', data, off)[0]
            off += 4
            return val

        def read_vec3():
            nonlocal off
            val = struct.unpack_from('<3f', data, off)
            off += 12
            return val

        # Section 1: Road Segments
        seg_count = read_u32()
        for _ in range(seg_count):
            seg_id = read_u32()
            road_type = read_u8()
            center = read_vec3()
            direction = read_vec3()
            vert_count = read_u32()
            vertices = []
            for _ in range(vert_count):
                vertices.append(read_vec3())
            is_closed = read_u8()
            city.segments.append(RoadSegment(
                id=seg_id, road_type=road_type,
                center=center, direction=direction,
                vertices=vertices, is_closed=is_closed,
            ))

        # Section 2: Junctions
        junc_count = read_u32()
        for _ in range(junc_count):
            city.junctions.append(Junction(position=read_vec3()))

        # Section 3: Connections
        conn_count = read_u32()
        for _ in range(conn_count):
            pa = read_f32()
            pb = read_f32()
            ia = read_u32()
            ib = read_u32()
            city.connections.append(Connection(
                param_a=pa, param_b=pb,
                junction_idx_a=ia, junction_idx_b=ib,
            ))

        # Section 4: Model Placements
        model_count = read_u32()
        for _ in range(model_count):
            raw_name = data[off:off + 64]
            null_pos = raw_name.find(b'\x00')
            name = raw_name[:null_pos].decode('ascii') if null_pos >= 0 else raw_name.decode('ascii')
            off += 64
            mat = []
            for row in range(4):
                mat.append(list(struct.unpack_from('<4f', data, off)))
                off += 16
            extra = read_f32()
            city.models.append(ModelPlacement(
                model_name=name, transform=mat,
                extra=extra, _raw_name=raw_name,
            ))

        if off != len(data):
            print(f'WARNING: {len(data) - off} bytes remaining after parse', file=sys.stderr)

        return city

    def write(self) -> bytes:
        parts = []

        def w_u32(v):
            parts.append(struct.pack('<I', v))

        def w_u8(v):
            parts.append(struct.pack('<B', v))

        def w_f32(v):
            parts.append(struct.pack('<f', v))

        def w_vec3(v):
            parts.append(struct.pack('<3f', *v))

        # Section 1: Road Segments
        w_u32(len(self.segments))
        for seg in self.segments:
            w_u32(seg.id)
            w_u8(seg.road_type)
            w_vec3(seg.center)
            w_vec3(seg.direction)
            w_u32(len(seg.vertices))
            for v in seg.vertices:
                w_vec3(v)
            w_u8(seg.is_closed)

        # Section 2: Junctions
        w_u32(len(self.junctions))
        for junc in self.junctions:
            w_vec3(junc.position)

        # Section 3: Connections
        w_u32(len(self.connections))
        for conn in self.connections:
            w_f32(conn.param_a)
            w_f32(conn.param_b)
            w_u32(conn.junction_idx_a)
            w_u32(conn.junction_idx_b)

        # Section 4: Model Placements
        w_u32(len(self.models))
        for m in self.models:
            if m._raw_name:
                parts.append(m._raw_name)
            else:
                name_bytes = m.model_name.encode('ascii')
                parts.append(name_bytes.ljust(64, b'\x00'))
            for row in m.transform:
                parts.append(struct.pack('<4f', *row))
            w_f32(m.extra)

        return b''.join(parts)


def cmd_info(filepath: str):
    city = CityFile.read(filepath)
    fsize = Path(filepath).stat().st_size
    print(f'File: {filepath} ({fsize:,} bytes)')
    print(f'Road Segments:    {len(city.segments)}')
    print(f'Junctions:        {len(city.junctions)}')
    print(f'Connections:      {len(city.connections)}')
    print(f'Model Placements: {len(city.models)}')

    # Road type distribution
    types = {}
    for s in city.segments:
        types[s.road_type] = types.get(s.road_type, 0) + 1
    print(f'\nRoad types: {dict(sorted(types.items()))}')

    # Closed/open
    closed = sum(1 for s in city.segments if s.is_closed)
    print(f'Open segments: {len(city.segments) - closed}, Closed loops: {closed}')

    # Vertex count stats
    vc = [len(s.vertices) for s in city.segments]
    print(f'Vertices per segment: min={min(vc)}, max={max(vc)}, avg={sum(vc)/len(vc):.1f}')

    # Model types
    names = {}
    for m in city.models:
        names[m.model_name] = names.get(m.model_name, 0) + 1
    print(f'\nModel types ({len(names)} unique):')
    for name in sorted(names):
        print(f'  {name}: {names[name]}')


def cmd_dump(filepath: str):
    city = CityFile.read(filepath)

    print('=== Road Segments ===')
    for i, seg in enumerate(city.segments):
        print(f'[{i}] id={seg.id} type={seg.road_type} closed={seg.is_closed}')
        print(f'     center=({seg.center[0]:.1f}, {seg.center[1]:.1f}, {seg.center[2]:.1f})')
        for j, v in enumerate(seg.vertices):
            print(f'     v[{j}]=({v[0]:.1f}, {v[1]:.1f}, {v[2]:.1f})')

    print('\n=== Junctions ===')
    for i, j in enumerate(city.junctions):
        print(f'[{i}] ({j.position[0]:.1f}, {j.position[1]:.1f}, {j.position[2]:.1f})')

    print('\n=== Connections ===')
    for i, c in enumerate(city.connections):
        print(f'[{i}] a={c.param_a:.1f} b={c.param_b} junc_a={c.junction_idx_a} junc_b={c.junction_idx_b}')

    print('\n=== Model Placements ===')
    for i, m in enumerate(city.models):
        pos = m.transform[3][:3]
        print(f'[{i}] {m.model_name} pos=({pos[0]:.1f}, {pos[1]:.1f}, {pos[2]:.1f})')


def cmd_roundtrip(filepath: str):
    original = Path(filepath).read_bytes()
    city = CityFile.read(filepath)
    rewritten = city.write()

    if original == rewritten:
        print(f'PASS: Round-trip byte-perfect ({len(original):,} bytes)')
    else:
        print(f'FAIL: Mismatch! Original={len(original)}, Rewritten={len(rewritten)}')
        # Find first difference
        for i in range(min(len(original), len(rewritten))):
            if original[i] != rewritten[i]:
                print(f'  First diff at offset {i} (0x{i:X}): orig=0x{original[i]:02X} new=0x{rewritten[i]:02X}')
                break
        return 1
    return 0


def cmd_plot(filepath: str):
    try:
        import matplotlib.pyplot as plt
        import matplotlib.patches as mpatches
    except ImportError:
        print('ERROR: matplotlib required for plot mode. Install with: pip install matplotlib', file=sys.stderr)
        return 1

    city = CityFile.read(filepath)

    fig, ax = plt.subplots(1, 1, figsize=(14, 14))
    ax.set_aspect('equal')
    ax.set_title(f'CarJacker City Map: {Path(filepath).stem}')
    ax.set_xlabel('X')
    ax.set_ylabel('Z')

    road_colors = {0: '#666666', 1: '#999999', 3: '#CC8800'}
    road_widths = {0: 1.0, 1: 0.5, 3: 2.0}

    for seg in city.segments:
        xs = [v[0] for v in seg.vertices]
        zs = [v[2] for v in seg.vertices]
        if seg.is_closed:
            xs.append(xs[0])
            zs.append(zs[0])
        color = road_colors.get(seg.road_type, '#FF0000')
        width = road_widths.get(seg.road_type, 1.0)
        ax.plot(xs, zs, color=color, linewidth=width, alpha=0.7)

    # Junctions
    jx = [j.position[0] for j in city.junctions]
    jz = [j.position[2] for j in city.junctions]
    ax.scatter(jx, jz, c='red', s=3, zorder=5, alpha=0.5)

    # Models
    model_colors = {
        'skyscraper': '#0066CC', 'building': '#336699', 'house': '#669933',
        'church': '#993399', 'bank': '#CC9900', 'warehouse': '#996633',
        'china': '#CC3333', 'fence': '#333333', 'trees': '#00AA00',
        'hangar': '#666699', 'gate': '#996600', 'graves': '#663366',
        'junkyard': '#997733', 'gs': '#555555',
    }
    for m in city.models:
        pos = m.transform[3]
        short = m.model_name.replace('models\\', '')
        color = '#888888'
        for key, c in model_colors.items():
            if key in short:
                color = c
                break
        ax.plot(pos[0], pos[2], 's', color=color, markersize=4, alpha=0.6)

    patches = [
        mpatches.Patch(color='#666666', label='Normal road'),
        mpatches.Patch(color='#999999', label='Minor road'),
        mpatches.Patch(color='#CC8800', label='Highway'),
        mpatches.Patch(color='red', label='Junction'),
    ]
    ax.legend(handles=patches, loc='upper left', fontsize=8)
    plt.tight_layout()
    plt.show()
    return 0


def main():
    if len(sys.argv) < 3:
        print(__doc__)
        return 1

    cmd = sys.argv[1]
    filepath = sys.argv[2]

    if cmd == 'info':
        cmd_info(filepath)
    elif cmd == 'dump':
        cmd_dump(filepath)
    elif cmd == 'roundtrip':
        return cmd_roundtrip(filepath)
    elif cmd == 'plot':
        return cmd_plot(filepath)
    else:
        print(f'Unknown command: {cmd}')
        print(__doc__)
        return 1
    return 0


if __name__ == '__main__':
    sys.exit(main() or 0)

"""
CarJacker .city file parser/writer.
Format specification: docs/CITY_FORMAT.md
"""

import struct
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
    transform: List[List[float]]  # 4x4 row-major matrix
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
            vertices = [read_vec3() for _ in range(vert_count)]
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
            city.connections.append(Connection(
                param_a=read_f32(), param_b=read_f32(),
                junction_idx_a=read_u32(), junction_idx_b=read_u32(),
            ))

        # Section 4: Model Placements
        model_count = read_u32()
        for _ in range(model_count):
            raw_name = data[off:off + 64]
            null_pos = raw_name.find(b'\x00')
            name = raw_name[:null_pos].decode('ascii') if null_pos >= 0 else raw_name.decode('ascii')
            off += 64
            mat = []
            for _ in range(4):
                mat.append(list(struct.unpack_from('<4f', data, off)))
                off += 16
            extra = read_f32()
            city.models.append(ModelPlacement(
                model_name=name, transform=mat,
                extra=extra, _raw_name=raw_name,
            ))

        return city

    def write(self, filepath: str):
        parts = []

        def w_u32(v):
            parts.append(struct.pack('<I', v))

        def w_u8(v):
            parts.append(struct.pack('<B', v))

        def w_f32(v):
            parts.append(struct.pack('<f', v))

        def w_vec3(v):
            parts.append(struct.pack('<3f', *v))

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

        w_u32(len(self.junctions))
        for junc in self.junctions:
            w_vec3(junc.position)

        w_u32(len(self.connections))
        for conn in self.connections:
            w_f32(conn.param_a)
            w_f32(conn.param_b)
            w_u32(conn.junction_idx_a)
            w_u32(conn.junction_idx_b)

        w_u32(len(self.models))
        for m in self.models:
            if m._raw_name:
                parts.append(m._raw_name)
            else:
                parts.append(m.model_name.encode('ascii').ljust(64, b'\x00'))
            for row in m.transform:
                parts.append(struct.pack('<4f', *row))
            w_f32(m.extra)

        Path(filepath).write_bytes(b''.join(parts))

"""
PM model file parser for AutoThief / CarJacker.
Extracted from pm_viewer.py for reuse across tools.
"""

import struct


class PMModel:
    """Parsed .PM model data."""
    def __init__(self):
        self.build_string = ""
        self.flags = 0
        self.vertices = []       # list of (x, y, z) in OpenGL RH coords (-x, y, z)
        self.triangles = []      # list of (i0, i1, i2, u1, v1, u2, v2, u3, v3, nx, ny, nz, mat_idx)
        self.materials = []      # list of texture path strings
        self.helpers = []        # list of (name, x, y, z) in RH coords
        self.vertex_indices = [] # per-vertex ushort (when flags bit 0 clear)
        self.normals = []        # per-vertex (nx, ny, nz) (when flags bit 1 set)

    @staticmethod
    def load(filepath):
        m = PMModel()
        with open(filepath, 'rb') as f:
            # Text header: 0x100 bytes
            header_text = f.read(0x100)
            if header_text[:4] != b'NGPM':
                raise ValueError(f"Not a PM file: bad magic {header_text[:4]!r}")
            raw = header_text[4:].split(b'\x00')[0].decode('ascii', errors='replace').strip()
            m.build_string = raw.lstrip('\x00\x01\x02\x03\x04\x05\x06\x07\x08').strip()

            # Binary header: 0x28 bytes (file offset 0x100-0x127)
            bin_header = f.read(0x28)
            m.flags = struct.unpack_from('<H', bin_header, 4)[0]
            vert_count = struct.unpack_from('<H', bin_header, 6)[0]
            tri_count = struct.unpack_from('<H', bin_header, 8)[0]
            mat_count = struct.unpack_from('<B', bin_header, 10)[0]
            helper_count = struct.unpack_from('<B', bin_header, 14)[0]

            # Vertices: vert_count * 12 bytes
            m._raw_vertices = []
            for _ in range(vert_count):
                x, y, z = struct.unpack('<fff', f.read(12))
                m._raw_vertices.append((x, y, z))
                m.vertices.append((-x, y, z))  # negate X: LH (D3D) -> RH (OpenGL)

            # Optional: vertex indices (flags bit 0 clear)
            if not (m.flags & 1):
                for _ in range(vert_count):
                    idx, = struct.unpack('<H', f.read(2))
                    m.vertex_indices.append(idx)

            # Optional: per-vertex normals (flags bit 1 set)
            if m.flags & 2:
                for _ in range(vert_count):
                    nx, ny, nz = struct.unpack('<fff', f.read(12))
                    m.normals.append((nx, ny, nz))

            # Triangles: tri_count * 44 bytes
            use_float_uvs = bool(m.flags & 1)
            for _ in range(tri_count):
                data = f.read(44)
                i0, i1, i2 = struct.unpack_from('<HHH', data, 0)
                mat_idx = data[40]
                if use_float_uvs:
                    u1, v1, u2, v2, u3, v3 = struct.unpack_from('<ffffff', data, 8)
                else:
                    mx = struct.unpack_from('<8f', data, 8)
                    uvs = []
                    for vi in (i0, i1, i2):
                        px, py, pz = m._raw_vertices[vi] if vi < len(m._raw_vertices) else (0, 0, 0)
                        u = px * mx[0] + py * mx[1] + pz * mx[2] + mx[3]
                        v = px * mx[4] + py * mx[5] + pz * mx[6] + mx[7]
                        uvs.append((u, v))
                    u1, v1 = uvs[0]
                    u2, v2 = uvs[1]
                    u3, v3 = uvs[2]
                m.triangles.append((i0, i1, i2, u1, v1, u2, v2, u3, v3, 0, 0, 0, mat_idx))

            # Optional: extra triangle data (flags bit 2 set)
            if m.flags & 4:
                f.read(tri_count * 32)

            # Helpers: 76 bytes each (name[32] + data[32] + pos[12])
            for _ in range(helper_count):
                hdata = f.read(76)
                hname = hdata[:32].split(b'\x00')[0].decode('ascii', errors='replace')
                hx, hy, hz = struct.unpack_from('<fff', hdata, 0x40)
                m.helpers.append((hname, -hx, hy, hz))

            # Materials: mat_count * 80 bytes
            for _ in range(mat_count):
                mat_data = f.read(80)
                name = mat_data[:64].split(b'\x00')[0].decode('ascii', errors='replace')
                m.materials.append(name)

        return m

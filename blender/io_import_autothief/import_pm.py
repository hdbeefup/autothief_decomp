"""
PM model importer for Blender.
AutoThief / CarJacker (Kozmogames, 2005) .PM model format.
"""

import os
import struct
import math

import bpy
import bmesh
from bpy_extras.io_utils import ImportHelper
from bpy.props import BoolProperty, StringProperty
from mathutils import Matrix, Vector


# ── PM Parser ──────────────────────────────────────────────────────────────

class PMModel:
    def __init__(self):
        self.build_string = ""
        self.flags = 0
        self.vertices = []       # (x, y, z) in original D3D coords
        self.triangles = []      # (i0, i1, i2, u0, v0, u1, v1, u2, v2, mat_idx)
        self.materials = []      # texture path strings
        self.helpers = []        # list of (name, x, y, z)
        self.normals = []        # per-vertex (nx, ny, nz)
        self.vertex_indices = [] # per-vertex uint16

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

            # Binary header: 0x28 bytes
            bin_header = f.read(0x28)
            m.flags = struct.unpack_from('<H', bin_header, 4)[0]
            vert_count = struct.unpack_from('<H', bin_header, 6)[0]
            tri_count = struct.unpack_from('<H', bin_header, 8)[0]
            mat_count = struct.unpack_from('<B', bin_header, 10)[0]
            helper_count = struct.unpack_from('<B', bin_header, 14)[0]

            # Vertices
            for _ in range(vert_count):
                x, y, z = struct.unpack('<fff', f.read(12))
                m.vertices.append((x, y, z))

            # Optional vertex indices (flags bit 0 clear)
            if not (m.flags & 1):
                for _ in range(vert_count):
                    idx, = struct.unpack('<H', f.read(2))
                    m.vertex_indices.append(idx)

            # Optional per-vertex normals (flags bit 1 set)
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
                    u0, v0, u1, v1, u2, v2 = struct.unpack_from('<ffffff', data, 8)
                else:
                    mx = struct.unpack_from('<8f', data, 8)
                    uvs = []
                    for vi in (i0, i1, i2):
                        px, py, pz = m.vertices[vi] if vi < len(m.vertices) else (0, 0, 0)
                        u = px * mx[0] + py * mx[1] + pz * mx[2] + mx[3]
                        v = px * mx[4] + py * mx[5] + pz * mx[6] + mx[7]
                        uvs.append((u, v))
                    u0, v0 = uvs[0]
                    u1, v1 = uvs[1]
                    u2, v2 = uvs[2]
                m.triangles.append((i0, i1, i2, u0, v0, u1, v1, u2, v2, mat_idx))

            # Extra triangle data (flags bit 2)
            if m.flags & 4:
                f.read(tri_count * 32)

            # Helpers: 76 bytes each (name[32] + data[32] + position[12])
            for _ in range(helper_count):
                hdata = f.read(76)
                hname = hdata[:32].split(b'\x00')[0].decode('ascii', errors='replace')
                hx, hy, hz = struct.unpack_from('<fff', hdata, 0x40)
                m.helpers.append((hname, hx, hy, hz))

            # Materials
            for _ in range(mat_count):
                mat_data = f.read(80)
                name = mat_data[:64].split(b'\x00')[0].decode('ascii', errors='replace')
                m.materials.append(name)

        return m


# ── Texture finder ─────────────────────────────────────────────────────────

def find_texture(textures_root, tex_name):
    """Find a DDS texture file with case-insensitive path matching."""
    if not textures_root:
        return None
    dds_path = os.path.join(textures_root, tex_name + '.dds')
    if os.path.exists(dds_path):
        return dds_path
    # Case-insensitive search
    parts = tex_name.replace('\\', '/').split('/')
    search_dir = textures_root
    for i, part in enumerate(parts):
        found = False
        try:
            for entry in os.listdir(search_dir):
                if entry.lower() == part.lower() or \
                   (i == len(parts) - 1 and entry.lower() == (part + '.dds').lower()):
                    search_dir = os.path.join(search_dir, entry)
                    found = True
                    break
        except OSError:
            return None
        if not found:
            return None
    if os.path.isfile(search_dir):
        return search_dir
    return None


def find_textures_root(pm_path):
    """Auto-detect Textures/ directory relative to the model file."""
    model_dir = os.path.dirname(os.path.abspath(pm_path))
    for parent in [model_dir, os.path.dirname(model_dir)]:
        candidate = os.path.join(parent, 'Textures')
        if os.path.isdir(candidate):
            return candidate
    return None


# ── D3D → Blender coordinate conversion ───────────────────────────────────
# D3D left-handed Y-up: X=right, Y=up, Z=forward
# Blender right-handed Z-up: X=right, Y=forward, Z=up
# Axis mapping: D3D.Y→Blender.Z, D3D.Z→Blender.Y, negate X for handedness
# Conversion: (x, y, z) → (-x, z, y)

def d3d_to_blender(x, y, z):
    return (-x, z, y)


def d3d_normal_to_blender(nx, ny, nz):
    return (-nx, nz, ny)


# ── Import logic ──────────────────────────────────────────────────────────

def _create_bl_materials(pm, textures_root):
    """Create Blender materials from PM material list."""
    bl_materials = []
    for mat_name in pm.materials:
        bl_mat = bpy.data.materials.new(name=mat_name.replace('\\', '/'))
        bl_mat.use_nodes = True
        bsdf = bl_mat.node_tree.nodes.get('Principled BSDF')

        if textures_root:
            tex_path = find_texture(textures_root, mat_name)
            if tex_path and bsdf:
                tex_node = bl_mat.node_tree.nodes.new('ShaderNodeTexImage')
                try:
                    tex_node.image = bpy.data.images.load(tex_path)
                    bl_mat.node_tree.links.new(
                        bsdf.inputs['Base Color'], tex_node.outputs['Color'])
                except Exception:
                    pass

        bl_materials.append(bl_mat)
    return bl_materials


def _build_bmesh(pm, bl_verts, mat_filter=None):
    """Build a BMesh from PM data. If mat_filter is set, only include that material index."""
    bm = bmesh.new()

    bm_verts = [bm.verts.new(v) for v in bl_verts]
    bm.verts.ensure_lookup_table()
    uv_layer = bm.loops.layers.uv.new("UVMap")

    for tri in pm.triangles:
        mat_idx = tri[9]
        if mat_filter is not None and mat_idx != mat_filter:
            continue

        try:
            face = bm.faces.new((bm_verts[tri[0]], bm_verts[tri[2]], bm_verts[tri[1]]))
        except ValueError:
            continue

        face.material_index = 0 if mat_filter is not None else min(mat_idx, max(len(pm.materials) - 1, 0))

        face.loops[0][uv_layer].uv = (tri[3], 1.0 - tri[4])
        face.loops[1][uv_layer].uv = (tri[7], 1.0 - tri[8])
        face.loops[2][uv_layer].uv = (tri[5], 1.0 - tri[6])

    # Remove unused vertices
    verts_to_remove = [v for v in bm.verts if not v.link_faces]
    for v in verts_to_remove:
        bm.verts.remove(v)

    return bm


def _create_helpers(pm, context, parent_obj):
    """Create Blender empties for PM helper objects."""
    if not pm.helpers:
        return
    for hname, hx, hy, hz in pm.helpers:
        empty = bpy.data.objects.new(hname, None)
        empty.empty_display_type = 'PLAIN_AXES'
        empty.empty_display_size = 5.0
        empty.location = d3d_to_blender(hx, hy, hz)
        empty.parent = parent_obj
        context.collection.objects.link(empty)


def import_pm(filepath, context, import_textures=True, split_by_material=False):
    pm = PMModel.load(filepath)
    model_name = os.path.splitext(os.path.basename(filepath))[0]

    bl_verts = [d3d_to_blender(*v) for v in pm.vertices]
    textures_root = find_textures_root(filepath) if import_textures else None
    bl_materials = _create_bl_materials(pm, textures_root)

    if split_by_material and len(pm.materials) > 1:
        # Create root empty to parent everything to
        root = bpy.data.objects.new(model_name, None)
        root.empty_display_type = 'PLAIN_AXES'
        root.empty_display_size = 1.0
        context.collection.objects.link(root)

        for mi, mat_name in enumerate(pm.materials):
            bm = _build_bmesh(pm, bl_verts, mat_filter=mi)
            if len(bm.faces) == 0:
                bm.free()
                continue

            short_name = mat_name.replace('\\', '/').split('/')[-1]
            mesh = bpy.data.meshes.new(f"{model_name}_{short_name}")
            mesh.materials.append(bl_materials[mi])
            bm.to_mesh(mesh)
            bm.free()
            mesh.update()

            obj = bpy.data.objects.new(f"{model_name}_{short_name}", mesh)
            obj.parent = root
            context.collection.objects.link(obj)

        _create_helpers(pm, context, root)
        context.view_layer.objects.active = root
        root.select_set(True)

        print(f"Imported PM (split): {model_name} ({len(pm.materials)} parts, "
              f"{len(pm.helpers)} helpers)")
        return root
    else:
        # Single mesh
        bm = _build_bmesh(pm, bl_verts)
        mesh = bpy.data.meshes.new(model_name)
        for bl_mat in bl_materials:
            mesh.materials.append(bl_mat)
        bm.to_mesh(mesh)
        bm.free()

        if pm.normals:
            bl_normals = [d3d_normal_to_blender(*n) for n in pm.normals]
            mesh.normals_split_custom_set_from_vertices(bl_normals)
            mesh.use_auto_smooth = True

        mesh.update()

        obj = bpy.data.objects.new(model_name, mesh)
        context.collection.objects.link(obj)
        context.view_layer.objects.active = obj
        obj.select_set(True)

        _create_helpers(pm, context, obj)

        print(f"Imported PM: {model_name} ({len(pm.vertices)} verts, "
              f"{len(pm.triangles)} tris, {len(pm.helpers)} helpers)")
        return obj


# ── Operator ──────────────────────────────────────────────────────────────

class IMPORT_OT_autothief_pm(bpy.types.Operator, ImportHelper):
    bl_idname = "import_mesh.autothief_pm"
    bl_label = "Import AutoThief PM"
    bl_options = {'REGISTER', 'UNDO'}

    filename_ext = ".pm"
    filter_glob: StringProperty(default="*.pm;*.PM", options={'HIDDEN'})

    import_textures: BoolProperty(
        name="Import Textures",
        description="Auto-find and assign DDS textures from Textures/ directory",
        default=True,
    )

    split_by_material: BoolProperty(
        name="Split by Material",
        description="Create separate objects for each material (body, glass, interior, etc.)",
        default=False,
    )

    def execute(self, context):
        try:
            import_pm(self.filepath, context, self.import_textures, self.split_by_material)
            return {'FINISHED'}
        except Exception as e:
            self.report({'ERROR'}, str(e))
            import traceback
            traceback.print_exc()
            return {'CANCELLED'}

    def draw(self, context):
        layout = self.layout
        layout.prop(self, "import_textures")
        layout.prop(self, "split_by_material")

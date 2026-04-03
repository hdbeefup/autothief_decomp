"""
City map importer for Blender.
AutoThief / CarJacker (Kozmogames, 2005) .city road network format.
"""

import os
import struct

import bpy
import bmesh
from bpy_extras.io_utils import ImportHelper
from bpy.props import BoolProperty, FloatProperty, StringProperty
from mathutils import Matrix, Vector

# ── City Parser (standalone, no dependency on tools/city_format.py) ───────


class CityData:
    def __init__(self):
        self.segments = []
        self.junctions = []
        self.connections = []
        self.models = []

    @staticmethod
    def load(filepath):
        c = CityData()
        with open(filepath, 'rb') as f:
            data = f.read()

        off = 0

        def u32():
            nonlocal off
            v = struct.unpack_from('<I', data, off)[0]
            off += 4
            return v

        def u8():
            nonlocal off
            v = data[off]
            off += 1
            return v

        def f32():
            nonlocal off
            v = struct.unpack_from('<f', data, off)[0]
            off += 4
            return v

        def vec3():
            nonlocal off
            v = struct.unpack_from('<3f', data, off)
            off += 12
            return v

        # Section 1: Road segments
        seg_count = u32()
        for _ in range(seg_count):
            seg_id = u32()
            road_type = u8()
            center = vec3()
            direction = vec3()
            vert_count = u32()
            verts = [vec3() for _ in range(vert_count)]
            is_closed = u8()
            c.segments.append({
                'id': seg_id, 'road_type': road_type,
                'center': center, 'direction': direction,
                'vertices': verts, 'is_closed': is_closed,
            })

        # Section 2: Junctions
        junc_count = u32()
        for _ in range(junc_count):
            c.junctions.append({'position': vec3()})

        # Section 3: Connections
        conn_count = u32()
        for _ in range(conn_count):
            c.connections.append({
                'param_a': f32(), 'param_b': f32(),
                'junction_idx_a': u32(), 'junction_idx_b': u32(),
            })

        # Section 4: Model placements
        model_count = u32()
        for _ in range(model_count):
            raw_name = data[off:off + 64]
            null_pos = raw_name.find(b'\x00')
            name = raw_name[:null_pos].decode('ascii') if null_pos >= 0 else raw_name.decode('ascii')
            off += 64
            mat = []
            for _ in range(4):
                mat.append(list(struct.unpack_from('<4f', data, off)))
                off += 16
            extra = f32()
            c.models.append({
                'model_name': name, 'transform': mat,
                'extra': extra, '_raw_name': raw_name,
            })

        return c

    def save(self, filepath):
        parts = []

        def w_u32(v):
            parts.append(struct.pack('<I', v))

        def w_u8(v):
            parts.append(struct.pack('<B', v))

        def w_f32(v):
            parts.append(struct.pack('<f', v))

        def w_vec3(v):
            parts.append(struct.pack('<3f', *v))

        # Section 1
        w_u32(len(self.segments))
        for seg in self.segments:
            w_u32(seg['id'])
            w_u8(seg['road_type'])
            w_vec3(seg['center'])
            w_vec3(seg['direction'])
            w_u32(len(seg['vertices']))
            for v in seg['vertices']:
                w_vec3(v)
            w_u8(seg['is_closed'])

        # Section 2
        w_u32(len(self.junctions))
        for j in self.junctions:
            w_vec3(j['position'])

        # Section 3
        w_u32(len(self.connections))
        for c in self.connections:
            w_f32(c['param_a'])
            w_f32(c['param_b'])
            w_u32(c['junction_idx_a'])
            w_u32(c['junction_idx_b'])

        # Section 4
        w_u32(len(self.models))
        for m in self.models:
            if '_raw_name' in m and m['_raw_name']:
                parts.append(m['_raw_name'])
            else:
                parts.append(m['model_name'].encode('ascii').ljust(64, b'\x00'))
            for row in m['transform']:
                parts.append(struct.pack('<4f', *row))
            w_f32(m['extra'])

        with open(filepath, 'wb') as f:
            f.write(b''.join(parts))


# ── Coordinate conversion ─────────────────────────────────────────────────
# Game uses D3D left-handed Y-up coords with large offsets.
# We convert to Blender right-handed Z-up and optionally center the map.

AXIS_SWAP = Matrix((
    (-1, 0, 0, 0),
    (0, 0, 1, 0),
    (0, 1, 0, 0),
    (0, 0, 0, 1),
))

AXIS_SWAP_INV = AXIS_SWAP.inverted()


def d3d_to_blender(x, y, z):
    return (-x, z, y)


def blender_to_d3d(x, y, z):
    return (-x, z, y)


def d3d_matrix_to_blender(rows):
    """Convert a D3D row-major 4x4 matrix to Blender."""
    d3d_mat = Matrix((rows[0], rows[1], rows[2], rows[3])).transposed()
    return AXIS_SWAP @ d3d_mat @ AXIS_SWAP_INV


def blender_matrix_to_d3d(bl_mat):
    """Convert a Blender 4x4 matrix back to D3D row-major."""
    d3d_mat = AXIS_SWAP_INV @ bl_mat @ AXIS_SWAP
    m = d3d_mat.transposed()
    return [list(m[0]), list(m[1]), list(m[2]), list(m[3])]


# ── Collection helpers ────────────────────────────────────────────────────

def get_or_create_collection(context, name, parent=None):
    if name in bpy.data.collections:
        return bpy.data.collections[name]
    col = bpy.data.collections.new(name)
    if parent is None:
        context.scene.collection.children.link(col)
    else:
        parent.children.link(col)
    return col


# ── Import ────────────────────────────────────────────────────────────────

ROAD_TYPE_NAMES = {0: 'normal', 1: 'minor', 3: 'highway'}
ROAD_TYPE_COLORS = {
    0: (0.4, 0.4, 0.4, 1.0),
    1: (0.6, 0.6, 0.6, 1.0),
    3: (0.8, 0.5, 0.0, 1.0),
}


def import_city(filepath, context, scale=0.01, import_models=True,
                import_junctions=True, import_connections=True,
                extrude_roads=False, road_width=800.0):
    city = CityData.load(filepath)
    map_name = os.path.splitext(os.path.basename(filepath))[0]

    root_col = get_or_create_collection(context, f"City_{map_name}")
    seg_col = get_or_create_collection(context, f"{map_name}_Roads", root_col)

    # ── Road segments as curves ───────────────────────────────────────
    road_materials = {}
    for rt, color in ROAD_TYPE_COLORS.items():
        mat = bpy.data.materials.new(f"road_{ROAD_TYPE_NAMES.get(rt, str(rt))}")
        mat.diffuse_color = color
        road_materials[rt] = mat

    for i, seg in enumerate(city.segments):
        rt_name = ROAD_TYPE_NAMES.get(seg['road_type'], str(seg['road_type']))
        curve_data = bpy.data.curves.new(f"road_{i:03d}_{rt_name}", type='CURVE')
        curve_data.dimensions = '3D'
        curve_data.resolution_u = 2

        if extrude_roads:
            curve_data.bevel_depth = road_width * scale * 0.5
            curve_data.bevel_resolution = 0
            curve_data.use_fill_caps = True

        spline = curve_data.splines.new('POLY')
        verts = seg['vertices']
        spline.points.add(len(verts) - 1)
        for j, v in enumerate(verts):
            bx, by, bz = d3d_to_blender(*v)
            spline.points[j].co = (bx * scale, by * scale, bz * scale, 1.0)

        if seg['is_closed']:
            spline.use_cyclic_u = True

        obj = bpy.data.objects.new(f"road_{i:03d}_{rt_name}", curve_data)
        obj["city_type"] = "road_segment"
        obj["city_seg_id"] = seg['id']
        obj["city_road_type"] = seg['road_type']
        obj["city_is_closed"] = seg['is_closed']
        obj["city_center"] = list(seg['center'])
        obj["city_direction"] = list(seg['direction'])

        mat = road_materials.get(seg['road_type'])
        if mat:
            curve_data.materials.append(mat)

        seg_col.objects.link(obj)

    # ── Junctions ─────────────────────────────────────────────────────
    if import_junctions and city.junctions:
        junc_col = get_or_create_collection(context, f"{map_name}_Junctions", root_col)
        for i, junc in enumerate(city.junctions):
            empty = bpy.data.objects.new(f"junction_{i:03d}", None)
            empty.empty_display_type = 'SPHERE'
            empty.empty_display_size = 2.0 * scale * 1000
            bx, by, bz = d3d_to_blender(*junc['position'])
            empty.location = (bx * scale, by * scale, bz * scale)
            empty["city_type"] = "junction"
            empty["city_index"] = i
            junc_col.objects.link(empty)

    # ── Connections ───────────────────────────────────────────────────
    if import_connections and city.connections:
        conn_col = get_or_create_collection(context, f"{map_name}_Connections", root_col)
        for i, conn in enumerate(city.connections):
            empty = bpy.data.objects.new(f"conn_{i:03d}", None)
            empty.empty_display_type = 'ARROWS'
            empty.empty_display_size = 1.0 * scale * 1000
            empty["city_type"] = "connection"
            empty["city_param_a"] = conn['param_a']
            empty["city_param_b"] = conn['param_b']
            empty["city_junction_idx_a"] = conn['junction_idx_a']
            empty["city_junction_idx_b"] = conn['junction_idx_b']

            # Position at midpoint of the two junctions if possible
            ia, ib = conn['junction_idx_a'], conn['junction_idx_b']
            if ia < len(city.junctions) and ib < len(city.junctions):
                pa = city.junctions[ia]['position']
                pb = city.junctions[ib]['position']
                mx = (pa[0] + pb[0]) / 2
                my = (pa[1] + pb[1]) / 2
                mz = (pa[2] + pb[2]) / 2
                bx, by, bz = d3d_to_blender(mx, my, mz)
                empty.location = (bx * scale, by * scale, bz * scale)

            conn_col.objects.link(empty)

    # ── Model placements ──────────────────────────────────────────────
    if import_models and city.models:
        model_col = get_or_create_collection(context, f"{map_name}_Models", root_col)
        for i, m in enumerate(city.models):
            short_name = m['model_name'].replace('models\\', '').replace('models/', '')
            empty = bpy.data.objects.new(f"model_{i:03d}_{short_name}", None)
            empty.empty_display_type = 'CUBE'
            empty.empty_display_size = 5.0 * scale * 1000

            bl_mat = d3d_matrix_to_blender(m['transform'])
            # Apply scale to position
            pos = bl_mat.translation * scale
            bl_mat_scaled = bl_mat.copy()
            bl_mat_scaled.translation = pos
            empty.matrix_world = bl_mat_scaled

            empty["city_type"] = "model_placement"
            empty["city_model_name"] = m['model_name']
            empty["city_extra"] = m['extra']

            model_col.objects.link(empty)

    print(f"Imported City: {map_name} ({len(city.segments)} roads, "
          f"{len(city.junctions)} junctions, {len(city.connections)} connections, "
          f"{len(city.models)} models)")
    return city


# ── Operator ──────────────────────────────────────────────────────────────

class IMPORT_OT_autothief_city(bpy.types.Operator, ImportHelper):
    bl_idname = "import_scene.autothief_city"
    bl_label = "Import AutoThief City"
    bl_options = {'REGISTER', 'UNDO'}

    filename_ext = ".city"
    filter_glob: StringProperty(default="*.city", options={'HIDDEN'})

    scale: FloatProperty(
        name="Scale",
        description="Scale factor (game units are very large, 0.01 brings them to reasonable Blender size)",
        default=0.01,
        min=0.0001,
        max=1.0,
    )

    import_models: BoolProperty(
        name="Import Models",
        description="Import building/object placement empties",
        default=True,
    )

    import_junctions: BoolProperty(
        name="Import Junctions",
        description="Import junction point empties",
        default=True,
    )

    import_connections: BoolProperty(
        name="Import Connections",
        description="Import road connection empties",
        default=True,
    )

    extrude_roads: BoolProperty(
        name="Extrude Roads",
        description="Give road curves a bevel width for visualization",
        default=False,
    )

    road_width: FloatProperty(
        name="Road Width",
        description="Road extrusion width in game units",
        default=800.0,
        min=100.0,
        max=5000.0,
    )

    def execute(self, context):
        try:
            import_city(self.filepath, context,
                        scale=self.scale,
                        import_models=self.import_models,
                        import_junctions=self.import_junctions,
                        import_connections=self.import_connections,
                        extrude_roads=self.extrude_roads,
                        road_width=self.road_width)
            return {'FINISHED'}
        except Exception as e:
            self.report({'ERROR'}, str(e))
            import traceback
            traceback.print_exc()
            return {'CANCELLED'}

    def draw(self, context):
        layout = self.layout
        layout.prop(self, "scale")
        layout.separator()
        layout.label(text="Components:")
        layout.prop(self, "import_models")
        layout.prop(self, "import_junctions")
        layout.prop(self, "import_connections")
        layout.separator()
        layout.label(text="Road Display:")
        layout.prop(self, "extrude_roads")
        if self.extrude_roads:
            layout.prop(self, "road_width")

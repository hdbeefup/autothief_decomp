"""
City map exporter for Blender.
AutoThief / CarJacker (Kozmogames, 2005) .city road network format.

Reads road segments (curves), junctions (empties), connections (empties),
and model placements (empties) from the Blender scene and writes a .city file.

Objects are identified by their "city_type" custom property set during import.
"""

import os
import struct

import bpy
from bpy_extras.io_utils import ExportHelper
from bpy.props import FloatProperty, StringProperty

from . import import_city


def collect_city_objects(context, collection_prefix=None):
    """Collect all city objects from the scene, grouped by type."""
    segments = []
    junctions = []
    connections = []
    models = []

    for obj in context.scene.objects:
        ct = obj.get("city_type")
        if ct == "road_segment":
            segments.append(obj)
        elif ct == "junction":
            junctions.append(obj)
        elif ct == "connection":
            connections.append(obj)
        elif ct == "model_placement":
            models.append(obj)

    # Sort by original index/id for stable output
    segments.sort(key=lambda o: o.name)
    junctions.sort(key=lambda o: o.get("city_index", 0))
    connections.sort(key=lambda o: o.name)
    models.sort(key=lambda o: o.name)

    return segments, junctions, connections, models


def blender_curve_to_vertices(obj, inv_scale):
    """Extract world-space vertices from a curve object, convert back to D3D."""
    verts = []
    if obj.data and obj.data.splines:
        spline = obj.data.splines[0]
        for pt in spline.points:
            co = obj.matrix_world @ pt.co.to_3d()
            dx, dy, dz = import_city.blender_to_d3d(
                co.x * inv_scale, co.y * inv_scale, co.z * inv_scale)
            verts.append((dx, dy, dz))
    return verts


def export_city(filepath, context, scale=0.01):
    inv_scale = 1.0 / scale
    segments_obj, junctions_obj, connections_obj, models_obj = collect_city_objects(context)

    city = import_city.CityData()

    # ── Road segments ─────────────────────────────────────────────────
    for obj in segments_obj:
        verts = blender_curve_to_vertices(obj, inv_scale)
        if not verts:
            continue

        seg = {
            'id': obj.get("city_seg_id", 0),
            'road_type': obj.get("city_road_type", 0),
            'center': tuple(obj.get("city_center", [0.0, 0.0, 0.0])),
            'direction': tuple(obj.get("city_direction", [0.0, 0.0, 0.0])),
            'vertices': verts,
            'is_closed': obj.get("city_is_closed", 0),
        }

        # Update is_closed from spline cyclic state
        if obj.data and obj.data.splines:
            seg['is_closed'] = 1 if obj.data.splines[0].use_cyclic_u else 0

        city.segments.append(seg)

    # ── Junctions ─────────────────────────────────────────────────────
    for obj in junctions_obj:
        loc = obj.matrix_world.translation
        dx, dy, dz = import_city.blender_to_d3d(
            loc.x * inv_scale, loc.y * inv_scale, loc.z * inv_scale)
        city.junctions.append({'position': (dx, dy, dz)})

    # ── Connections ───────────────────────────────────────────────────
    for obj in connections_obj:
        city.connections.append({
            'param_a': obj.get("city_param_a", 0.0),
            'param_b': obj.get("city_param_b", 0.0),
            'junction_idx_a': obj.get("city_junction_idx_a", 0),
            'junction_idx_b': obj.get("city_junction_idx_b", 0),
        })

    # ── Model placements ──────────────────────────────────────────────
    for obj in models_obj:
        bl_mat = obj.matrix_world.copy()
        # Undo scale on position
        bl_mat.translation = bl_mat.translation * inv_scale
        d3d_rows = import_city.blender_matrix_to_d3d(bl_mat)

        model_name = obj.get("city_model_name", "models\\unknown")
        city.models.append({
            'model_name': model_name,
            'transform': d3d_rows,
            'extra': obj.get("city_extra", 0.0),
            '_raw_name': model_name.encode('ascii').ljust(64, b'\x00'),
        })

    city.save(filepath)

    print(f"Exported City: {os.path.basename(filepath)} ({len(city.segments)} roads, "
          f"{len(city.junctions)} junctions, {len(city.connections)} connections, "
          f"{len(city.models)} models)")


# ── Operator ──────────────────────────────────────────────────────────────

class EXPORT_OT_autothief_city(bpy.types.Operator, ExportHelper):
    bl_idname = "export_scene.autothief_city"
    bl_label = "Export AutoThief City"
    bl_options = {'REGISTER'}

    filename_ext = ".city"
    filter_glob: StringProperty(default="*.city", options={'HIDDEN'})

    scale: FloatProperty(
        name="Scale",
        description="Scale factor used during import (must match for correct export)",
        default=0.01,
        min=0.0001,
        max=1.0,
    )

    def execute(self, context):
        try:
            export_city(self.filepath, context, scale=self.scale)
            self.report({'INFO'}, f"Exported to {self.filepath}")
            return {'FINISHED'}
        except Exception as e:
            self.report({'ERROR'}, str(e))
            import traceback
            traceback.print_exc()
            return {'CANCELLED'}

    def draw(self, context):
        layout = self.layout
        layout.prop(self, "scale")

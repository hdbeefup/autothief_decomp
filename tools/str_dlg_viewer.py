"""
STR/DLG file viewer for CarJacker (PBE Engine USMFile#2 format)

Parses text.str (string tables) and text.dlg (dialog trees) files.
See docs/STR_DLG_FORMAT.md for format specification.

Usage:
    python str_dlg_viewer.py text.str
    python str_dlg_viewer.py text.dlg --str-file text.str
    python str_dlg_viewer.py text.str --dump-types
    python str_dlg_viewer.py text.dlg --dump-instances
    python str_dlg_viewer.py --gui text.str text.dlg   (graphical viewer)
"""

import struct
import argparse
import os
import sys
from collections import namedtuple

FieldDef = namedtuple('FieldDef', ['name', 'field_type', 'size', 'secondary_name'])
TypeDef = namedtuple('TypeDef', ['name', 'flags', 'fields'])
SubEntry = namedtuple('SubEntry', ['type_index', 'record_count', 'data_offset'])
InstanceBlock = namedtuple('InstanceBlock', ['seq_id', 'parent_id', 'name', 'subs'])

StringRecord = namedtuple('StringRecord', ['id', 'text', 'size'])
DialogReplic = namedtuple('DialogReplic', ['x', 'y', 'w', 'h', 'bSelected', 'mID', 'mQuestionID', 'mPreQuestionID'])
DialogAnswer = namedtuple('DialogAnswer', ['mNextReplicID', 'mAnswerID', 'mResultID'])

DialogSection = namedtuple('DialogSection', ['name_str_id', 'replics', 'answer_groups'])


class USMFile:
    """Generic USMFile#2 container parser."""

    MAGIC = b'USMFile#2\x00'

    def __init__(self, filepath):
        with open(filepath, 'rb') as f:
            self.data = f.read()
        self.filepath = filepath
        self.types = []
        self.blocks = []
        self._parse()

    def _parse(self):
        if self.data[:10] != self.MAGIC:
            raise ValueError(f"Invalid magic: expected USMFile#2, got {self.data[:10]!r}")

        self.type_reg_offset = struct.unpack_from('<I', self.data, len(self.data) - 8)[0]
        self.inst_offset = struct.unpack_from('<I', self.data, len(self.data) - 4)[0]

        self._parse_type_registry()
        self._parse_instance_section()

    def _parse_type_registry(self):
        pos = self.type_reg_offset
        num_types = struct.unpack_from('<I', self.data, pos)[0]; pos += 4

        for _ in range(num_types):
            flags = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
            name_len = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
            name = self.data[pos:pos + name_len - 1].decode('latin-1'); pos += name_len
            num_fields = struct.unpack_from('<I', self.data, pos)[0]; pos += 4

            fields = []
            for _ in range(num_fields):
                ftype = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                fname_len = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                fname = self.data[pos:pos + fname_len - 1].decode('latin-1'); pos += fname_len
                fsize = struct.unpack_from('<I', self.data, pos)[0]; pos += 4

                secondary = None
                if ftype == 1:
                    sname_len = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                    secondary = self.data[pos:pos + sname_len - 1].decode('latin-1'); pos += sname_len

                fields.append(FieldDef(fname, ftype, fsize, secondary))

            self.types.append(TypeDef(name, flags, fields))

    def _parse_instance_section(self):
        pos = self.inst_offset
        init_count = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
        pos += init_count * 12  # skip initial entries (3 x uint32 each)

        while pos < self.type_reg_offset:
            inst_type = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
            if inst_type != 1:
                break
            seq_id = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
            parent_id = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
            name_len = self.data[pos]; pos += 1
            name = self.data[pos:pos + name_len - 1].decode('latin-1'); pos += name_len

            sub_count = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
            subs = []
            for _ in range(sub_count):
                ti = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                rc = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                do = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                subs.append(SubEntry(ti, rc, do))

            self.blocks.append(InstanceBlock(seq_id, parent_id, name, subs))

    def record_size(self, type_index):
        """Calculate fixed record size for a type (only valid for all-fixed types)."""
        typedef = self.types[type_index]
        total = 0
        for f in typedef.fields:
            if f.field_type == 1:
                return None  # variable-length, can't use fixed stride
            total += f.size
        return total

    def read_fixed_records(self, type_index, count, data_offset):
        """Read records of an all-fixed-field type."""
        rec_size = self.record_size(type_index)
        if rec_size is None:
            raise ValueError(f"Type {self.types[type_index].name} has variable-length fields")
        records = []
        for i in range(count):
            offset = data_offset + i * rec_size
            records.append(self.data[offset:offset + rec_size])
        return records

    def read_variable_records(self, type_index, count, data_offset):
        """Read records that may have variable-length fields."""
        typedef = self.types[type_index]
        records = []
        pos = data_offset
        for _ in range(count):
            fields = {}
            for field in typedef.fields:
                if field.field_type == 0:
                    fields[field.name] = self.data[pos:pos + field.size]
                    pos += field.size
                else:
                    var_len = struct.unpack_from('<I', self.data, pos)[0]; pos += 4
                    fields[field.name] = self.data[pos:pos + var_len]
                    pos += var_len
            records.append(fields)
        return records


def decode_game_string(raw_bytes):
    """Decode a game string, trying CP1251 (Cyrillic) then Latin-1."""
    text = raw_bytes.rstrip(b'\x00')
    try:
        decoded = text.decode('cp1251')
        return decoded
    except (UnicodeDecodeError, ValueError):
        return text.decode('latin-1', errors='replace')


def parse_str_file(filepath):
    """Parse a text.str file and return a dict of {id: text}."""
    usm = USMFile(filepath)
    strings = {}

    for block in usm.blocks:
        for sub in block.subs:
            if sub.type_index >= len(usm.types):
                continue
            if usm.types[sub.type_index].name != 'STRING_T':
                continue

            records = usm.read_variable_records(sub.type_index, sub.record_count, sub.data_offset)
            for rec in records:
                str_id = struct.unpack('<I', rec['id'])[0]
                text = decode_game_string(rec['str'])
                strings[str_id] = text

    return usm, strings


def parse_dialog_replic(raw_data):
    """Parse a 29-byte DIALOG_REPLIC_T record."""
    x, y, w, h = struct.unpack_from('<IIII', raw_data, 0)
    bSel = raw_data[16]
    mID, mQID, mPreQID = struct.unpack_from('<III', raw_data, 17)
    return DialogReplic(x, y, w, h, bSel, mID, mQID, mPreQID)


def parse_dialog_answer(raw_data):
    """Parse a 12-byte DIALOG_ANSWER_T record."""
    nextR, ansID, resID = struct.unpack_from('<III', raw_data, 0)
    return DialogAnswer(nextR, ansID, resID)


def parse_dlg_file(filepath):
    """Parse a text.dlg file and return dialog sections."""
    usm = USMFile(filepath)

    # Build block lookup by seq_id
    block_by_id = {b.seq_id: b for b in usm.blocks}

    # Find type indices
    replic_type_idx = None
    answer_type_idx = None
    for i, t in enumerate(usm.types):
        if t.name == 'DIALOG_REPLIC_T':
            replic_type_idx = i
        elif t.name == 'DIALOG_ANSWER_T':
            answer_type_idx = i

    sections = []

    for block in usm.blocks:
        if block.parent_id != 0:
            continue  # skip children, process from roots

        # Parse replics from root block
        replics = []
        for sub in block.subs:
            if sub.type_index == replic_type_idx:
                raw_records = usm.read_fixed_records(sub.type_index, sub.record_count, sub.data_offset)
                replics = [parse_dialog_replic(r) for r in raw_records]

        # Find child answer blocks
        answer_groups = {}
        for child in usm.blocks:
            if child.parent_id != block.seq_id:
                continue
            for sub in child.subs:
                if sub.type_index == answer_type_idx:
                    raw_records = usm.read_fixed_records(sub.type_index, sub.record_count, sub.data_offset)
                    answers = [parse_dialog_answer(r) for r in raw_records]
                    answer_groups[child.name] = answers

        name_str_id = int(block.name) if block.name.isdigit() else 0
        sections.append(DialogSection(name_str_id, replics, answer_groups))

    return usm, sections


def show_string_table(filepath, filter_id=None):
    """Display string table from a .str file."""
    usm, strings = parse_str_file(filepath)

    print(f"=== String Table: {os.path.basename(filepath)} ===")
    print(f"Total strings: {len(strings)}")
    print()

    max_id = max(strings.keys()) if strings else 0
    id_width = max(len(str(max_id)), 4)

    print(f"{'ID':>{id_width}} | String")
    print(f"{'-' * id_width}-+-{'-' * 70}")

    for str_id in sorted(strings.keys()):
        if filter_id is not None and str_id != filter_id:
            continue
        text = strings[str_id]
        # Escape control characters for display
        display = text.replace('\r\n', '\\n').replace('\r', '\\r').replace('\n', '\\n')
        if len(display) > 70:
            display = display[:67] + "..."
        print(f"{str_id:>{id_width}} | {display}")


def show_dialog_tree(filepath, str_filepath=None, filter_id=None):
    """Display dialog tree from a .dlg file."""
    usm, sections = parse_dlg_file(filepath)

    # Load string table for cross-references
    strings = {}
    if str_filepath:
        _, strings = parse_str_file(str_filepath)

    def get_str(sid):
        if sid in strings:
            text = strings[sid]
            text = text.replace('\r\n', '\\n').replace('\r', '\\r').replace('\n', '\\n')
            if len(text) > 60:
                text = text[:57] + "..."
            return text
        return f"(str[{sid}])"

    print(f"=== Dialog Tree: {os.path.basename(filepath)} ===")
    print(f"Dialog sections: {len(sections)}")
    if str_filepath:
        print(f"String file: {os.path.basename(str_filepath)}")
    print()

    for section in sections:
        if filter_id is not None and section.name_str_id != filter_id:
            continue

        section_name = get_str(section.name_str_id) if section.name_str_id in strings else f"str[{section.name_str_id}]"
        print(f"--- Dialog: {section_name} (str[{section.name_str_id}]) ---")

        for replic in section.replics:
            question = get_str(replic.mQuestionID)
            print(f"  Replic #{replic.mID} [pos: {replic.x},{replic.y} size: {replic.w}x{replic.h}]")
            print(f"    Question: \"{question}\"")
            if replic.mPreQuestionID != 0:
                pre_q = get_str(replic.mPreQuestionID)
                print(f"    Pre-question: \"{pre_q}\"")

            # Find answers for this replic
            ans_key = f"ANSWERS_{replic.mID}"
            if ans_key in section.answer_groups:
                answers = section.answer_groups[ans_key]
                for ai, ans in enumerate(answers):
                    ans_text = get_str(ans.mAnswerID)
                    next_str = "END" if ans.mNextReplicID >= 0xFFFF else f"replic #{ans.mNextReplicID}"
                    print(f"    Answer [{ai}]: \"{ans_text}\" -> {next_str}")
                    if ans.mResultID != 0 and ans.mResultID != 0xFFFFFFFF:
                        result_text = get_str(ans.mResultID)
                        print(f"      Result: {result_text}")
            print()
        print()


def show_types(filepath):
    """Dump USMFile type registry."""
    usm = USMFile(filepath)

    print(f"=== USMFile#2 Type Registry: {os.path.basename(filepath)} ===")
    print(f"File size: {len(usm.data)} bytes (0x{len(usm.data):X})")
    print(f"Type registry offset: 0x{usm.type_reg_offset:X}")
    print(f"Instance section offset: 0x{usm.inst_offset:X}")
    print(f"Types: {len(usm.types)}")
    print()

    for i, typedef in enumerate(usm.types):
        rec_size = usm.record_size(i)
        size_str = f"{rec_size} bytes" if rec_size else "variable"
        print(f"Type {i}: \"{typedef.name}\" (flags=0x{typedef.flags:X}, {len(typedef.fields)} fields, {size_str})")
        for fi, field in enumerate(typedef.fields):
            ftype_str = "fixed" if field.field_type == 0 else "variable"
            extra = f", secondary=\"{field.secondary_name}\"" if field.secondary_name else ""
            print(f"  [{fi}] {field.name:20s} : {ftype_str}, {field.size} bytes{extra}")
        print()


def show_instances(filepath):
    """Dump USMFile instance block tree."""
    usm = USMFile(filepath)

    print(f"=== USMFile#2 Instance Tree: {os.path.basename(filepath)} ===")
    print(f"Instance blocks: {len(usm.blocks)}")
    print()

    # Build children map
    children = {}
    for block in usm.blocks:
        children.setdefault(block.parent_id, []).append(block)

    def print_block(block, indent=0):
        prefix = "  " * indent
        type_names = []
        for sub in block.subs:
            tname = usm.types[sub.type_index].name if sub.type_index < len(usm.types) else f"type[{sub.type_index}]"
            type_names.append(f"{tname} x{sub.record_count} @0x{sub.data_offset:X}")
        subs_str = ", ".join(type_names)
        print(f"{prefix}[{block.seq_id}] \"{block.name}\" ({subs_str})")

        for child in children.get(block.seq_id, []):
            print_block(child, indent + 1)

    # Print root blocks
    for block in children.get(0, []):
        print_block(block)
        print()


def launch_gui(str_file, dlg_file):
    """Launch graphical viewer with string table and dialog tree."""
    import tkinter as tk
    from tkinter import ttk

    strings = {}
    sections = []

    if str_file:
        _, strings = parse_str_file(str_file)
    if dlg_file:
        _, sections = parse_dlg_file(dlg_file)

    def get_str(sid):
        if sid in strings:
            return strings[sid]
        return f"(str[{sid}])"

    root = tk.Tk()
    root.title("CarJacker STR/DLG Viewer")
    root.geometry("1200x700")

    # Main paned window: left = tree, right = detail
    paned = ttk.PanedWindow(root, orient=tk.HORIZONTAL)
    paned.pack(fill=tk.BOTH, expand=True, padx=4, pady=4)

    # Left panel: notebook with String Table and Dialog Tree tabs
    left_frame = ttk.Frame(paned)
    paned.add(left_frame, weight=1)

    notebook = ttk.Notebook(left_frame)
    notebook.pack(fill=tk.BOTH, expand=True)

    # Right panel: detail view
    right_frame = ttk.Frame(paned)
    paned.add(right_frame, weight=2)

    detail_label = ttk.Label(right_frame, text="Detail", font=("Consolas", 10, "bold"))
    detail_label.pack(anchor=tk.W, padx=4, pady=(4, 0))

    detail_text = tk.Text(right_frame, wrap=tk.WORD, font=("Consolas", 10),
                          state=tk.DISABLED, bg="#1e1e1e", fg="#d4d4d4",
                          insertbackground="#d4d4d4", selectbackground="#264f78")
    detail_scroll = ttk.Scrollbar(right_frame, orient=tk.VERTICAL, command=detail_text.yview)
    detail_text.configure(yscrollcommand=detail_scroll.set)
    detail_scroll.pack(side=tk.RIGHT, fill=tk.Y)
    detail_text.pack(fill=tk.BOTH, expand=True, padx=(4, 0), pady=4)

    # Configure text tags for syntax highlighting
    detail_text.tag_configure("heading", foreground="#569cd6", font=("Consolas", 11, "bold"))
    detail_text.tag_configure("question", foreground="#ce9178")
    detail_text.tag_configure("answer", foreground="#6a9955")
    detail_text.tag_configure("result", foreground="#dcdcaa")
    detail_text.tag_configure("info", foreground="#808080")
    detail_text.tag_configure("link", foreground="#4ec9b0")

    def set_detail(text_lines):
        detail_text.configure(state=tk.NORMAL)
        detail_text.delete("1.0", tk.END)
        for line, tag in text_lines:
            detail_text.insert(tk.END, line + "\n", tag)
        detail_text.configure(state=tk.DISABLED)

    # === String Table Tab ===
    str_frame = ttk.Frame(notebook)
    notebook.add(str_frame, text="Strings")

    # Search bar
    search_frame = ttk.Frame(str_frame)
    search_frame.pack(fill=tk.X, padx=4, pady=4)
    ttk.Label(search_frame, text="Search:").pack(side=tk.LEFT)
    search_var = tk.StringVar()
    search_entry = ttk.Entry(search_frame, textvariable=search_var)
    search_entry.pack(side=tk.LEFT, fill=tk.X, expand=True, padx=(4, 0))

    # String list
    str_tree = ttk.Treeview(str_frame, columns=("id", "text"), show="headings", selectmode="browse")
    str_tree.heading("id", text="ID")
    str_tree.heading("text", text="String")
    str_tree.column("id", width=50, minwidth=40, stretch=False)
    str_tree.column("text", width=400)
    str_scroll = ttk.Scrollbar(str_frame, orient=tk.VERTICAL, command=str_tree.yview)
    str_tree.configure(yscrollcommand=str_scroll.set)
    str_scroll.pack(side=tk.RIGHT, fill=tk.Y)
    str_tree.pack(fill=tk.BOTH, expand=True, padx=(4, 0))

    all_str_items = []
    for sid in sorted(strings.keys()):
        text = strings[sid].replace('\r\n', ' ').replace('\n', ' ').replace('\r', ' ')
        preview = text[:80] + "..." if len(text) > 80 else text
        iid = str_tree.insert("", tk.END, values=(sid, preview))
        all_str_items.append((iid, sid, text.lower()))

    def on_str_select(event):
        sel = str_tree.selection()
        if not sel:
            return
        sid = int(str_tree.item(sel[0])["values"][0])
        full_text = strings.get(sid, "")
        lines = [
            (f"String #{sid}", "heading"),
            ("", ""),
            (full_text, "question"),
        ]
        set_detail(lines)

    str_tree.bind("<<TreeviewSelect>>", on_str_select)

    def on_search(*args):
        query = search_var.get().lower()
        # Clear and repopulate
        for item in str_tree.get_children():
            str_tree.delete(item)
        for iid_old, sid, text_lower in all_str_items:
            if query == "" or query in text_lower or query in str(sid):
                text = strings[sid].replace('\r\n', ' ').replace('\n', ' ').replace('\r', ' ')
                preview = text[:80] + "..." if len(text) > 80 else text
                str_tree.insert("", tk.END, values=(sid, preview))

    search_var.trace_add("write", on_search)

    # === Dialog Tree Tab ===
    dlg_frame = ttk.Frame(notebook)
    notebook.add(dlg_frame, text="Dialogs")

    dlg_tree = ttk.Treeview(dlg_frame, columns=("info",), show="tree headings", selectmode="browse")
    dlg_tree.heading("#0", text="Dialog Tree")
    dlg_tree.heading("info", text="Info")
    dlg_tree.column("#0", width=250)
    dlg_tree.column("info", width=200)
    dlg_scroll = ttk.Scrollbar(dlg_frame, orient=tk.VERTICAL, command=dlg_tree.yview)
    dlg_tree.configure(yscrollcommand=dlg_scroll.set)
    dlg_scroll.pack(side=tk.RIGHT, fill=tk.Y)
    dlg_tree.pack(fill=tk.BOTH, expand=True, padx=(4, 0), pady=4)

    # Store section/replic data for detail view
    dlg_data = {}

    for section in sections:
        section_name = get_str(section.name_str_id)
        section_id = dlg_tree.insert("", tk.END, text=section_name,
                                     values=(f"{len(section.replics)} replics",))
        dlg_data[section_id] = ("section", section)

        for replic in section.replics:
            q_text = get_str(replic.mQuestionID)
            q_preview = q_text[:50] + "..." if len(q_text) > 50 else q_text
            replic_id = dlg_tree.insert(section_id, tk.END,
                                        text=f"Replic #{replic.mID}",
                                        values=(q_preview,))
            dlg_data[replic_id] = ("replic", section, replic)

            # Add answers under replic
            ans_key = f"ANSWERS_{replic.mID}"
            if ans_key in section.answer_groups:
                for ai, ans in enumerate(section.answer_groups[ans_key]):
                    ans_text = get_str(ans.mAnswerID)
                    ans_preview = ans_text[:40] + "..." if len(ans_text) > 40 else ans_text
                    ans_id = dlg_tree.insert(replic_id, tk.END,
                                             text=f"Answer [{ai}]",
                                             values=(ans_preview,))
                    dlg_data[ans_id] = ("answer", section, replic, ans)

    def on_dlg_select(event):
        sel = dlg_tree.selection()
        if not sel:
            return
        data = dlg_data.get(sel[0])
        if not data:
            return

        lines = []
        if data[0] == "section":
            section = data[1]
            section_name = get_str(section.name_str_id)
            lines.append((f"Dialog Section: {section_name}", "heading"))
            lines.append((f"String ID: {section.name_str_id}", "info"))
            lines.append((f"Replics: {len(section.replics)}", "info"))
            lines.append((f"Answer groups: {len(section.answer_groups)}", "info"))
            lines.append(("", ""))
            for replic in section.replics:
                q = get_str(replic.mQuestionID)
                lines.append((f"  Replic #{replic.mID}: \"{q}\"", "question"))
                ans_key = f"ANSWERS_{replic.mID}"
                if ans_key in section.answer_groups:
                    for ai, ans in enumerate(section.answer_groups[ans_key]):
                        a = get_str(ans.mAnswerID)
                        nxt = "END" if ans.mNextReplicID >= 0xFFFF else f"-> #{ans.mNextReplicID}"
                        lines.append((f"    [{ai}] \"{a}\" {nxt}", "answer"))
                lines.append(("", ""))

        elif data[0] == "replic":
            section, replic = data[1], data[2]
            q = get_str(replic.mQuestionID)
            lines.append((f"Replic #{replic.mID}", "heading"))
            lines.append(("", ""))
            lines.append(("Question:", "info"))
            lines.append((q, "question"))
            lines.append(("", ""))
            if replic.mPreQuestionID != 0:
                pq = get_str(replic.mPreQuestionID)
                lines.append(("Pre-question:", "info"))
                lines.append((pq, "question"))
                lines.append(("", ""))
            lines.append((f"Position: ({replic.x}, {replic.y})", "info"))
            lines.append((f"Size: {replic.w} x {replic.h}", "info"))
            lines.append((f"bSelected: {replic.bSelected}", "info"))
            lines.append(("", ""))
            ans_key = f"ANSWERS_{replic.mID}"
            if ans_key in section.answer_groups:
                lines.append(("Answers:", "heading"))
                for ai, ans in enumerate(section.answer_groups[ans_key]):
                    a = get_str(ans.mAnswerID)
                    nxt = "END" if ans.mNextReplicID >= 0xFFFF else f"-> replic #{ans.mNextReplicID}"
                    lines.append((f"  [{ai}] \"{a}\" {nxt}", "answer"))
                    if ans.mResultID != 0 and ans.mResultID != 0xFFFFFFFF:
                        r = get_str(ans.mResultID)
                        lines.append((f"       Result: {r}", "result"))

        elif data[0] == "answer":
            section, replic, ans = data[1], data[2], data[3]
            a = get_str(ans.mAnswerID)
            lines.append(("Answer", "heading"))
            lines.append(("", ""))
            lines.append(("Text:", "info"))
            lines.append((a, "answer"))
            lines.append(("", ""))
            nxt = "END" if ans.mNextReplicID >= 0xFFFF else f"replic #{ans.mNextReplicID}"
            lines.append((f"Next: {nxt}", "info"))
            lines.append(("", ""))
            if ans.mResultID != 0 and ans.mResultID != 0xFFFFFFFF:
                r = get_str(ans.mResultID)
                lines.append(("Result (Lua code):", "info"))
                lines.append((r, "result"))
            else:
                lines.append(("Result: (none)", "info"))

        set_detail(lines)

    dlg_tree.bind("<<TreeviewSelect>>", on_dlg_select)

    # === USMFile Info Tab ===
    info_frame = ttk.Frame(notebook)
    notebook.add(info_frame, text="USMFile Info")

    info_text = tk.Text(info_frame, wrap=tk.WORD, font=("Consolas", 10),
                        state=tk.DISABLED, bg="#1e1e1e", fg="#d4d4d4")
    info_scroll = ttk.Scrollbar(info_frame, orient=tk.VERTICAL, command=info_text.yview)
    info_text.configure(yscrollcommand=info_scroll.set)
    info_scroll.pack(side=tk.RIGHT, fill=tk.Y)
    info_text.pack(fill=tk.BOTH, expand=True, padx=4, pady=4)

    info_lines = []
    for filepath, label in [(str_file, "STR"), (dlg_file, "DLG")]:
        if not filepath:
            continue
        usm = USMFile(filepath)
        info_lines.append(f"=== {label}: {os.path.basename(filepath)} ===")
        info_lines.append(f"File size: {len(usm.data)} bytes (0x{len(usm.data):X})")
        info_lines.append(f"Type registry: 0x{usm.type_reg_offset:X}")
        info_lines.append(f"Instance section: 0x{usm.inst_offset:X}")
        info_lines.append(f"Types: {len(usm.types)}")
        info_lines.append("")
        for i, td in enumerate(usm.types):
            rs = usm.record_size(i)
            ss = f"{rs} bytes" if rs else "variable"
            info_lines.append(f"  Type {i}: {td.name} ({ss})")
            for fi, f in enumerate(td.fields):
                ft = "fixed" if f.field_type == 0 else "variable"
                info_lines.append(f"    [{fi}] {f.name}: {ft}, {f.size}B")
        info_lines.append("")
        info_lines.append(f"Instance blocks: {len(usm.blocks)}")
        for b in usm.blocks:
            parent = f" (parent={b.parent_id})" if b.parent_id else ""
            subs_desc = ", ".join(
                f"{usm.types[s.type_index].name} x{s.record_count}"
                for s in b.subs if s.type_index < len(usm.types)
            )
            info_lines.append(f"  [{b.seq_id}] \"{b.name}\"{parent}: {subs_desc}")
        info_lines.append("")

    info_text.configure(state=tk.NORMAL)
    info_text.insert("1.0", "\n".join(info_lines))
    info_text.configure(state=tk.DISABLED)

    # Status bar
    status = ttk.Label(root, text=f"Strings: {len(strings)} | Dialogs: {len(sections)}", relief=tk.SUNKEN)
    status.pack(fill=tk.X, side=tk.BOTTOM)

    root.mainloop()


def main():
    parser = argparse.ArgumentParser(
        description='STR/DLG file viewer for CarJacker (USMFile#2 format)')
    parser.add_argument('file', nargs='*', help='Path to .str and/or .dlg file(s)')
    parser.add_argument('--str-file', help='Path to text.str for cross-referencing dialog text')
    parser.add_argument('--dump-types', action='store_true', help='Dump USMFile type registry')
    parser.add_argument('--dump-instances', action='store_true', help='Dump USMFile instance block tree')
    parser.add_argument('--id', type=int, default=None, help='Show only specific string/dialog ID')
    parser.add_argument('--gui', action='store_true', help='Launch graphical viewer')
    args = parser.parse_args()

    if not args.file:
        parser.print_help()
        sys.exit(1)

    # GUI mode: accept multiple files, auto-detect str/dlg
    if args.gui:
        str_path = None
        dlg_path = None
        for f in args.file:
            ext = os.path.splitext(f)[1].lower()
            if ext == '.str':
                str_path = f
            elif ext == '.dlg':
                dlg_path = f
        if args.str_file:
            str_path = args.str_file
        if not str_path and not dlg_path:
            print("Error: provide at least one .str or .dlg file", file=sys.stderr)
            sys.exit(1)
        launch_gui(str_path, dlg_path)
        return

    filepath = args.file[0]
    if not os.path.isfile(filepath):
        print(f"Error: file not found: {filepath}", file=sys.stderr)
        sys.exit(1)

    if args.dump_types:
        show_types(filepath)
        return

    if args.dump_instances:
        show_instances(filepath)
        return

    ext = os.path.splitext(filepath)[1].lower()
    if ext == '.str':
        show_string_table(filepath, args.id)
    elif ext == '.dlg':
        show_dialog_tree(filepath, args.str_file, args.id)
    else:
        print(f"Unknown extension '{ext}', showing type registry and instances:")
        show_types(filepath)
        print()
        show_instances(filepath)


if __name__ == '__main__':
    main()

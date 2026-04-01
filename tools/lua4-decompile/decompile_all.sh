#!/bin/bash
# Batch decompile all .luab files from CarJacker/Scripts using lua4dec.py

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
DECOMPILER="$SCRIPT_DIR/lua4dec.py"
SRC_DIR="N:/GamesRE/CarJacker/Scripts"
OUT_DIR="N:/GamesRE/CarJacker/Scripts/lua-decompiled"

mkdir -p "$OUT_DIR"

success=0
fail=0
total=0

for luab in "$SRC_DIR"/*.luab; do
    [ -f "$luab" ] || continue
    total=$((total + 1))

    base="$(basename "$luab" .luab)"
    out="$OUT_DIR/${base}.lua"

    echo -n "Decompiling $base.luab ... "
    if python "$DECOMPILER" "$luab" -o "$out" 2>/dev/null; then
        lines=$(wc -l < "$out")
        echo "OK ($lines lines)"
        success=$((success + 1))
    else
        echo "FAILED"
        fail=$((fail + 1))
    fi
done

echo ""
echo "Done: $success/$total succeeded, $fail failed"

#!/usr/bin/env bash
# Deploy the wip scripts into the game's Scripts folder for testing.
# Parse-checks each file first; backs up the originals once (never overwrites the backup).
set -u
WIP="$(cd "$(dirname "$0")" && pwd)"
GS="N:/GamesRE/CarJacker/Scripts"
LUAC="$WIP/../tools/lua4-decompile/CFLuaDC-Lua4-Decompiler-main/luac4.exe"
FILES="sanjose skeleton globals rush game gamegui intro mimics"

mkdir -p "$GS/_backup_wip"
for f in $FILES; do
  [ -f "$WIP/$f.lua" ] || continue
  # one-time backup of whatever is currently in the game folder
  if [ -f "$GS/$f.lua" ] && [ ! -f "$GS/_backup_wip/$f.lua" ]; then
    cp "$GS/$f.lua" "$GS/_backup_wip/$f.lua"
  fi
  if "$LUAC" -p "$WIP/$f.lua" >/dev/null 2>&1; then
    cp "$WIP/$f.lua" "$GS/$f.lua"
    echo "deployed  $f.lua"
  else
    echo "SKIP (parse fail)  $f.lua"
  fi
done
echo "done. revert with: cp \"$GS/_backup_wip/\"*.lua \"$GS/\""

#!/usr/bin/env python3
"""
Replace `jal .L80[23]XXXXXX` with `jal func_80[23]XXXXXX` and add `glabel func_...`
before the first instruction line whose splat comment shows that VRAM.

Fixes R_MIPS_26 when `.L` is resolved in a different TU after `ld -r` merge.

Ref: Docs/Debugging.md Track B.
"""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
GAME = ROOT / "split" / "us" / "asm" / "game"

JAL_LOCAL = re.compile(r"\bjal\s+(\.L(80[23][0-9A-Fa-f]{5}))\b")
VRAM_LINE = re.compile(
    r"^\s*/\*\s+[0-9A-Fa-f]+\s+(80[23][0-9A-Fa-f]{5})\s+[0-9A-Fa-f]{8}\s+\*/\s+"
)


def main() -> int:
    if not GAME.is_dir():
        print(f"No {GAME}", file=sys.stderr)
        return 1

    vram_first: dict[str, tuple[Path, int]] = {}
    for p in sorted(GAME.glob("rom_*.s")):
        lines = p.read_text(errors="replace").splitlines(keepends=True)
        for i, line in enumerate(lines):
            m = VRAM_LINE.match(line)
            if not m:
                continue
            v = m.group(1).upper()
            if v not in vram_first:
                vram_first[v] = (p, i)

    edits: dict[Path, list[tuple[int, str, str]]] = {}
    wanted: set[str] = set()

    for p in sorted(GAME.glob("rom_*.s")):
        lines = p.read_text(errors="replace").splitlines(keepends=True)
        for i, line in enumerate(lines):
            m = JAL_LOCAL.search(line)
            if not m:
                continue
            vram = m.group(2).upper()
            func = f"func_{vram}"
            new_line = JAL_LOCAL.sub(f"jal        {func}", line)
            if new_line != line:
                wanted.add(vram)
                edits.setdefault(p, []).append((i, line, new_line))

    inserts: dict[Path, list[tuple[int, str]]] = {}
    missing: list[str] = []

    for vram in sorted(wanted):
        hit = vram_first.get(vram)
        if not hit:
            missing.append(vram)
            continue
        path, idx = hit
        func = f"func_{vram}"
        text = path.read_text(errors="replace")
        if re.search(rf"^\s*glabel\s+{re.escape(func)}\s*$", text, re.M):
            continue
        lines = text.splitlines(keepends=True)
        if idx > 0 and lines[idx - 1].strip() == f"glabel {func}":
            continue
        inserts.setdefault(path, []).append((idx, f"glabel {func}\n"))

    for path, items in sorted(inserts.items(), key=lambda kv: str(kv[0])):
        items.sort(key=lambda t: t[0], reverse=True)
        lines = path.read_text(errors="replace").splitlines(keepends=True)
        for idx, ins in items:
            lines.insert(idx, ins)
        path.write_text("".join(lines), newline="\n")

    for path, items in sorted(edits.items(), key=lambda kv: str(kv[0])):
        lines = path.read_text(errors="replace").splitlines(keepends=True)
        for i, old, new in items:
            if lines[i] == old:
                lines[i] = new
        path.write_text("".join(lines), newline="\n")

    print(f"glabel inserts: {sum(len(v) for v in inserts.values())} in {len(inserts)} file(s)")
    print(f"jal rewrites: {sum(len(v) for v in edits.values())} in {len(edits)} file(s)")
    if missing:
        print("No VRAM line for:", ", ".join(missing), file=sys.stderr)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

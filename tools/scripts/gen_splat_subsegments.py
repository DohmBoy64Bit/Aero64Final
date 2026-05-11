"""Generate main segment subsegments from splat stdout lines: '      - [0x...., asm]'"""
import re
import sys
from pathlib import Path


def main() -> None:
    p = Path(__file__).resolve().parent / "_splat_split_lines.txt"
    if not p.exists():
        print("Missing", p, file=sys.stderr)
        sys.exit(1)
    starts = [0x1000]
    for line in p.read_text().splitlines():
        m = re.search(r"0x([0-9a-fA-F]+)", line)
        if not m:
            continue
        v = int(m.group(1), 16)
        if v not in starts:
            starts.append(v)
    starts.sort()
    lines = []
    for s in starts:
        name = f"game/rom_{s:08x}"
        lines.append(f"      - [0x{s:X}, asm, {name}]")
    lines.append("      - [0x800000]")
    out = Path(__file__).resolve().parents[2] / "tools" / "scripts" / "_generated_subsegments.yaml"
    out.write_text("\n".join(lines) + "\n")
    print(out, len(lines))


if __name__ == "__main__":
    main()

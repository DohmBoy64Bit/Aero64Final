#!/usr/bin/env python3
"""Run tools/N64Recomp.exe on config/aero.us.toml; on 'Failed to analyze <sym>' append sym via append_aero_us_ignored.py and retry."""
from __future__ import annotations

import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
EXE = ROOT / "tools" / "N64Recomp.exe"
CFG = ROOT / "config" / "aero.us.toml"
APPEND = ROOT / "tools" / "scripts" / "append_aero_us_ignored.py"


def main() -> int:
    if not EXE.is_file():
        print(f"missing {EXE}", file=sys.stderr)
        return 1
    fail_pat = re.compile(r"Failed to analyze (\S+)|Error recompiling (\S+)")
    for attempt in range(200):
        proc = subprocess.run(
            [str(EXE), "aero.us.toml"],
            cwd=str(CFG.parent),
            capture_output=True,
            text=True,
            encoding="utf-8",
            errors="replace",
        )
        out = (proc.stdout or "") + (proc.stderr or "")
        sys.stdout.write(out)
        if proc.returncode == 0:
            return 0
        m = fail_pat.search(out)
        if not m:
            return proc.returncode
        sym = m.group(1) or m.group(2)
        print(f"[retry] attempt {attempt + 1}: ignoring {sym}", file=sys.stderr)
        r2 = subprocess.run([sys.executable, str(APPEND), sym], cwd=str(ROOT))
        if r2.returncode != 0:
            return r2.returncode
    print("max attempts", file=sys.stderr)
    return 1


if __name__ == "__main__":
    raise SystemExit(main())

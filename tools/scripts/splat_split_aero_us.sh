#!/usr/bin/env bash
# Run from repo root inside WSL. Delegates to sync_aero_us_assets.sh (splat + IPL3).
set -euo pipefail
SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"
exec bash "$SCRIPT_DIR/sync_aero_us_assets.sh" "$@"

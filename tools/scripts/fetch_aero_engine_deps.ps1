# Clone third-party trees used when -DAERO_WITH_ENGINE=ON (RT64, RmlUi, lunasvg, N64ModernRuntime,
# concurrentqueue, ares). Kirby64Recomp layout reference: Docs/RepoInjests/Kirby64/... CMakeLists.txt.
# Run from repo root: pwsh tools/scripts/fetch_aero_engine_deps.ps1
# Then: git -C lib/rt64 submodule update --init --recursive

$ErrorActionPreference = "Stop"
$root = Split-Path (Split-Path $PSScriptRoot)
$lib = Join-Path $root "lib"

$repos = @(
  @{ name = "rt64"; url = "https://github.com/rt64/rt64.git" },
  @{ name = "lunasvg"; url = "https://github.com/sammycage/lunasvg.git" },
  @{ name = "RmlUi"; url = "https://github.com/mikke89/RmlUi.git" },
  @{ name = "N64ModernRuntime"; url = "https://github.com/N64Recomp/N64ModernRuntime.git" },
  @{ name = "concurrentqueue"; url = "https://github.com/cameron314/concurrentqueue.git" },
  @{ name = "ares"; url = "https://github.com/ares-emulator/ares.git" }
)

foreach ($r in $repos) {
  $dest = Join-Path $lib $r.name
  if (Test-Path $dest) {
    Write-Host "OK exists: $($r.name)"
    continue
  }
  Write-Host "Cloning $($r.name) …"
  git clone --depth 1 $r.url $dest
}

$rt64 = Join-Path $lib "rt64"
if (Test-Path $rt64) {
  Write-Host "Updating rt64 submodules (dxc, plume, …) …"
  git -C $rt64 submodule update --init --recursive
}

$n64 = Join-Path $lib "N64ModernRuntime"
if (Test-Path $n64) {
  Write-Host "Updating N64ModernRuntime submodules …"
  git -C $n64 submodule update --init --recursive

  $bootPatch = Join-Path $root "tools/patches/aero_librecomp_game_entry_boot.patch"
  if (Test-Path $bootPatch) {
    git -C $n64 apply --reverse --check $bootPatch 2>$null
    if ($LASTEXITCODE -eq 0) {
      Write-Host "OK: Aero librecomp cold-boot patch already applied (N64ModernRuntime)."
    }
    else {
      git -C $n64 apply --check $bootPatch 2>$null
      if ($LASTEXITCODE -ne 0) {
        throw "aero_librecomp_game_entry_boot.patch does not apply to lib/N64ModernRuntime. Update the patch or pin N64ModernRuntime (see lib/README.txt, Docs/Debugging.md)."
      }
      git -C $n64 apply $bootPatch
      Write-Host "Applied tools/patches/aero_librecomp_game_entry_boot.patch to N64ModernRuntime."
    }
  }
  else {
    Write-Host "Warning: missing $bootPatch — skip cold-boot patch (see lib/README.txt)."
  }
}

$luna = Join-Path $lib "lunasvg"
if (Test-Path $luna) {
  Write-Host "Updating lunasvg/plutovg submodule …"
  git -C $luna submodule update --init --recursive
}

Write-Host "Done. Configure with: cmake -S . -B out/build/msvc -G `"Visual Studio 17 2022`" -A x64 -DAERO_WITH_ENGINE=ON"

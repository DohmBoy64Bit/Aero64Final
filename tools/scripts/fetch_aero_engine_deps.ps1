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
}

$luna = Join-Path $lib "lunasvg"
if (Test-Path $luna) {
  Write-Host "Updating lunasvg/plutovg submodule …"
  git -C $luna submodule update --init --recursive
}

Write-Host "Done. Configure with: cmake -S . -B out/build/msvc -G `"Visual Studio 17 2022`" -A x64 -DAERO_WITH_ENGINE=ON"

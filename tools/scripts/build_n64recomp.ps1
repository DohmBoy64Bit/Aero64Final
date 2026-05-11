# Rebuild N64Recomp + RSPRecomp from vendor tree. Commands follow upstream README:
#   tools/source/N64Recomp/README.md -> Building (CMake 3.20+, C++20, submodules).
$ErrorActionPreference = "Stop"
$Root = Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$Src = Join-Path $Root "tools\source\N64Recomp"
$Build = Join-Path $Src "build-msvc"
if (-not (Test-Path $Src)) {
  Write-Error "Missing $Src - clone https://github.com/N64Recomp/N64Recomp.git into tools\source\N64Recomp"
}
Set-Location $Src
if (-not (Test-Path (Join-Path $Src "lib\fmt\CMakeLists.txt"))) {
  git submodule update --init --recursive
}
cmake -S $Src -B $Build -G "Visual Studio 17 2022" -A x64
cmake --build $Build --config Release --target N64RecompCLI
cmake --build $Build --config Release --target RSPRecomp
Copy-Item -Force (Join-Path $Build "Release\N64Recomp.exe") (Join-Path $Root "tools\N64Recomp.exe")
Copy-Item -Force (Join-Path $Build "Release\RSPRecomp.exe") (Join-Path $Root "tools\RSPRecomp.exe")
Set-Location $Root
git -C $Src rev-parse HEAD | Set-Content (Join-Path $Root "tools\LAST_BUILD_COMMIT.txt")
Write-Host 'Installed tools\N64Recomp.exe and tools\RSPRecomp.exe; wrote tools\LAST_BUILD_COMMIT.txt'

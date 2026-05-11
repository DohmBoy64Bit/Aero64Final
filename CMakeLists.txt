cmake_minimum_required(VERSION 3.20)

if(APPLE)
  set(CMAKE_OSX_DEPLOYMENT_TARGET "11.0" CACHE STRING "Minimum OS X deployment version")
endif()

project(Aero64Recompiled LANGUAGES C CXX)

set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Zelda64Recomp Banjo/Zelda pattern: avoids MSVC constexpr mutex ctor / vcredist friction (see injest
# Docs/RepoInjests/Zelda64/zelda64recomp-zelda64recomp-8a5edab282632443.txt, FILE: CMakeLists.txt).
if(WIN32)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_DISABLE_CONSTEXPR_MUTEX_CONSTRUCTOR")
endif()

if(CMAKE_VERSION VERSION_GREATER_EQUAL "3.24.0")
  cmake_policy(SET CMP0135 NEW)
endif()

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/config/cmake")
include(AeroStrictDebug)
aero_export_compile_commands_default()

# Bootstrap executable only — link engine (e.g. lib/Zelda64Recomp) once submodule is added.
add_executable(Aero64Recompiled
  src/main/main.cpp
)
target_include_directories(Aero64Recompiled PRIVATE
  "${CMAKE_SOURCE_DIR}/include"
)
aero_apply_strict_host_debug(Aero64Recompiled)

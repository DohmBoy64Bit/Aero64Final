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
include(AeroSDL2)
include(AeroEngine)
aero_export_compile_commands_default()

if(EXISTS "${CMAKE_SOURCE_DIR}/lib/rt64/CMakeLists.txt"
    AND EXISTS "${CMAKE_SOURCE_DIR}/lib/RmlUi/CMakeLists.txt"
    AND EXISTS "${CMAKE_SOURCE_DIR}/lib/lunasvg/CMakeLists.txt"
    AND EXISTS "${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime/CMakeLists.txt"
    AND EXISTS "${CMAKE_SOURCE_DIR}/lib/concurrentqueue")
  set(AERO_ENGINE_DEFAULT ON)
else()
  set(AERO_ENGINE_DEFAULT OFF)
endif()

option(AERO_WITH_ENGINE
  "Link RT64, RmlUi, lunasvg, FreeType (bundled fetch), N64ModernRuntime, concurrentqueue. Requires lib/* (run tools/scripts/fetch_aero_engine_deps.ps1)."
  ${AERO_ENGINE_DEFAULT})

if(AERO_WITH_ENGINE)
  aero_add_engine_subprojects()
endif()

# RecompiledFuncs — Banjo pattern (Docs/RepoInjests/BanjoKazooie/banjorecomp-banjorecomp-8a5edab282632443.txt).
add_library(RecompiledFuncs STATIC)
file(GLOB AERO_FUNC_C_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/RecompiledFuncs/*.c")
file(GLOB AERO_FUNC_CXX_SOURCES CONFIGURE_DEPENDS "${CMAKE_SOURCE_DIR}/RecompiledFuncs/*.cpp")
target_sources(RecompiledFuncs PRIVATE ${AERO_FUNC_C_SOURCES} ${AERO_FUNC_CXX_SOURCES})
if(MSVC)
  target_compile_options(RecompiledFuncs PRIVATE /wd4100 /wd4189)
else()
  target_compile_options(RecompiledFuncs PRIVATE -fno-strict-aliasing -Wno-unused-variable)
endif()

target_include_directories(RecompiledFuncs PRIVATE
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/RecompiledFuncs"
)

if(AERO_WITH_ENGINE)
  target_include_directories(RecompiledFuncs PRIVATE
    "${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime/ultramodern/include"
    "${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime/librecomp/include"
    "${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime/N64Recomp/include"
  )
else()
  target_include_directories(RecompiledFuncs PRIVATE
    "${CMAKE_SOURCE_DIR}/tools/source/N64Recomp/include"
  )
endif()

add_executable(Aero64Recompiled
  src/main/main.cpp
  src/host/recomp_runtime_stubs.cpp
)

if(AERO_WITH_ENGINE)
  target_sources(Aero64Recompiled PRIVATE
    src/host/aero_engine_launcher.cpp
    src/host/aero_gfx_diag.cpp
    src/host/aero_register_overlays.cpp
    src/host/aero_rt64_render_context.cpp
    src/host/aero_recomp_callbacks.cpp
    src/host/aero_recomp_host.cpp
  )
endif()

if(AERO_WITH_ENGINE)
  target_compile_definitions(Aero64Recompiled PRIVATE AERO_LINK_LIBRECOMP=1)
endif()

target_include_directories(Aero64Recompiled PRIVATE
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/RecompiledFuncs"
)

if(AERO_WITH_ENGINE)
  target_include_directories(Aero64Recompiled PRIVATE
    "${CMAKE_SOURCE_DIR}/include"
    "${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime/N64Recomp/include"
    "${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime/thirdparty"
  )
else()
  target_include_directories(Aero64Recompiled PRIVATE
    "${CMAKE_SOURCE_DIR}/tools/source/N64Recomp/include"
  )
endif()

target_link_libraries(Aero64Recompiled PRIVATE RecompiledFuncs)
aero_target_link_sdl2(Aero64Recompiled)

if(AERO_WITH_ENGINE)
  aero_target_link_engine(Aero64Recompiled)
endif()

aero_apply_strict_host_debug(Aero64Recompiled)

# CMake + Visual Studio: ALL_BUILD is not runnable. Pin the real executable as the startup project
# (see CMake property VS_STARTUP_PROJECT — https://cmake.org/cmake/help/latest/prop_dir/VS_STARTUP_PROJECT.html).
if(CMAKE_GENERATOR MATCHES "Visual Studio")
	set_property(DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}" PROPERTY VS_STARTUP_PROJECT Aero64Recompiled)
endif()

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
  "${CMAKE_SOURCE_DIR}/tools/source/N64Recomp/include"
  "${CMAKE_SOURCE_DIR}/RecompiledFuncs"
)

add_executable(Aero64Recompiled
  src/main/main.cpp
)
target_include_directories(Aero64Recompiled PRIVATE
  "${CMAKE_SOURCE_DIR}/include"
  "${CMAKE_SOURCE_DIR}/tools/source/N64Recomp/include"
  "${CMAKE_SOURCE_DIR}/RecompiledFuncs"
)
target_link_libraries(Aero64Recompiled PRIVATE RecompiledFuncs)
aero_apply_strict_host_debug(Aero64Recompiled)

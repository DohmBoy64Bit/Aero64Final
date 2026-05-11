# RT64 + RmlUi + lunasvg + FreeType + N64ModernRuntime + concurrentqueue (Kirby64Recomp layout).
# Evidence: Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt (add_subdirectory rt64, lunasvg,
#   RmlUi, N64ModernRuntime; Kirby links legacy RmlCore/RmlDebugger — vendored RmlUi 6.x uses rmlui_core/rmlui_debugger).
#
# lib/ares — reference-only (RSP / vector semantics for RSPRecomp); do not add_subdirectory the full emulator.

include(FetchContent)

if(POLICY CMP0169)
  cmake_policy(SET CMP0169 OLD)
endif()

# SDL2_image (RmlUi Backends/RmlUi_Backend_SDL_GL3.cpp includes SDL_image.h; see lib/RmlUi/Backends/CMakeLists.txt rmlui_backend_SDL_GL3).
function(aero_engine_add_sdl2_image target_name)
  if(WIN32)
    if(DEFINED ENV{SDL2_IMAGE_VERSION})
      set(_img_ver "$ENV{SDL2_IMAGE_VERSION}")
    else()
      set(_img_ver "2.8.2")
    endif()
    FetchContent_Declare(
      aero_sdl2_image_vc
      URL "https://github.com/libsdl-org/SDL_image/releases/download/release-${_img_ver}/SDL2_image-devel-${_img_ver}-VC.zip"
      DOWNLOAD_EXTRACT_TIMESTAMP TRUE
    )
    FetchContent_GetProperties(aero_sdl2_image_vc)
    if(NOT aero_sdl2_image_vc_POPULATED)
      message(STATUS "Fetching SDL2_image ${_img_ver} (VC development library)…")
      FetchContent_Populate(aero_sdl2_image_vc)
    endif()
    set(_img_root "${aero_sdl2_image_vc_SOURCE_DIR}")
    if(NOT EXISTS "${_img_root}/include/SDL_image.h")
      file(GLOB _img_headers "${_img_root}/*/include/SDL_image.h")
      if(_img_headers)
        list(GET _img_headers 0 _one)
        get_filename_component(_inc "${_one}" DIRECTORY)
        get_filename_component(_img_root "${_inc}" DIRECTORY)
      endif()
    endif()
    if(NOT EXISTS "${_img_root}/include/SDL_image.h")
      message(FATAL_ERROR "SDL2_image: include/SDL_image.h not found under ${aero_sdl2_image_vc_SOURCE_DIR}")
    endif()
    set(AERO_SDL2_IMAGE_ROOT "${_img_root}" CACHE INTERNAL "Fetched SDL2_image VC prefix")
    target_include_directories(${target_name} PRIVATE "${AERO_SDL2_IMAGE_ROOT}/include")
    target_link_directories(${target_name} PRIVATE "${AERO_SDL2_IMAGE_ROOT}/lib/x64")
    target_link_libraries(${target_name} PRIVATE SDL2_image)
    add_custom_command(
      TARGET ${target_name}
      POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${AERO_SDL2_IMAGE_ROOT}/lib/x64/SDL2_image.dll"
        $<TARGET_FILE_DIR:${target_name}>
      COMMENT "Copy SDL2_image.dll next to ${target_name}"
    )
  else()
    find_package(SDL2_image QUIET)
    if(TARGET SDL2_image::SDL2_image)
      target_link_libraries(${target_name} PRIVATE SDL2_image::SDL2_image)
    elseif(SDL2_image_FOUND)
      target_include_directories(${target_name} PRIVATE ${SDL2_IMAGE_INCLUDE_DIRS})
      target_link_libraries(${target_name} PRIVATE ${SDL2_IMAGE_LIBRARIES})
    else()
      message(FATAL_ERROR "SDL2_image required for RmlUi SDL+GL3 backend; install libsdl2-image-dev (or set SDL2_image_DIR).")
    endif()
  endif()
endfunction()

function(aero_engine_add_freetype)
  if(TARGET Freetype::Freetype)
    return()
  endif()
  find_package(Freetype QUIET)
  if(TARGET Freetype::Freetype)
    return()
  endif()

  message(STATUS "Aero: fetching FreeType (minimal static build) for RmlUi…")
  FetchContent_Declare(
    freetype_bundled
    GIT_REPOSITORY https://gitlab.freedesktop.org/freetype/freetype.git
    GIT_TAG VER-2-13-3
    GIT_SHALLOW TRUE
  )
  set(FT_DISABLE_ZLIB ON CACHE BOOL "" FORCE)
  set(FT_DISABLE_BZIP2 ON CACHE BOOL "" FORCE)
  set(FT_DISABLE_PNG ON CACHE BOOL "" FORCE)
  set(FT_DISABLE_HARFBUZZ ON CACHE BOOL "" FORCE)
  FetchContent_MakeAvailable(freetype_bundled)

  if(TARGET Freetype::Freetype)
    return()
  endif()
  if(TARGET freetype)
    add_library(Freetype::Freetype ALIAS freetype)
  elseif(TARGET freetype2)
    add_library(Freetype::Freetype ALIAS freetype2)
  else()
    message(FATAL_ERROR "FreeType FetchContent did not expose a freetype target; inspect freetype CMakeLists.")
  endif()
endfunction()

function(aero_add_engine_subprojects)
  set(RT64_STATIC ON CACHE BOOL "RT64 static lib" FORCE)
  option(RT64_SDL_WINDOW_VULKAN "RT64 SDL+vulkan window (non-Windows)" ON)

  # Kirby64Recomp keeps static libs for RmlUi/lunasvg/rt64 (same injest CMakeLists.txt).
  set(BUILD_SHARED_LIBS OFF CACHE BOOL "" FORCE)

  aero_engine_add_freetype()
  set(LUNASVG_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
  add_subdirectory("${CMAKE_SOURCE_DIR}/lib/lunasvg" "${CMAKE_BINARY_DIR}/third_party/lunasvg")

  set(ENABLE_SVG_PLUGIN ON CACHE BOOL "" FORCE)
  set(RMLUI_TESTS_ENABLED OFF CACHE BOOL "" FORCE)
  set(RMLUI_FONT_ENGINE "freetype" CACHE STRING "" FORCE)
  set(RMLUI_SVG_PLUGIN ON CACHE BOOL "" FORCE)
  add_subdirectory("${CMAKE_SOURCE_DIR}/lib/RmlUi" "${CMAKE_BINARY_DIR}/third_party/RmlUi")

  add_subdirectory("${CMAKE_SOURCE_DIR}/lib/rt64" "${CMAKE_BINARY_DIR}/third_party/rt64")

  add_subdirectory("${CMAKE_SOURCE_DIR}/lib/N64ModernRuntime" "${CMAKE_BINARY_DIR}/third_party/N64ModernRuntime")
endfunction()

function(aero_target_link_engine exe_target)
  # Launcher font (OFL): DejaVu Sans — downloaded once into the build tree; copied next to the exe at build time.
  set(_aero_font "${CMAKE_BINARY_DIR}/aero_engine_assets/DejaVuSans.ttf")
  if(NOT EXISTS "${_aero_font}")
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/aero_engine_assets")
    message(STATUS "Aero: downloading DejaVuSans.ttf (DejaVu fonts, OFL) for RmlUi…")
    file(DOWNLOAD
      "https://github.com/dejavu-fonts/dejavu-fonts/raw/version_2_37/ttf/DejaVuSans.ttf"
      "${_aero_font}"
      TLS_VERIFY ON
      SHOW_PROGRESS
    )
  endif()

  aero_engine_add_sdl2_image(${exe_target})

  # RmlUi SDL backend (lib/RmlUi/Backends/RmlUi_Platform_SDL.h) requires SDL major/minor defines.
  if(DEFINED ENV{SDL2_VERSION})
    string(REGEX MATCH "^([0-9]+)\\.([0-9]+)" _m "$ENV{SDL2_VERSION}")
    set(_sdl_maj "${CMAKE_MATCH_1}")
    set(_sdl_min "${CMAKE_MATCH_2}")
  else()
    set(_sdl_maj "2")
    set(_sdl_min "30")
  endif()
  target_compile_definitions(${exe_target} PRIVATE
    HLSL_CPU
    FFX_GCC
    IMGUI_IMPL_VULKAN_NO_PROTOTYPES
    "RMLUI_SDL_VERSION_MAJOR=${_sdl_maj}"
    "RMLUI_SDL_VERSION_MINOR=${_sdl_min}"
  )
  if(WIN32)
    target_compile_definitions(${exe_target} PRIVATE NOMINMAX)
  endif()
  if(CMAKE_SYSTEM_NAME MATCHES "Linux" AND RT64_SDL_WINDOW_VULKAN)
    target_compile_definitions(${exe_target} PRIVATE RT64_SDL_WINDOW_VULKAN)
  endif()

  target_include_directories(${exe_target} PRIVATE
    "${CMAKE_SOURCE_DIR}/lib/concurrentqueue"
    "${CMAKE_SOURCE_DIR}/lib/RmlUi/Include"
    "${CMAKE_SOURCE_DIR}/lib/RmlUi/Backends"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src/contrib"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src/contrib/hlslpp/include"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src/contrib/dxc/inc"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src/rhi"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src/render"
    "${CMAKE_SOURCE_DIR}/lib/rt64/src/contrib/nativefiledialog-extended/src/include"
    "${CMAKE_SOURCE_DIR}/lib/ares"
  )

  # RmlUi sample flow: lib/RmlUi/Samples/basic/load_document/src/main.cpp + Backends/RmlUi_Backend_SDL_GL3.cpp
  # (OpenGL 3.3 + SDL2; RenderInterface_GL3_SDL uses SDL_image for non-TGA textures per that file).
  target_sources(${exe_target} PRIVATE
    "${CMAKE_SOURCE_DIR}/lib/RmlUi/Backends/RmlUi_Platform_SDL.cpp"
    "${CMAKE_SOURCE_DIR}/lib/RmlUi/Backends/RmlUi_Renderer_GL3.cpp"
    "${CMAKE_SOURCE_DIR}/lib/RmlUi/Backends/RmlUi_Backend_SDL_GL3.cpp"
  )

  if(MSVC)
    target_link_options(${exe_target} PRIVATE /OPT:NOICF)
  endif()

  # RmlUi 6.x CMake targets are rmlui_core / rmlui_debugger (see lib/RmlUi/Source/Core/CMakeLists.txt,
  # lib/RmlUi/Source/Debugger/CMakeLists.txt). Older docs/samples used RmlCore / RmlDebugger names.
  target_link_libraries(${exe_target} PRIVATE
    SDL2
    rt64
    rmlui_core
    rmlui_debugger
    nfd
    lunasvg
    ultramodern
    librecomp
  )

  add_custom_command(
    TARGET ${exe_target}
    POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_if_different
      "${_aero_font}"
      $<TARGET_FILE_DIR:${exe_target}>
    COMMENT "Copy DejaVuSans.ttf next to ${exe_target}"
  )

  if(WIN32)
    target_link_libraries(${exe_target} PRIVATE opengl32)
    add_custom_command(
      TARGET ${exe_target}
      POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_SOURCE_DIR}/lib/rt64/src/contrib/dxc/bin/x64/dxil.dll"
        "${CMAKE_SOURCE_DIR}/lib/rt64/src/contrib/dxc/bin/x64/dxcompiler.dll"
        $<TARGET_FILE_DIR:${exe_target}>
      COMMENT "Copy RT64 DXC runtime DLLs next to ${exe_target}"
    )
  elseif(APPLE)
    find_library(_aero_opengl OpenGL REQUIRED)
    target_link_libraries(${exe_target} PRIVATE "${_aero_opengl}")
  else()
    find_package(OpenGL REQUIRED)
    target_link_libraries(${exe_target} PRIVATE OpenGL::GL)
    target_link_libraries(${exe_target} PRIVATE ${CMAKE_DL_LIBS})
  endif()
endfunction()

# SDL2 for Aero64Recompiled — Kirby64Recomp pattern (Windows FetchContent VC dev zip).
# Evidence: Docs/RepoInjests/Kirby64/kirby64ret-kirby64recomp-8a5edab282632443.txt (FetchContent sdl2,
#   include ${sdl2_SOURCE_DIR}/include, link lib/x64, POST_BUILD copy SDL2.dll).

if(POLICY CMP0169)
  cmake_policy(SET CMP0169 OLD)
endif()

function(aero_target_link_sdl2 target_name)
  if(WIN32)
    include(FetchContent)
    if(DEFINED ENV{SDL2_VERSION})
      set(_aero_sdl2_ver "$ENV{SDL2_VERSION}")
    else()
      set(_aero_sdl2_ver "2.30.11")
    endif()

    FetchContent_Declare(
      aero_sdl2_vc
      URL "https://github.com/libsdl-org/SDL/releases/download/release-${_aero_sdl2_ver}/SDL2-devel-${_aero_sdl2_ver}-VC.zip"
      DOWNLOAD_EXTRACT_TIMESTAMP TRUE
    )
    FetchContent_GetProperties(aero_sdl2_vc)
    if(NOT aero_sdl2_vc_POPULATED)
      message(STATUS "Fetching SDL2 ${_aero_sdl2_ver} (VC development library)...")
      FetchContent_Populate(aero_sdl2_vc)
    endif()

    set(_sdl_root "${aero_sdl2_vc_SOURCE_DIR}")
    if(NOT EXISTS "${_sdl_root}/include/SDL.h")
      file(GLOB _sdl_headers "${_sdl_root}/*/include/SDL.h")
      if(_sdl_headers)
        list(GET _sdl_headers 0 _one)
        get_filename_component(_inc "${_one}" DIRECTORY)
        get_filename_component(_sdl_root "${_inc}" DIRECTORY)
      endif()
    endif()
    if(NOT EXISTS "${_sdl_root}/include/SDL.h")
      message(FATAL_ERROR "SDL2: include/SDL.h not found under ${aero_sdl2_vc_SOURCE_DIR}")
    endif()

    set(AERO_SDL2_ROOT "${_sdl_root}" CACHE INTERNAL "Fetched SDL2 VC prefix")

    target_include_directories(${target_name} PRIVATE "${AERO_SDL2_ROOT}/include")
    target_link_directories(${target_name} PRIVATE "${AERO_SDL2_ROOT}/lib/x64")
    target_link_libraries(${target_name} PRIVATE SDL2)

    add_custom_command(
      TARGET ${target_name}
      POST_BUILD
      COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${AERO_SDL2_ROOT}/lib/x64/SDL2.dll"
        $<TARGET_FILE_DIR:${target_name}>
      COMMENT "Copy SDL2.dll next to ${target_name}"
    )
  elseif(APPLE)
    find_package(SDL2 REQUIRED)
    target_link_libraries(${target_name} PRIVATE SDL2::SDL2)
  else()
    find_package(SDL2 REQUIRED)
    if(TARGET SDL2::SDL2)
      target_link_libraries(${target_name} PRIVATE SDL2::SDL2)
    else()
      target_include_directories(${target_name} PRIVATE ${SDL2_INCLUDE_DIRS})
      target_link_libraries(${target_name} PRIVATE ${SDL2_LIBRARIES})
    endif()
  endif()
endfunction()

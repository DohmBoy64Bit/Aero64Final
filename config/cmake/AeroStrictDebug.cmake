# Strict host-side debug defaults for the native wrapper (MSVC / VS).
# Apply to the main executable target after add_executable().
#
# Source: same patterns appear in Zelda64Recomp’s root CMakeLists.txt (packed in
# Docs/RepoInjests/Zelda64/zelda64recomp-zelda64recomp-8a5edab282632443.txt
# under the section headed "FILE: CMakeLists.txt"):
#   - LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE" so stdout/stderr and recomp_printf-style
#     logging attach to a console when debugging.
#   - VS_DEBUGGER_WORKING_DIRECTORY -> project root so relative paths (assets, roms)
#     match README “run from project root” behavior.
#
# Do not edit recomp-generated C except via patches.toml / RECOMP_PATCH workflows.

function(aero_apply_strict_host_debug target_name)
  if(NOT TARGET "${target_name}")
    message(FATAL_ERROR "aero_apply_strict_host_debug: no target '${target_name}'")
  endif()

  set_property(TARGET "${target_name}" PROPERTY VS_DEBUGGER_WORKING_DIRECTORY "${CMAKE_SOURCE_DIR}")

  if(MSVC)
    set_target_properties(
      "${target_name}"
      PROPERTIES
        LINK_FLAGS_DEBUG "/SUBSYSTEM:CONSOLE"
        LINK_FLAGS_RELEASE "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
        LINK_FLAGS_RELWITHDEBINFO "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
        LINK_FLAGS_MINSIZEREL "/SUBSYSTEM:WINDOWS /ENTRY:mainCRTStartup"
    )
  endif()
endfunction()

# Call once at top-level after project() if you want clangd/static analysis.
macro(aero_export_compile_commands_default)
  set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
endmacro()

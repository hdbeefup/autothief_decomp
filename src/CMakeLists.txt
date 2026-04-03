cmake_minimum_required(VERSION 3.15)
project(AutoThief C CXX)

# Target MSVC - the original was compiled with Visual C++
# Use /W3 for warnings, disable some noisy ones from decompiled code
if(MSVC)
    add_compile_options(/W3 /wd4996 /wd4244 /wd4018 /wd4146)
    # Match original binary: 32-bit x86
    # Build with: cmake -A Win32 ..
endif()

# Build type
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif()

# Include paths
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/autothief
)

# =============================================================================
# Stub library - all unimplemented functions
# =============================================================================
add_library(autothief_stubs STATIC
    stubs/stub_functions.cpp
)
target_compile_definitions(autothief_stubs PRIVATE STUB_LOGGING)

# =============================================================================
# Real implementation modules
# =============================================================================

# Logger
add_library(mod_logger STATIC
    autothief/logger.c
)

# PAK I/O module
add_library(mod_pak_io STATIC
    autothief/pak_io.c
)
target_link_libraries(mod_pak_io mod_logger)

# =============================================================================
# Main executable (uncomment when ready)
# =============================================================================
# add_executable(AutoThief WIN32
#     autothief/main.cpp
# )
# target_link_libraries(AutoThief
#     autothief_stubs
#     mod_pak_io
#     mod_logger
#     winmm.lib
#     # d3d8.lib       # DirectX 8 SDK
#     # dsound.lib     # DirectSound
#     # vfw32.lib      # Video for Windows
# )

# =============================================================================
# Tests
# =============================================================================

# Stub link test
add_executable(stub_test
    stubs/stub_test.cpp
)
target_link_libraries(stub_test autothief_stubs)
target_compile_definitions(stub_test PRIVATE STUB_LOGGING)

# PAK module test
add_executable(pak_test
    autothief/pak_test.c
)
target_link_libraries(pak_test mod_pak_io mod_logger)

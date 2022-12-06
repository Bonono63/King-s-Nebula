cmake_minimum_required(VERSION 3.0)
project(KingsNebula)

set(OpenCL_LIBRARY "/c/Users/Aquamarine/vcpkg/packages/opencl_x86-windows/lib")
set(OpenCL_INCLUDE_DIR /c/Users/Aquamarine/Documents/Kings_Nebula/include/CL)
#set(INCLUDE_DIR "/c/Users/Aquamarine/Documents/Kings_Nebula/include/CL")

set(source "../src/main.cpp")

add_executable(KingsNebula ${source})

include_directories("/c/Users/Aquamarine/Documents/Kings_Nebula/include")

#find_package(OpenCL REQUIRED)
target_link_libraries(KingsNebula /c/Users/Aquamarine/vcpkg/packages/opencl_x86-windows/lib/OpenCL.lib)
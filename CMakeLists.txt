cmake_minimum_required(VERSION 3.10)
project(dsa)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find all .cpp files and create a separate executable for each
file(GLOB CPP_SOURCES "*.cpp")

foreach(source ${CPP_SOURCES})
    # Get filename without extension (e.g. binary_search.cpp -> binary_search)
    get_filename_component(target_name ${source} NAME_WE)
    add_executable(${target_name} ${source})
    target_compile_options(${target_name} PRIVATE -Wall -Wextra)
endforeach()

cmake_minimum_required (VERSION 2.6)

project (example1)

add_definitions(-DCPP_PRINT)
include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions/include")
add_subdirectory (MathFunctions)

add_executable(example1 example1.cpp)
target_link_libraries (example1 MathFunctions)

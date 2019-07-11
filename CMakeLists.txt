cmake_minimum_required(VERSION 3.6)

project(ti-pybind)

find_package(pybind11)
message(STATUS "Found pybind11: ${pybind11_VERSION}")

add_compile_options(-std=c++17)
add_compile_options(-Wall -Wfatal-errors -Werror)

include_directories(include)
add_subdirectory(src/cpp)
add_subdirectory(src/python)

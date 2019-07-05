cmake_minimum_required(VERSION 2.8.13)
project(sample_c_lib)

set(PYBIND11_PYTHON_VERSION 3.5 CACHE STRING "")
if (NOT TARGET pybind11)
    find_package(pybind11 REQUIRED)
endif ()
set(PYBIND11_CPP_STANDARD -std=c++11)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-O3 -Wno-unused-result -Wno-logical-op-parentheses -fext-numeric-literals")

set(SOURCE_FILES mapping.cpp mapping.h)

set(PYTHON_EXECUTABLE /usr/bin/python3)

find_package(Eigen3 REQUIRED)
include_directories(include ${EIGEN3_INCLUDE_DIRS})


pybind11_add_module(sample_c SHARED THIN_LTO pybinding.cpp ${SOURCE_FILES})

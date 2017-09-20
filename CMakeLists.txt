# Project settings and a hierechy setup
cmake_minimum_required(VERSION 3.4)

project(DeqMath)
set(CMAKE_BUILD_TYPE Release)

# Setup our include directories
include_directories(./src)

# Add subdirs
add_subdirectory(src)
add_subdirectory(bin)

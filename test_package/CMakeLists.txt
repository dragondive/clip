cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
project(PackageTest CXX)

find_package(clip CONFIG REQUIRED)



add_executable(example src/example.cpp)
target_link_libraries(example clip::clip)

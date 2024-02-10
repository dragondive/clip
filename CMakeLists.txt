cmake_minimum_required(VERSION 3.15)
project(clip CXX)




add_library(clip src/clip.cpp)
target_include_directories(clip PUBLIC include)



set_target_properties(clip PROPERTIES PUBLIC_HEADER "include/clip.h")
install(TARGETS clip)

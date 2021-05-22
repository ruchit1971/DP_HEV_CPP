cmake_minimum_required(VERSION 3.19)
project(DP_HEV_CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(DP_HEV_CPP main.cpp City_MAN.h City_MAN.cpp)

include_directories("/City_MAN_DDP")
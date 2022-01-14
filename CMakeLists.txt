cmake_minimum_required(VERSION 3.20)

project(UTCLI-CPP)

set(CMAKE_CXX_STANDARD 17)

file(GLOB SOURCES src/*.cpp)

add_executable(utcli ${SOURCES})


set_property(TARGET utcli PROPERTY CXX_STANDARD 17)

target_include_directories(utcli PUBLIC src)

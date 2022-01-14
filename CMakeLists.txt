cmake_minimum_required(VERSION 3.20)

project(OTCLI-CPP)

file(GLOB SOURCES src/*.cpp)

add_executable(otcli ${SOURCES})

set_property(TARGET otcli PROPERTY CXX_STANDARD 17)

target_include_directories(otcli PUBLIC src)

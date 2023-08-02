cmake_minimum_required(VERSION 3.25.1)
project(shrandom)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_COMPILER /usr/bin/gcc)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fstack-protector-strong -O3")

add_executable(shrandom main.c)

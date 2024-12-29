# Version
cmake_minimum_required(VERSION 3.10.0)

# Project & Executable Name
project(ProjCpp)

# Files other than main.cpp
set(SOURCES_CPP src/misc.cpp)
set(HEADERS_H src/misc.h)

# Add main.cpp to executable
add_executable(${PROJECT_NAME} main.cpp ${HEADERS_H} ${SOURCES_CPP})

# Access for #include
target_include_directories(${PROJECT_NAME} PUBLIC src/)
cmake_minimum_required(VERSION 3.10.0)

project(ProjCpp)

set(SOURCES_CPP src/misc.cpp)
set(HEADERS_H src/misc.h)

add_executable(${PROJECT_NAME} main.cpp ${HEADERS_H} ${SOURCES_CPP})
target_include_directories(${PROJECT_NAME} PUBLIC src/)
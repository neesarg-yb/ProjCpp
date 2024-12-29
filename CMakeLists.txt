cmake_minimum_required(VERSION 3.10.0)

project(ProjCpp)

set(SOURCES_CPP misc.cpp)
set(HEADERS_H misc.h)

add_executable(${PROJECT_NAME} main.cpp ${HEADERS_H} ${SOURCES_CPP})

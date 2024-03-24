cmake_minimum_required(VERSION 3.22.1)

set(project "Card")
project(${project})

set(CMAKE_CXX_STANDARD 17)

set(${project}_SOURCES
        Card.cpp)
        
set(${project}_HEADERS
        Card.h)

set(${project}_SOURCE_LIST
        ${${project}_SOURCES}
        ${${project}_HEADERS})

add_executable(${project}
        ${${project}_SOURCE_LIST})

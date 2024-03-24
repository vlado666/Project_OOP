cmake_minimum_required(VERSION 3.22.1)

    set(project "BlackJack")
    project(${project})

    set(CMAKE_CXX_STANDARD 17)

    set(${project}_SOURCES
            main.cpp)

    set(${project}_SOURCE_LIST
            ${${project}_SOURCES})

    add_executable(${project}
            ${${project}_SOURCE_LIST})
cmake_minimum_required(VERSION 3.19)
project(OOP_wirtualne_zoo)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OOP_wirtualne_zoo
        Donkey.cpp
        Donkey.h
        Elephant.cpp
        Elephant.h
        GameManager.cpp
        GameManager.h
        Human.cpp
        Human.h
        Monkey.cpp
        Monkey.h
        Player.cpp
        Player.h
        "Virtualne ZOO.cpp")

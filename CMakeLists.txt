cmake_minimum_required(VERSION 3.27)
project(Tic_tac_toe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Tic_tac_toe
        board.cpp
        board.h
        cpu.cpp
        cpu.h
        game.cpp
        game.h
        human.cpp
        human.h
        main.cpp
        player.cpp
        player.h)

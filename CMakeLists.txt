cmake_minimum_required(VERSION 3.23)
project(Chess C)

set(CMAKE_C_STANDARD 23)

add_executable(Chess main.c Piece.c Piece.h Board.c Board.h includer.h)

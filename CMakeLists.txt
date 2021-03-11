cmake_minimum_required(VERSION 3.17)
project(ExerciciosPPP C)

set(CMAKE_C_STANDARD 11)

add_executable(Exercicios  ../Avaliacoes/main.c ../Avaliacoes/main-aux.c)

add_compile_options(-Wall -Wextra)
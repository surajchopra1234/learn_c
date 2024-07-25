cmake_minimum_required(VERSION 3.28)
project(learn_c C)

set(CMAKE_C_STANDARD 23)

add_executable(learn_c main.c
        module_1.c
        module_2.c)

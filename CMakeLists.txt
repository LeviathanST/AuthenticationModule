cmake_minimum_required(VERSION 3.28)
project(AuthenticationModule C)

set(CMAKE_C_STANDARD 11)

add_executable(AuthenticationModule
        main.c
        src/authentication.c
        src/authentication.h
        src/entities.h
)

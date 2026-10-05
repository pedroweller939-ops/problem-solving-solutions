cmake_minimum_required(VERSION 3.20)
project(problem_solutions C)

set(CMAKE_C_STANDARD 11)

# Problem 2006
add_executable(beecrowd_2006
        beecrowd/2006-identifying-tea-c/main.c
)

# Problem 3048
add_executable(beecrowd_3048
        beecrowd/3048-secret-sequence-c/main.c
)
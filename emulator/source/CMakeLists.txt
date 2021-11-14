cmake_minimum_required(VERSION 3.0)
project(PaRsk)

set(CMAKE_C_STANDARD 11)

add_executable(PaRsk.out main.c "modules/controller.c" "modules/controller.c" "modules/RV32i.c" "modules/RV32i.h" "modules/ALU.h" "modules/ALU.c")

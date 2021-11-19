# CppLint REF: https://stackoverflow.com/questions/51582604/how-to-use-cpplint-code-style-checking-with-cmake
cmake_minimum_required(VERSION 3.0)
project(PaRsk)

set(CMAKE_C_STANDARD 11)
# Not sure how to make this work yet...
set(CMAKE_CXX_CPPLINT "cpplint")

add_executable(PaRsk.out main.c "modules/controller.c" "modules/controller.h" "modules/RV32i.c" "modules/RV32i.h" "modules/ALU.h" "modules/ALU.c" "modules/config.h" "modules/regfile.c")

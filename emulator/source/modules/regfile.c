// ITJ
// Created: Thur Nov 18, 2021
// Edited:  Thur Nov 18, 2021
//  REF: https://dzone.com/articles/introduction-to-the-risc-v-architecture
//
#include "modules/config.h"

static regWidth pc; // Program Counter
//
//
static const regWidth = 0; // x0 - zero
//
static regWidth ra; // x1 -  Return function ADDR
static regWidth sp; // x2 - Stack pointer
static regWidth gp; // x3 - Global data pointer
//
static regWidth tp; // x4 - Thread-local Pointer (not sure what this does at the moment)
static regWidth t0; // x5 - Temp Storage
static regWidth t1; // x6 - Temp Storage
static regWidth t2; // x7 - Temp Storage
//
static regWidth s0; // s0/fp/x8 if this not used as a frame pointer for the function-local stack then x8/fp becomes s0
static regWidth s1; // x8
static regWidth a0; // x10
static regWidth a1; // x11
static regWidth a2; // x12
static regWidth a3; // x13
static regWidth a4; // x14
static regWidth a5; // x15
static regWidth a6; // x16
static regWidth a7; // x17
//
static regWidth s2; // x18
static regWidth s3; // x19
static regWidth s4; // x20
static regWidth s5; // x21
static regWidth s6; // x22
static regWidth s7; // x23
static regWidth s8; // x24
static regWidth s9; // x25
static regWidth s10; //x26
static regWidth s11; // x27
//
static regWidth t3; // x28 Temp Storage
static regWidth t4; // x29 Temp Storage
static regWidth t5; // x30 Temp Storage
static regWidth t6; // x31 Temp Storage











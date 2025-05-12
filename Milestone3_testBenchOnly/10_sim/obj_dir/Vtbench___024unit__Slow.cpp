// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024unit.h"

void Vtbench___024unit___ctor_var_reset(Vtbench___024unit* vlSelf);

Vtbench___024unit::Vtbench___024unit(Vtbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtbench___024unit___ctor_var_reset(this);
}

void Vtbench___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtbench___024unit::~Vtbench___024unit() {
}

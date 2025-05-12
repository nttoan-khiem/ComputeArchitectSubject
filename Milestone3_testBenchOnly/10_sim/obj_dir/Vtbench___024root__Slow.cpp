// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtbench.h for the primary calling header

#include "Vtbench__pch.h"
#include "Vtbench__Syms.h"
#include "Vtbench___024root.h"

void Vtbench___024root___ctor_var_reset(Vtbench___024root* vlSelf);

Vtbench___024root::Vtbench___024root(Vtbench__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtbench___024root___ctor_var_reset(this);
}

void Vtbench___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtbench___024root::~Vtbench___024root() {
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtbench.h for the primary calling header

#ifndef VERILATED_VTBENCH___024UNIT_H_
#define VERILATED_VTBENCH___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtbench___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtbench___024unit(Vtbench__Syms* symsp, const char* v__name);
    ~Vtbench___024unit();
    VL_UNCOPYABLE(Vtbench___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard

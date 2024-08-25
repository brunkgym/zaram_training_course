// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VRISCV_SINGLECYCLE_TB__SYMS_H_
#define _VRISCV_SINGLECYCLE_TB__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vriscv_singlecycle_tb.h"

// SYMS CLASS
class Vriscv_singlecycle_tb__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vriscv_singlecycle_tb*         TOPp;
    
    // CREATORS
    Vriscv_singlecycle_tb__Syms(Vriscv_singlecycle_tb* topp, const char* namep);
    ~Vriscv_singlecycle_tb__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard

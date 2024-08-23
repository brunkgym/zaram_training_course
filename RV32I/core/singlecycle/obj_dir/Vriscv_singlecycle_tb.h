// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_SINGLECYCLE_TB_H_
#define _VRISCV_SINGLECYCLE_TB_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_singlecycle_tb__Syms;

//----------

VL_MODULE(Vriscv_singlecycle_tb) {
  public:
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ riscv_singlecycle_tb__DOT__i_clk;
    CData/*0:0*/ riscv_singlecycle_tb__DOT__i_rstn;
    IData/*31:0*/ riscv_singlecycle_tb__DOT__i;
    WData/*255:0*/ riscv_singlecycle_tb__DOT__vcd_file[8];
    IData/*31:0*/ riscv_singlecycle_tb__DOT__u_singlecycle__DOT__u_riscv_imem__DOT__imem_arr[16384];
    IData/*31:0*/ riscv_singlecycle_tb__DOT__u_singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[16384];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk;
    CData/*0:0*/ __Vclklast__TOP____VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk;
    CData/*0:0*/ __Vclklast__TOP__riscv_singlecycle_tb__DOT__i_rstn;
    CData/*0:0*/ __Vchglast__TOP__riscv_singlecycle_tb__DOT__i_clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_singlecycle_tb__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_singlecycle_tb);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vriscv_singlecycle_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vriscv_singlecycle_tb();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_singlecycle_tb__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_SINGLECYCLE_H_
#define _VRISCV_SINGLECYCLE_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_singlecycle__Syms;
class Vriscv_singlecycle_VerilatedVcd;


//----------

VL_MODULE(Vriscv_singlecycle) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rstn,0,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ singlecycle__DOT__o_pc_src;
    CData/*2:0*/ singlecycle__DOT__o_imm_src;
    CData/*3:0*/ singlecycle__DOT__o_alu_control;
    CData/*3:0*/ singlecycle__DOT__o_dmem_byte_sel;
    CData/*1:0*/ singlecycle__DOT__o_src_rd;
    IData/*31:0*/ singlecycle__DOT__o_alu_result;
    IData/*31:0*/ singlecycle__DOT__i_pc;
    IData/*31:0*/ singlecycle__DOT__o_imem;
    IData/*31:0*/ singlecycle__DOT__o_regfile_rs2_data;
    IData/*31:0*/ singlecycle__DOT__o_imm_dec;
    IData/*31:0*/ singlecycle__DOT__o_alu_mux_a;
    IData/*31:0*/ singlecycle__DOT__o_alu_mux_b;
    IData/*31:0*/ singlecycle__DOT__o_rd_data;
    IData/*31:0*/ singlecycle__DOT__u_riscv_dmem__DOT__i;
    IData/*31:0*/ singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[3];
    IData/*31:0*/ singlecycle__DOT__u_riscv_imem__DOT__imem_arr[16384];
    IData/*31:0*/ singlecycle__DOT__u_riscv_regfile__DOT__registers[32];
    IData/*31:0*/ singlecycle__DOT__src_a_mux__DOT__mux_input_arr[2];
    IData/*31:0*/ singlecycle__DOT__src_b_mux__DOT__mux_input_arr[2];
    IData/*31:0*/ singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[16384];
    IData/*31:0*/ singlecycle__DOT__result_mux__DOT__mux_input_arr[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_rstn;
    WData/*95:0*/ singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[3];
    WData/*127:0*/ singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[4];
    IData/*31:0*/ __Vchglast__TOP__singlecycle__DOT__o_rd_data;
    QData/*63:0*/ singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data;
    QData/*63:0*/ singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data;
    CData/*0:0*/ __Vtablechg1[128];
    CData/*0:0*/ __Vm_traceActivity[5];
    static CData/*2:0*/ __Vtable1_singlecycle__DOT__o_imm_src[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_singlecycle__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_singlecycle);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vriscv_singlecycle(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vriscv_singlecycle();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
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
    static void _eval_initial_loop(Vriscv_singlecycle__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_singlecycle__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_singlecycle__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vriscv_singlecycle__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__6(Vriscv_singlecycle__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vriscv_singlecycle__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_singlecycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vriscv_singlecycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vriscv_singlecycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vriscv_singlecycle__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vriscv_singlecycle__Syms* __restrict vlSymsp);
    static void _sequent__TOP__5(Vriscv_singlecycle__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(Vriscv_singlecycle__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard

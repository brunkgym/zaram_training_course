// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRISCV_TOP_H_
#define _VRISCV_TOP_H_  // guard

#include "verilated_heavy.h"

//==========

class Vriscv_top__Syms;
class Vriscv_top_VerilatedVcd;


//----------

VL_MODULE(Vriscv_top) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(i_clk,0,0);
    VL_IN8(i_rstn,0,0);
    VL_OUT8(o_mem_write_m,0,0);
    VL_OUT8(o_mem_byte_sel_m,3,0);
    VL_OUT(o_im_rd_f,31,0);
    VL_OUT(o_pc_f,31,0);
    VL_OUT(o_alu_result_m,31,0);
    VL_OUT(o_write_data_m,31,0);
    VL_OUT(o_read_data_m,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ riscv_top__DOT__o_pc_src_e;
    CData/*1:0*/ riscv_top__DOT__o_result_src_d;
    CData/*0:0*/ riscv_top__DOT__o_alu_src_b_d;
    CData/*3:0*/ riscv_top__DOT__o_alu_control_d;
    CData/*1:0*/ riscv_top__DOT__o_result_src_e;
    CData/*0:0*/ riscv_top__DOT__o_alu_src_a_e;
    CData/*0:0*/ riscv_top__DOT__o_alu_src_b_e;
    CData/*0:0*/ riscv_top__DOT__o_reg_write_e;
    CData/*0:0*/ riscv_top__DOT__o_mem_write_e;
    CData/*3:0*/ riscv_top__DOT__o_mem_byte_sel_e;
    CData/*3:0*/ riscv_top__DOT__o_alu_control_e;
    CData/*0:0*/ riscv_top__DOT__o_jump_e;
    CData/*0:0*/ riscv_top__DOT__o_branch_e;
    CData/*4:0*/ riscv_top__DOT__o_rs1_e;
    CData/*4:0*/ riscv_top__DOT__o_rs2_e;
    CData/*0:0*/ riscv_top__DOT__o_zero_condition_e;
    CData/*0:0*/ riscv_top__DOT__o_unsigned_e;
    CData/*0:0*/ riscv_top__DOT__o_flush_e;
    CData/*0:0*/ riscv_top__DOT__o_jalr_e;
    CData/*1:0*/ riscv_top__DOT__o_forward_a_e;
    CData/*1:0*/ riscv_top__DOT__o_forward_b_e;
    CData/*2:0*/ riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d;
    CData/*0:0*/ riscv_top__DOT__u_riscv_hazard_unit__DOT__lwstall;
    IData/*31:0*/ riscv_top__DOT__o_instr_d;
    IData/*31:0*/ riscv_top__DOT__o_pc_d;
    IData/*31:0*/ riscv_top__DOT__o_pc_plus_4_d;
    IData/*31:0*/ riscv_top__DOT__o_extimm_d;
    IData/*31:0*/ riscv_top__DOT__o_result_w;
    IData/*31:0*/ riscv_top__DOT__o_rd1_e;
    IData/*31:0*/ riscv_top__DOT__o_rd2_e;
    IData/*31:0*/ riscv_top__DOT__o_extimm_e;
    IData/*31:0*/ riscv_top__DOT__o_pc_plus_4_e;
    IData/*31:0*/ riscv_top__DOT__o_pc_e;
    IData/*31:0*/ riscv_top__DOT__o_alu_result_e;
    IData/*31:0*/ riscv_top__DOT__o_write_data_e;
    IData/*31:0*/ riscv_top__DOT__o_pc_plus_4_m;
    IData/*31:0*/ riscv_top__DOT__o_extimm_m;
    IData/*31:0*/ riscv_top__DOT__o_alu_result_w;
    IData/*31:0*/ riscv_top__DOT__o_read_data_w;
    IData/*31:0*/ riscv_top__DOT__o_pc_plus_4_w;
    IData/*31:0*/ riscv_top__DOT__o_extimm_w;
    WData/*1023:0*/ riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF[32];
    WData/*255:0*/ riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR[8];
    IData/*31:0*/ riscv_top__DOT__u_riscv_execute__DOT__o_src_a_e;
    IData/*31:0*/ riscv_top__DOT__u_riscv_execute__DOT__o_src_b_e;
    WData/*1023:0*/ riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF[32];
    IData/*31:0*/ riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__dmem_data_;
    IData/*31:0*/ riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__i;
    QData/*63:0*/ riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP;
    IData/*31:0*/ riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__imem_arr[16384];
    IData/*31:0*/ riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[32];
    IData/*31:0*/ riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[3];
    IData/*31:0*/ riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_a__DOT__mux_input_arr[2];
    IData/*31:0*/ riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[3];
    IData/*31:0*/ riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[2];
    IData/*31:0*/ riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__dmem_arr[16384];
    IData/*31:0*/ riscv_top__DOT__u_mux_result__DOT__mux_input_arr[4];
    IData/*31:0*/ riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[4];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*6:0*/ __Vtableidx2;
    CData/*6:0*/ __Vtableidx3;
    CData/*3:0*/ __Vtableidx5;
    CData/*0:0*/ __Vclklast__TOP__i_clk;
    CData/*0:0*/ __Vclklast__TOP__i_rstn;
    SData/*10:0*/ __Vtableidx4;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_decode__o_register_q_13;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_9;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1;
    IData/*31:0*/ riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0;
    WData/*127:0*/ riscv_top__DOT____Vcellinp__u_mux_result__i_mux_concat_data[4];
    WData/*127:0*/ riscv_top__DOT____Vcellinp__u_mux_pcf__i_mux_concat_data[4];
    WData/*95:0*/ riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_a__i_mux_concat_data[3];
    WData/*95:0*/ riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_b__i_mux_concat_data[3];
    IData/*31:0*/ __Vdly__riscv_top__DOT__o_instr_d;
    QData/*63:0*/ riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_a__i_mux_concat_data;
    QData/*63:0*/ riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_b__i_mux_concat_data;
    CData/*0:0*/ __Vtablechg4[2048];
    CData/*0:0*/ __Vtablechg5[16];
    CData/*0:0*/ __Vm_traceActivity[4];
    static CData/*2:0*/ __Vtable1_riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d[128];
    static CData/*1:0*/ __Vtable2_riscv_top__DOT__o_result_src_d[128];
    static CData/*0:0*/ __Vtable3_riscv_top__DOT__o_alu_src_b_d[128];
    static WData/*255:0*/ __Vtable4_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR[2048][8];
    static QData/*63:0*/ __Vtable5_riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP[16];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    Vriscv_top__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vriscv_top);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    Vriscv_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~Vriscv_top();
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
    static void _eval_initial_loop(Vriscv_top__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(Vriscv_top__Syms* symsp, bool first);
  private:
    static QData _change_request(Vriscv_top__Syms* __restrict vlSymsp);
    static QData _change_request_1(Vriscv_top__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(Vriscv_top__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__2(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__4(Vriscv_top__Syms* __restrict vlSymsp);
    static void _sequent__TOP__6(Vriscv_top__Syms* __restrict vlSymsp);
    static void _settle__TOP__5(Vriscv_top__Syms* __restrict vlSymsp) VL_ATTR_COLD;
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

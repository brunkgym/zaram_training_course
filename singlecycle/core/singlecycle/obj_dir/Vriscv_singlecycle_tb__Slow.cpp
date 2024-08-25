// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_singlecycle_tb.h for the primary calling header

#include "Vriscv_singlecycle_tb.h"
#include "Vriscv_singlecycle_tb__Syms.h"

//==========

VL_CTOR_IMP(Vriscv_singlecycle_tb) {
    Vriscv_singlecycle_tb__Syms* __restrict vlSymsp = __VlSymsp = new Vriscv_singlecycle_tb__Syms(this, name());
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_singlecycle_tb::__Vconfigure(Vriscv_singlecycle_tb__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vriscv_singlecycle_tb::~Vriscv_singlecycle_tb() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vriscv_singlecycle_tb::_initial__TOP__1(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_initial__TOP__1\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*191:0*/ __Vtemp2[6];
    WData/*127:0*/ __Vtemp3[4];
    WData/*127:0*/ __Vtemp4[4];
    // Body
    __Vtemp1[0U] = 0x653d2573U;
    __Vtemp1[1U] = 0x5f66696cU;
    __Vtemp1[2U] = 0x766364U;
    if (VL_VALUEPLUSARGS_INW(256,VL_CVT_PACK_STR_NW(3, __Vtemp1),
                             vlTOPp->riscv_singlecycle_tb__DOT__vcd_file)) {
        vl_dumpctl_filenamep(true, VL_CVT_PACK_STR_NW(8, vlTOPp->riscv_singlecycle_tb__DOT__vcd_file));
        VL_PRINTF_MT("-Info: riscv_singlecycle_tb.v:70: $dumpvar ignored, as Verilated without --trace\n");
        __Vtemp2[0U] = 0x2e766364U;
        __Vtemp2[1U] = 0x655f7462U;
        __Vtemp2[2U] = 0x6379636cU;
        __Vtemp2[3U] = 0x6e676c65U;
        __Vtemp2[4U] = 0x765f7369U;
        __Vtemp2[5U] = 0x72697363U;
        vl_dumpctl_filenamep(true, VL_CVT_PACK_STR_NW(6, __Vtemp2));
        VL_PRINTF_MT("-Info: riscv_singlecycle_tb.v:80: $dumpvar ignored, as Verilated without --trace\n");
    }
    __Vtemp3[0U] = 0x2e6d6966U;
    __Vtemp3[1U] = 0x696d656dU;
    __Vtemp3[2U] = 0x7363765fU;
    __Vtemp3[3U] = 0x7269U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp3)
                 , vlTOPp->riscv_singlecycle_tb__DOT__u_singlecycle__DOT__u_riscv_imem__DOT__imem_arr
                 , 0, ~0ULL);
    __Vtemp4[0U] = 0x2e6d6966U;
    __Vtemp4[1U] = 0x646d656dU;
    __Vtemp4[2U] = 0x7363765fU;
    __Vtemp4[3U] = 0x7269U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp4)
                 , vlTOPp->riscv_singlecycle_tb__DOT__u_singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                 , 0, ~0ULL);
    vlTOPp->riscv_singlecycle_tb__DOT__i_clk = 0U;
    vlTOPp->riscv_singlecycle_tb__DOT__i_rstn = 1U;
    VL_FINISH_MT("riscv_singlecycle_tb.v", 51, "");
    vlTOPp->riscv_singlecycle_tb__DOT__i = 0U;
    while (VL_GTS_III(1,32,32, 0x64U, vlTOPp->riscv_singlecycle_tb__DOT__i)) {
        vlTOPp->riscv_singlecycle_tb__DOT__i = ((IData)(1U) 
                                                + vlTOPp->riscv_singlecycle_tb__DOT__i);
    }
    VL_FINISH_MT("riscv_singlecycle_tb.v", 63, "");
}

void Vriscv_singlecycle_tb::_eval_initial(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_eval_initial\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk 
        = vlTOPp->__VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk;
    vlTOPp->__Vclklast__TOP__riscv_singlecycle_tb__DOT__i_rstn = 1U;
}

void Vriscv_singlecycle_tb::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::final\n"); );
    // Variables
    Vriscv_singlecycle_tb__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vriscv_singlecycle_tb::_eval_settle(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_eval_settle\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
}

void Vriscv_singlecycle_tb::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_ctor_var_reset\n"); );
    // Body
    riscv_singlecycle_tb__DOT__i_clk = VL_RAND_RESET_I(1);
    riscv_singlecycle_tb__DOT__i_rstn = VL_RAND_RESET_I(1);
    riscv_singlecycle_tb__DOT__i = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, riscv_singlecycle_tb__DOT__vcd_file);
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            riscv_singlecycle_tb__DOT__u_singlecycle__DOT__u_riscv_imem__DOT__imem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            riscv_singlecycle_tb__DOT__u_singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk = VL_RAND_RESET_I(1);
    __Vchglast__TOP__riscv_singlecycle_tb__DOT__i_clk = VL_RAND_RESET_I(1);
}

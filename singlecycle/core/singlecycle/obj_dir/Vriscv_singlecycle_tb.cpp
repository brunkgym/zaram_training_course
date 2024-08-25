// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_singlecycle_tb.h for the primary calling header

#include "Vriscv_singlecycle_tb.h"
#include "Vriscv_singlecycle_tb__Syms.h"

//==========

void Vriscv_singlecycle_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_singlecycle_tb::eval\n"); );
    Vriscv_singlecycle_tb__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("riscv_singlecycle_tb.v", 19, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_singlecycle_tb::_eval_initial_loop(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("riscv_singlecycle_tb.v", 19, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vriscv_singlecycle_tb::_combo__TOP__3(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_combo__TOP__3\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->riscv_singlecycle_tb__DOT__i_clk = (1U 
                                                & (~ (IData)(vlTOPp->riscv_singlecycle_tb__DOT__i_clk)));
}

void Vriscv_singlecycle_tb::_eval(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_eval\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP____VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk 
        = vlTOPp->__VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk;
    vlTOPp->__Vclklast__TOP__riscv_singlecycle_tb__DOT__i_rstn 
        = vlTOPp->riscv_singlecycle_tb__DOT__i_rstn;
    vlTOPp->__VinpClk__TOP__riscv_singlecycle_tb__DOT__i_clk 
        = vlTOPp->riscv_singlecycle_tb__DOT__i_clk;
}

VL_INLINE_OPT QData Vriscv_singlecycle_tb::_change_request(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_change_request\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vriscv_singlecycle_tb::_change_request_1(Vriscv_singlecycle_tb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_change_request_1\n"); );
    Vriscv_singlecycle_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->riscv_singlecycle_tb__DOT__i_clk ^ vlTOPp->__Vchglast__TOP__riscv_singlecycle_tb__DOT__i_clk));
    VL_DEBUG_IF( if(__req && ((vlTOPp->riscv_singlecycle_tb__DOT__i_clk ^ vlTOPp->__Vchglast__TOP__riscv_singlecycle_tb__DOT__i_clk))) VL_DBG_MSGF("        CHANGE: riscv_singlecycle_tb.v:20: riscv_singlecycle_tb.i_clk\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__riscv_singlecycle_tb__DOT__i_clk 
        = vlTOPp->riscv_singlecycle_tb__DOT__i_clk;
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_singlecycle_tb::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle_tb::_eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG

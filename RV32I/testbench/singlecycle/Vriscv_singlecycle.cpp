// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_singlecycle.h for the primary calling header

#include "Vriscv_singlecycle.h"
#include "Vriscv_singlecycle__Syms.h"

//==========

void Vriscv_singlecycle::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vriscv_singlecycle::eval\n"); );
    Vriscv_singlecycle__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/les/project_0/RV32I/core/singlecycle/riscv_singlecycle.v", 13, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vriscv_singlecycle::_eval_initial_loop(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
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
            VL_FATAL_MT("/home/les/project_0/RV32I/core/singlecycle/riscv_singlecycle.v", 13, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void Vriscv_singlecycle::_sequent__TOP__2(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_sequent__TOP__2\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->singlecycle__DOT__i_pc = ((IData)(vlTOPp->i_rstn)
                                       ? ((2U >= (IData)(vlTOPp->singlecycle__DOT__o_pc_src))
                                           ? vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr
                                          [vlTOPp->singlecycle__DOT__o_pc_src]
                                           : 0U) : 0U);
}

VL_INLINE_OPT void Vriscv_singlecycle::_sequent__TOP__3(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_sequent__TOP__3\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*4:0*/ __Vdlyvdim0__singlecycle__DOT__u_riscv_regfile__DOT__registers__v0;
    CData/*4:0*/ __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    CData/*7:0*/ __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    CData/*0:0*/ __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    CData/*4:0*/ __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    CData/*7:0*/ __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    CData/*0:0*/ __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    CData/*4:0*/ __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    CData/*7:0*/ __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    CData/*0:0*/ __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    CData/*4:0*/ __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    CData/*7:0*/ __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    CData/*0:0*/ __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    CData/*0:0*/ __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    SData/*13:0*/ __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0;
    SData/*13:0*/ __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1;
    SData/*13:0*/ __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2;
    SData/*13:0*/ __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3;
    SData/*13:0*/ __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    IData/*31:0*/ __Vdlyvval__singlecycle__DOT__u_riscv_regfile__DOT__registers__v0;
    IData/*31:0*/ __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    // Body
    if (((0x23U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
          ? 1U : 0U)) {
        vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__i = 4U;
    }
    __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0 = 0U;
    __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1 = 0U;
    __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2 = 0U;
    __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3 = 0U;
    __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4 = 0U;
    __Vdlyvval__singlecycle__DOT__u_riscv_regfile__DOT__registers__v0 
        = ((((0x33U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
              ? 1U : ((0x13U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                       ? 1U : ((3U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                                ? 1U : ((0x67U == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                         ? 1U : ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                                  ? 1U
                                                  : 0U))))) 
            & (0U != (0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                               >> 7U)))) ? vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr
           [vlTOPp->singlecycle__DOT__o_src_rd] : vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers
           [(0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                      >> 7U))]);
    __Vdlyvdim0__singlecycle__DOT__u_riscv_regfile__DOT__registers__v0 
        = (0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                    >> 7U));
    if (((0x23U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
          ? 1U : 0U)) {
        if ((1U & (IData)(vlTOPp->singlecycle__DOT__o_dmem_byte_sel))) {
            __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0 
                = (0xffU & vlTOPp->singlecycle__DOT__o_regfile_rs2_data);
            __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0 = 1U;
            __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0 = 0U;
            __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0 
                = (0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result);
        }
        if ((2U & (IData)(vlTOPp->singlecycle__DOT__o_dmem_byte_sel))) {
            __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1 
                = (0xffU & (vlTOPp->singlecycle__DOT__o_regfile_rs2_data 
                            >> 8U));
            __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1 = 1U;
            __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1 = 8U;
            __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1 
                = (0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result);
        }
        if ((4U & (IData)(vlTOPp->singlecycle__DOT__o_dmem_byte_sel))) {
            __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2 
                = (0xffU & (vlTOPp->singlecycle__DOT__o_regfile_rs2_data 
                            >> 0x10U));
            __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2 = 1U;
            __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2 = 0x10U;
            __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2 
                = (0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result);
        }
        if ((8U & (IData)(vlTOPp->singlecycle__DOT__o_dmem_byte_sel))) {
            __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3 
                = (0xffU & (vlTOPp->singlecycle__DOT__o_regfile_rs2_data 
                            >> 0x18U));
            __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3 = 1U;
            __Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3 = 0x18U;
            __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3 
                = (0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result);
        }
    } else {
        __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4 
            = vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
            [(0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result)];
        __Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4 = 1U;
        __Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4 
            = (0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result);
    }
    vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[__Vdlyvdim0__singlecycle__DOT__u_riscv_regfile__DOT__registers__v0] 
        = __Vdlyvval__singlecycle__DOT__u_riscv_regfile__DOT__registers__v0;
    if (__Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0) {
        vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0))) 
                & vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0]) 
               | ((IData)(__Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0) 
                  << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v0)));
    }
    if (__Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1) {
        vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1))) 
                & vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1]) 
               | ((IData)(__Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1) 
                  << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v1)));
    }
    if (__Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2) {
        vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2))) 
                & vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2]) 
               | ((IData)(__Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2) 
                  << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v2)));
    }
    if (__Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3) {
        vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3))) 
                & vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                [__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3]) 
               | ((IData)(__Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3) 
                  << (IData)(__Vdlyvlsb__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v3)));
    }
    if (__Vdlyvset__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4) {
        vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vdlyvdim0__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4] 
            = __Vdlyvval__singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr__v4;
    }
}

VL_INLINE_OPT void Vriscv_singlecycle::_sequent__TOP__5(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_sequent__TOP__5\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->singlecycle__DOT__o_imem = vlTOPp->singlecycle__DOT__u_riscv_imem__DOT__imem_arr
        [(0x3fffU & vlTOPp->singlecycle__DOT__i_pc)];
    if ((3U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))) {
        if (((0U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                           >> 0xcU))) | (4U == (7U 
                                                & (vlTOPp->singlecycle__DOT__o_imem 
                                                   >> 0xcU))))) {
            vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 1U;
        } else {
            if (((1U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                               >> 0xcU))) | (5U == 
                                             (7U & 
                                              (vlTOPp->singlecycle__DOT__o_imem 
                                               >> 0xcU))))) {
                vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 3U;
            } else {
                if ((2U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                  >> 0xcU)))) {
                    vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 0xfU;
                } else {
                    if ((0U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                      >> 0xcU)))) {
                        vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 1U;
                    }
                }
            }
        }
    } else {
        if ((0x23U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))) {
            if ((0U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                              >> 0xcU)))) {
                vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 1U;
            } else {
                if ((1U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                  >> 0xcU)))) {
                    vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 3U;
                } else {
                    if ((2U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                      >> 0xcU)))) {
                        vlTOPp->singlecycle__DOT__o_dmem_byte_sel = 0xfU;
                    }
                }
            }
        }
    }
    if ((0x33U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))) {
        if ((0x4000U & vlTOPp->singlecycle__DOT__o_imem)) {
            vlTOPp->singlecycle__DOT__o_alu_control 
                = ((0x2000U & vlTOPp->singlecycle__DOT__o_imem)
                    ? ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)
                        ? 7U : 6U) : ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)
                                       ? ((0x40000000U 
                                           & vlTOPp->singlecycle__DOT__o_imem)
                                           ? 0xdU : 5U)
                                       : 4U));
        } else {
            if ((0x2000U & vlTOPp->singlecycle__DOT__o_imem)) {
                vlTOPp->singlecycle__DOT__o_alu_control 
                    = ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)
                        ? 3U : 2U);
            } else {
                if ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)) {
                    vlTOPp->singlecycle__DOT__o_alu_control = 1U;
                } else {
                    if ((0x40000000U & vlTOPp->singlecycle__DOT__o_imem)) {
                        if ((0x40000000U & vlTOPp->singlecycle__DOT__o_imem)) {
                            vlTOPp->singlecycle__DOT__o_alu_control = 8U;
                        }
                    } else {
                        vlTOPp->singlecycle__DOT__o_alu_control = 0U;
                    }
                }
            }
        }
    } else {
        if ((0x13U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))) {
            vlTOPp->singlecycle__DOT__o_alu_control 
                = ((0x4000U & vlTOPp->singlecycle__DOT__o_imem)
                    ? ((0x2000U & vlTOPp->singlecycle__DOT__o_imem)
                        ? ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)
                            ? 7U : 6U) : ((0x1000U 
                                           & vlTOPp->singlecycle__DOT__o_imem)
                                           ? ((0x40000000U 
                                               & vlTOPp->singlecycle__DOT__o_imem)
                                               ? 0xdU
                                               : 5U)
                                           : 4U)) : 
                   ((0x2000U & vlTOPp->singlecycle__DOT__o_imem)
                     ? ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)
                         ? 3U : 2U) : ((0x1000U & vlTOPp->singlecycle__DOT__o_imem)
                                        ? 1U : 0U)));
        } else {
            if (((3U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem)) 
                 | (0x23U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem)))) {
                vlTOPp->singlecycle__DOT__o_alu_control = 0U;
            } else {
                if ((0x63U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))) {
                    if (((0U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                       >> 0xcU))) | 
                         (1U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                       >> 0xcU))))) {
                        vlTOPp->singlecycle__DOT__o_alu_control = 8U;
                    } else {
                        if (((4U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                           >> 0xcU))) 
                             | (5U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 0xcU))))) {
                            vlTOPp->singlecycle__DOT__o_alu_control = 2U;
                        } else {
                            if (((6U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                               >> 0xcU))) 
                                 | (7U == (7U & (vlTOPp->singlecycle__DOT__o_imem 
                                                 >> 0xcU))))) {
                                vlTOPp->singlecycle__DOT__o_alu_control = 3U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data 
        = (((QData)((IData)(vlTOPp->singlecycle__DOT__i_pc)) 
            << 0x20U) | (QData)((IData)(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers
                                        [(0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                                   >> 0xfU))])));
    vlTOPp->singlecycle__DOT__o_regfile_rs2_data = 
        vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers
        [(0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                   >> 0x14U))];
    vlTOPp->__Vtableidx1 = (0x7fU & vlTOPp->singlecycle__DOT__o_imem);
    if (vlTOPp->__Vtablechg1[vlTOPp->__Vtableidx1]) {
        vlTOPp->singlecycle__DOT__o_imm_src = vlTOPp->__Vtable1_singlecycle__DOT__o_imm_src
            [vlTOPp->__Vtableidx1];
    }
    vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data);
    vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data 
                   >> 0x20U));
    vlTOPp->singlecycle__DOT__o_imm_dec = ((4U & (IData)(vlTOPp->singlecycle__DOT__o_imm_src))
                                            ? ((2U 
                                                & (IData)(vlTOPp->singlecycle__DOT__o_imm_src))
                                                ? 0U
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_imm_src))
                                                    ? 
                                                   ((0xfff00000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->singlecycle__DOT__o_imem 
                                                                       >> 0x1fU)))) 
                                                        << 0x14U)) 
                                                    | ((0xff000U 
                                                        & vlTOPp->singlecycle__DOT__o_imem) 
                                                       | ((0x800U 
                                                           & (vlTOPp->singlecycle__DOT__o_imem 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlTOPp->singlecycle__DOT__o_imem 
                                                                >> 0x14U)))))
                                                    : 
                                                   (0xfffff000U 
                                                    & vlTOPp->singlecycle__DOT__o_imem)))
                                            : ((2U 
                                                & (IData)(vlTOPp->singlecycle__DOT__o_imm_src))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_imm_src))
                                                    ? 
                                                   ((0xfffff000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->singlecycle__DOT__o_imem 
                                                                       >> 0x1fU)))) 
                                                        << 0xcU)) 
                                                    | ((0x800U 
                                                        & (vlTOPp->singlecycle__DOT__o_imem 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlTOPp->singlecycle__DOT__o_imem 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlTOPp->singlecycle__DOT__o_imem 
                                                                >> 7U)))))
                                                    : 
                                                   ((0xfffff000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->singlecycle__DOT__o_imem 
                                                                       >> 0x1fU)))) 
                                                        << 0xcU)) 
                                                    | ((0xfe0U 
                                                        & (vlTOPp->singlecycle__DOT__o_imem 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlTOPp->singlecycle__DOT__o_imem 
                                                             >> 7U)))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_imm_src))
                                                    ? 
                                                   ((0xfffff000U 
                                                     & ((- (IData)(
                                                                   (1U 
                                                                    & (vlTOPp->singlecycle__DOT__o_imem 
                                                                       >> 0x1fU)))) 
                                                        << 0xcU)) 
                                                    | (0xfffU 
                                                       & (vlTOPp->singlecycle__DOT__o_imem 
                                                          >> 0x14U)))
                                                    : 0U)));
    vlTOPp->singlecycle__DOT__o_alu_mux_a = vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr
        [((0x33U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
           ? 0U : ((0x13U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                    ? 0U : ((3U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                             ? 0U : ((0x67U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem))
                                      ? 0U : ((0x23U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 0U
                                                   : 1U))))))];
    vlTOPp->singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data 
        = (((QData)((IData)(vlTOPp->singlecycle__DOT__o_imm_dec)) 
            << 0x20U) | (QData)((IData)(vlTOPp->singlecycle__DOT__o_regfile_rs2_data)));
    vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr[0U] 
        = (IData)(vlTOPp->singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data);
    vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr[1U] 
        = (IData)((vlTOPp->singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data 
                   >> 0x20U));
    vlTOPp->singlecycle__DOT__o_alu_mux_b = vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr
        [((0x33U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
           ? 0U : ((0x13U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                    ? 1U : ((3U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                             ? 1U : ((0x67U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem))
                                      ? 1U : ((0x23U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 0U
                                                   : 1U))))))];
    vlTOPp->singlecycle__DOT__o_alu_result = ((8U & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                               ? ((4U 
                                                   & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                     ? 
                                                    VL_SHIFTRS_III(32,32,5, vlTOPp->singlecycle__DOT__o_alu_mux_a, 
                                                                   (0x1fU 
                                                                    & vlTOPp->singlecycle__DOT__o_alu_mux_b))
                                                     : 0U))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                    ? 0U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                     ? 0U
                                                     : 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     - vlTOPp->singlecycle__DOT__o_alu_mux_b))))
                                               : ((4U 
                                                   & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                     ? 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     & vlTOPp->singlecycle__DOT__o_alu_mux_b)
                                                     : 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     | vlTOPp->singlecycle__DOT__o_alu_mux_b))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                     ? 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     >> 
                                                     (0x1fU 
                                                      & vlTOPp->singlecycle__DOT__o_alu_mux_b))
                                                     : 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     ^ vlTOPp->singlecycle__DOT__o_alu_mux_b)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                     ? 
                                                    ((vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                      < vlTOPp->singlecycle__DOT__o_alu_mux_b)
                                                      ? 1U
                                                      : 0U)
                                                     : 
                                                    (VL_LTS_III(1,32,32, vlTOPp->singlecycle__DOT__o_alu_mux_a, vlTOPp->singlecycle__DOT__o_alu_mux_b)
                                                      ? 1U
                                                      : 0U))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlTOPp->singlecycle__DOT__o_alu_control))
                                                     ? 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlTOPp->singlecycle__DOT__o_alu_mux_b))
                                                     : 
                                                    (vlTOPp->singlecycle__DOT__o_alu_mux_a 
                                                     + vlTOPp->singlecycle__DOT__o_alu_mux_b)))));
    vlTOPp->singlecycle__DOT__o_pc_src = ((0x63U == 
                                           (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                                           ? (((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->singlecycle__DOT__o_imem)) 
                                               & ((0x4000U 
                                                   & vlTOPp->singlecycle__DOT__o_imem)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlTOPp->singlecycle__DOT__o_imem)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlTOPp->singlecycle__DOT__o_imem)
                                                     ? 
                                                    (0U 
                                                     == vlTOPp->singlecycle__DOT__o_alu_result)
                                                     : 
                                                    (0U 
                                                     != vlTOPp->singlecycle__DOT__o_alu_result))
                                                    : 
                                                   ((0x1000U 
                                                     & vlTOPp->singlecycle__DOT__o_imem)
                                                     ? 
                                                    (0U 
                                                     == vlTOPp->singlecycle__DOT__o_alu_result)
                                                     : 
                                                    (0U 
                                                     != vlTOPp->singlecycle__DOT__o_alu_result)))
                                                   : 
                                                  ((~ 
                                                    (vlTOPp->singlecycle__DOT__o_imem 
                                                     >> 0xdU)) 
                                                   & ((0x1000U 
                                                       & vlTOPp->singlecycle__DOT__o_imem)
                                                       ? 
                                                      (0U 
                                                       != vlTOPp->singlecycle__DOT__o_alu_result)
                                                       : 
                                                      (0U 
                                                       == vlTOPp->singlecycle__DOT__o_alu_result)))))
                                               ? 1U
                                               : 0U)
                                           : ((0x67U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 2U
                                               : ((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 1U
                                                   : 0U)));
    vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[0U] 
        = ((IData)(4U) + vlTOPp->singlecycle__DOT__i_pc);
    vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[1U] 
        = (IData)((((QData)((IData)(vlTOPp->singlecycle__DOT__o_alu_result)) 
                    << 0x20U) | (QData)((IData)((vlTOPp->singlecycle__DOT__i_pc 
                                                 + vlTOPp->singlecycle__DOT__o_imm_dec)))));
    vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[2U] 
        = (IData)(((((QData)((IData)(vlTOPp->singlecycle__DOT__o_alu_result)) 
                     << 0x20U) | (QData)((IData)((vlTOPp->singlecycle__DOT__i_pc 
                                                  + vlTOPp->singlecycle__DOT__o_imm_dec)))) 
                   >> 0x20U));
    vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[0U];
    vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[1U];
    vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[2U];
}

VL_INLINE_OPT void Vriscv_singlecycle::_combo__TOP__6(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_combo__TOP__6\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->singlecycle__DOT__o_rd_data = (((0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->singlecycle__DOT__o_imem))
                                             ? 1U : 0U)
                                            ? vlTOPp->singlecycle__DOT__o_rd_data
                                            : vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                                           [(0x3fffU 
                                             & vlTOPp->singlecycle__DOT__o_alu_result)]);
    vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[0U] 
        = vlTOPp->singlecycle__DOT__o_alu_result;
    vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[1U] 
        = vlTOPp->singlecycle__DOT__o_rd_data;
    vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[2U] 
        = (IData)((((QData)((IData)(vlTOPp->singlecycle__DOT__o_imm_dec)) 
                    << 0x20U) | (QData)((IData)(((IData)(4U) 
                                                 + vlTOPp->singlecycle__DOT__i_pc)))));
    vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[3U] 
        = (IData)(((((QData)((IData)(vlTOPp->singlecycle__DOT__o_imm_dec)) 
                     << 0x20U) | (QData)((IData)(((IData)(4U) 
                                                  + vlTOPp->singlecycle__DOT__i_pc)))) 
                   >> 0x20U));
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[0U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[1U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[2U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[3U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[3U];
}

void Vriscv_singlecycle::_eval(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_eval\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk))) 
         | ((~ (IData)(vlTOPp->i_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__i_rstn)))) {
        vlTOPp->_sequent__TOP__2(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    if (((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
        vlTOPp->__Vm_traceActivity[2U] = 1U;
    }
    if ((((IData)(vlTOPp->i_clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__i_clk))) 
         | ((~ (IData)(vlTOPp->i_rstn)) & (IData)(vlTOPp->__Vclklast__TOP__i_rstn)))) {
        vlTOPp->_sequent__TOP__5(vlSymsp);
        vlTOPp->__Vm_traceActivity[3U] = 1U;
    }
    vlTOPp->_combo__TOP__6(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    // Final
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_rstn = vlTOPp->i_rstn;
}

VL_INLINE_OPT QData Vriscv_singlecycle::_change_request(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_change_request\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData Vriscv_singlecycle::_change_request_1(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_change_request_1\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->singlecycle__DOT__o_rd_data ^ vlTOPp->__Vchglast__TOP__singlecycle__DOT__o_rd_data));
    VL_DEBUG_IF( if(__req && ((vlTOPp->singlecycle__DOT__o_rd_data ^ vlTOPp->__Vchglast__TOP__singlecycle__DOT__o_rd_data))) VL_DBG_MSGF("        CHANGE: /home/les/project_0/RV32I/core/singlecycle/riscv_singlecycle.v:141: singlecycle.o_rd_data\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__singlecycle__DOT__o_rd_data 
        = vlTOPp->singlecycle__DOT__o_rd_data;
    return __req;
}

#ifdef VL_DEBUG
void Vriscv_singlecycle::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((i_clk & 0xfeU))) {
        Verilated::overWidthError("i_clk");}
    if (VL_UNLIKELY((i_rstn & 0xfeU))) {
        Verilated::overWidthError("i_rstn");}
}
#endif  // VL_DEBUG

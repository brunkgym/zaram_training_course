// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vriscv_singlecycle.h for the primary calling header

#include "Vriscv_singlecycle.h"
#include "Vriscv_singlecycle__Syms.h"

//==========
CData/*2:0*/ Vriscv_singlecycle::__Vtable1_singlecycle__DOT__o_imm_src[128];

VL_CTOR_IMP(Vriscv_singlecycle) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = __VlSymsp = new Vriscv_singlecycle__Syms(this, name());
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void Vriscv_singlecycle::__Vconfigure(Vriscv_singlecycle__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

Vriscv_singlecycle::~Vriscv_singlecycle() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void Vriscv_singlecycle::_initial__TOP__1(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_initial__TOP__1\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*127:0*/ __Vtemp1[4];
    WData/*127:0*/ __Vtemp2[4];
    // Body
    __Vtemp1[0U] = 0x2e6d6966U;
    __Vtemp1[1U] = 0x696d656dU;
    __Vtemp1[2U] = 0x7363765fU;
    __Vtemp1[3U] = 0x7269U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp1)
                 , vlTOPp->singlecycle__DOT__u_riscv_imem__DOT__imem_arr
                 , 0, ~0ULL);
    __Vtemp2[0U] = 0x2e6d6966U;
    __Vtemp2[1U] = 0x646d656dU;
    __Vtemp2[2U] = 0x7363765fU;
    __Vtemp2[3U] = 0x7269U;
    VL_READMEM_N(true, 32, 16384, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                 , vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                 , 0, ~0ULL);
    vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[0U] = 0U;
}

void Vriscv_singlecycle::_settle__TOP__4(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_settle__TOP__4\n"); );
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
    vlTOPp->singlecycle__DOT__o_rd_data = (((0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->singlecycle__DOT__o_imem))
                                             ? 1U : 0U)
                                            ? vlTOPp->singlecycle__DOT__o_rd_data
                                            : vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr
                                           [(0x3fffU 
                                             & vlTOPp->singlecycle__DOT__o_alu_result)]);
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
    vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[0U];
    vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[1U];
    vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data[2U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[0U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[0U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[1U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[1U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[2U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[2U];
    vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[3U] 
        = vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data[3U];
}

void Vriscv_singlecycle::_eval_initial(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_eval_initial\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->__Vclklast__TOP__i_clk = vlTOPp->i_clk;
    vlTOPp->__Vclklast__TOP__i_rstn = vlTOPp->i_rstn;
}

void Vriscv_singlecycle::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::final\n"); );
    // Variables
    Vriscv_singlecycle__Syms* __restrict vlSymsp = this->__VlSymsp;
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void Vriscv_singlecycle::_eval_settle(Vriscv_singlecycle__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_eval_settle\n"); );
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
    vlTOPp->__Vm_traceActivity[4U] = 1U;
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
}

void Vriscv_singlecycle::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vriscv_singlecycle::_ctor_var_reset\n"); );
    // Body
    i_clk = VL_RAND_RESET_I(1);
    i_rstn = VL_RAND_RESET_I(1);
    singlecycle__DOT__o_alu_result = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_pc_src = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(96, singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data);
    singlecycle__DOT__i_pc = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_imem = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_regfile_rs2_data = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_imm_dec = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_imm_src = VL_RAND_RESET_I(3);
    singlecycle__DOT__o_alu_mux_a = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_alu_mux_b = VL_RAND_RESET_I(32);
    singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data = VL_RAND_RESET_Q(64);
    singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data = VL_RAND_RESET_Q(64);
    singlecycle__DOT__o_alu_control = VL_RAND_RESET_I(4);
    singlecycle__DOT__o_rd_data = VL_RAND_RESET_I(32);
    singlecycle__DOT__o_dmem_byte_sel = VL_RAND_RESET_I(4);
    singlecycle__DOT__o_src_rd = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(128, singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            singlecycle__DOT__u_riscv_imem__DOT__imem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            singlecycle__DOT__u_riscv_regfile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            singlecycle__DOT__src_a_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<2; ++__Vi0) {
            singlecycle__DOT__src_b_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<16384; ++__Vi0) {
            singlecycle__DOT__u_riscv_dmem__DOT__dmem_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    singlecycle__DOT__u_riscv_dmem__DOT__i = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            singlecycle__DOT__result_mux__DOT__mux_input_arr[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = 0;
    __Vtablechg1[0] = 0U;
    __Vtablechg1[1] = 0U;
    __Vtablechg1[2] = 0U;
    __Vtablechg1[3] = 1U;
    __Vtablechg1[4] = 0U;
    __Vtablechg1[5] = 0U;
    __Vtablechg1[6] = 0U;
    __Vtablechg1[7] = 0U;
    __Vtablechg1[8] = 0U;
    __Vtablechg1[9] = 0U;
    __Vtablechg1[10] = 0U;
    __Vtablechg1[11] = 0U;
    __Vtablechg1[12] = 0U;
    __Vtablechg1[13] = 0U;
    __Vtablechg1[14] = 0U;
    __Vtablechg1[15] = 0U;
    __Vtablechg1[16] = 0U;
    __Vtablechg1[17] = 0U;
    __Vtablechg1[18] = 0U;
    __Vtablechg1[19] = 1U;
    __Vtablechg1[20] = 0U;
    __Vtablechg1[21] = 0U;
    __Vtablechg1[22] = 0U;
    __Vtablechg1[23] = 0U;
    __Vtablechg1[24] = 0U;
    __Vtablechg1[25] = 0U;
    __Vtablechg1[26] = 0U;
    __Vtablechg1[27] = 0U;
    __Vtablechg1[28] = 0U;
    __Vtablechg1[29] = 0U;
    __Vtablechg1[30] = 0U;
    __Vtablechg1[31] = 0U;
    __Vtablechg1[32] = 0U;
    __Vtablechg1[33] = 0U;
    __Vtablechg1[34] = 0U;
    __Vtablechg1[35] = 1U;
    __Vtablechg1[36] = 0U;
    __Vtablechg1[37] = 0U;
    __Vtablechg1[38] = 0U;
    __Vtablechg1[39] = 0U;
    __Vtablechg1[40] = 0U;
    __Vtablechg1[41] = 0U;
    __Vtablechg1[42] = 0U;
    __Vtablechg1[43] = 0U;
    __Vtablechg1[44] = 0U;
    __Vtablechg1[45] = 0U;
    __Vtablechg1[46] = 0U;
    __Vtablechg1[47] = 0U;
    __Vtablechg1[48] = 0U;
    __Vtablechg1[49] = 0U;
    __Vtablechg1[50] = 0U;
    __Vtablechg1[51] = 1U;
    __Vtablechg1[52] = 0U;
    __Vtablechg1[53] = 0U;
    __Vtablechg1[54] = 0U;
    __Vtablechg1[55] = 1U;
    __Vtablechg1[56] = 0U;
    __Vtablechg1[57] = 0U;
    __Vtablechg1[58] = 0U;
    __Vtablechg1[59] = 0U;
    __Vtablechg1[60] = 0U;
    __Vtablechg1[61] = 0U;
    __Vtablechg1[62] = 0U;
    __Vtablechg1[63] = 0U;
    __Vtablechg1[64] = 0U;
    __Vtablechg1[65] = 0U;
    __Vtablechg1[66] = 0U;
    __Vtablechg1[67] = 0U;
    __Vtablechg1[68] = 0U;
    __Vtablechg1[69] = 0U;
    __Vtablechg1[70] = 0U;
    __Vtablechg1[71] = 0U;
    __Vtablechg1[72] = 0U;
    __Vtablechg1[73] = 0U;
    __Vtablechg1[74] = 0U;
    __Vtablechg1[75] = 0U;
    __Vtablechg1[76] = 0U;
    __Vtablechg1[77] = 0U;
    __Vtablechg1[78] = 0U;
    __Vtablechg1[79] = 0U;
    __Vtablechg1[80] = 0U;
    __Vtablechg1[81] = 0U;
    __Vtablechg1[82] = 0U;
    __Vtablechg1[83] = 0U;
    __Vtablechg1[84] = 0U;
    __Vtablechg1[85] = 0U;
    __Vtablechg1[86] = 0U;
    __Vtablechg1[87] = 0U;
    __Vtablechg1[88] = 0U;
    __Vtablechg1[89] = 0U;
    __Vtablechg1[90] = 0U;
    __Vtablechg1[91] = 0U;
    __Vtablechg1[92] = 0U;
    __Vtablechg1[93] = 0U;
    __Vtablechg1[94] = 0U;
    __Vtablechg1[95] = 0U;
    __Vtablechg1[96] = 0U;
    __Vtablechg1[97] = 0U;
    __Vtablechg1[98] = 0U;
    __Vtablechg1[99] = 1U;
    __Vtablechg1[100] = 0U;
    __Vtablechg1[101] = 0U;
    __Vtablechg1[102] = 0U;
    __Vtablechg1[103] = 1U;
    __Vtablechg1[104] = 0U;
    __Vtablechg1[105] = 0U;
    __Vtablechg1[106] = 0U;
    __Vtablechg1[107] = 0U;
    __Vtablechg1[108] = 0U;
    __Vtablechg1[109] = 0U;
    __Vtablechg1[110] = 0U;
    __Vtablechg1[111] = 1U;
    __Vtablechg1[112] = 0U;
    __Vtablechg1[113] = 0U;
    __Vtablechg1[114] = 0U;
    __Vtablechg1[115] = 0U;
    __Vtablechg1[116] = 0U;
    __Vtablechg1[117] = 0U;
    __Vtablechg1[118] = 0U;
    __Vtablechg1[119] = 0U;
    __Vtablechg1[120] = 0U;
    __Vtablechg1[121] = 0U;
    __Vtablechg1[122] = 0U;
    __Vtablechg1[123] = 0U;
    __Vtablechg1[124] = 0U;
    __Vtablechg1[125] = 0U;
    __Vtablechg1[126] = 0U;
    __Vtablechg1[127] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[0] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[1] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[2] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[3] = 1U;
    __Vtable1_singlecycle__DOT__o_imm_src[4] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[5] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[6] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[7] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[8] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[9] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[10] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[11] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[12] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[13] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[14] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[15] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[16] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[17] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[18] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[19] = 1U;
    __Vtable1_singlecycle__DOT__o_imm_src[20] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[21] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[22] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[23] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[24] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[25] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[26] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[27] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[28] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[29] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[30] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[31] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[32] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[33] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[34] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[35] = 2U;
    __Vtable1_singlecycle__DOT__o_imm_src[36] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[37] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[38] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[39] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[40] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[41] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[42] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[43] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[44] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[45] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[46] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[47] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[48] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[49] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[50] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[51] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[52] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[53] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[54] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[55] = 4U;
    __Vtable1_singlecycle__DOT__o_imm_src[56] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[57] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[58] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[59] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[60] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[61] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[62] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[63] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[64] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[65] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[66] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[67] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[68] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[69] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[70] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[71] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[72] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[73] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[74] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[75] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[76] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[77] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[78] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[79] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[80] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[81] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[82] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[83] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[84] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[85] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[86] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[87] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[88] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[89] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[90] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[91] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[92] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[93] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[94] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[95] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[96] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[97] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[98] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[99] = 3U;
    __Vtable1_singlecycle__DOT__o_imm_src[100] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[101] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[102] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[103] = 1U;
    __Vtable1_singlecycle__DOT__o_imm_src[104] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[105] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[106] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[107] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[108] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[109] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[110] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[111] = 5U;
    __Vtable1_singlecycle__DOT__o_imm_src[112] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[113] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[114] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[115] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[116] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[117] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[118] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[119] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[120] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[121] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[122] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[123] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[124] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[125] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[126] = 0U;
    __Vtable1_singlecycle__DOT__o_imm_src[127] = 0U;
    __Vchglast__TOP__singlecycle__DOT__o_rd_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<5; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}

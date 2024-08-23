// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_singlecycle__Syms.h"


void Vriscv_singlecycle::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vriscv_singlecycle::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+0,(((IData)(4U) + vlTOPp->singlecycle__DOT__i_pc)),32);
            tracep->chgIData(oldp+1,(vlTOPp->singlecycle__DOT__i_pc),32);
            tracep->chgSData(oldp+2,((0x3fffU & vlTOPp->singlecycle__DOT__i_pc)),14);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+3,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[0]),32);
            tracep->chgIData(oldp+4,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[1]),32);
            tracep->chgIData(oldp+5,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[2]),32);
            tracep->chgIData(oldp+6,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[3]),32);
            tracep->chgIData(oldp+7,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[4]),32);
            tracep->chgIData(oldp+8,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[5]),32);
            tracep->chgIData(oldp+9,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[6]),32);
            tracep->chgIData(oldp+10,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[7]),32);
            tracep->chgIData(oldp+11,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[8]),32);
            tracep->chgIData(oldp+12,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[9]),32);
            tracep->chgIData(oldp+13,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[10]),32);
            tracep->chgIData(oldp+14,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[11]),32);
            tracep->chgIData(oldp+15,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[12]),32);
            tracep->chgIData(oldp+16,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[13]),32);
            tracep->chgIData(oldp+17,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[14]),32);
            tracep->chgIData(oldp+18,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[15]),32);
            tracep->chgIData(oldp+19,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[16]),32);
            tracep->chgIData(oldp+20,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[17]),32);
            tracep->chgIData(oldp+21,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[18]),32);
            tracep->chgIData(oldp+22,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[19]),32);
            tracep->chgIData(oldp+23,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[20]),32);
            tracep->chgIData(oldp+24,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[21]),32);
            tracep->chgIData(oldp+25,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[22]),32);
            tracep->chgIData(oldp+26,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[23]),32);
            tracep->chgIData(oldp+27,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[24]),32);
            tracep->chgIData(oldp+28,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[25]),32);
            tracep->chgIData(oldp+29,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[26]),32);
            tracep->chgIData(oldp+30,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[27]),32);
            tracep->chgIData(oldp+31,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[28]),32);
            tracep->chgIData(oldp+32,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[29]),32);
            tracep->chgIData(oldp+33,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[30]),32);
            tracep->chgIData(oldp+34,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[31]),32);
            tracep->chgIData(oldp+35,(vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__i),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgIData(oldp+36,(vlTOPp->singlecycle__DOT__o_alu_result),32);
            tracep->chgIData(oldp+37,(((2U >= (IData)(vlTOPp->singlecycle__DOT__o_pc_src))
                                        ? vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr
                                       [vlTOPp->singlecycle__DOT__o_pc_src]
                                        : 0U)),32);
            tracep->chgCData(oldp+38,(vlTOPp->singlecycle__DOT__o_pc_src),2);
            tracep->chgIData(oldp+39,(vlTOPp->singlecycle__DOT__o_imem),32);
            tracep->chgIData(oldp+40,(vlTOPp->singlecycle__DOT__o_regfile_rs2_data),32);
            tracep->chgBit(oldp+41,(((0x33U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem))
                                      ? 1U : ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 1U
                                               : ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->singlecycle__DOT__o_imem))
                                                    ? 1U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->singlecycle__DOT__o_imem))
                                                     ? 1U
                                                     : 0U)))))));
            tracep->chgIData(oldp+42,(vlTOPp->singlecycle__DOT__o_imm_dec),32);
            tracep->chgCData(oldp+43,(vlTOPp->singlecycle__DOT__o_imm_src),3);
            tracep->chgBit(oldp+44,(((0x33U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem))
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 0U
                                               : ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 0U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->singlecycle__DOT__o_imem))
                                                    ? 0U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->singlecycle__DOT__o_imem))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->singlecycle__DOT__o_imem))
                                                      ? 0U
                                                      : 1U))))))));
            tracep->chgBit(oldp+45,(((0x33U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem))
                                      ? 0U : ((0x13U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 1U
                                               : ((3U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 1U
                                                   : 
                                                  ((0x67U 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->singlecycle__DOT__o_imem))
                                                    ? 1U
                                                    : 
                                                   ((0x23U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->singlecycle__DOT__o_imem))
                                                     ? 0U
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->singlecycle__DOT__o_imem))
                                                      ? 0U
                                                      : 1U))))))));
            tracep->chgIData(oldp+46,(vlTOPp->singlecycle__DOT__o_alu_mux_a),32);
            tracep->chgIData(oldp+47,(vlTOPp->singlecycle__DOT__o_alu_mux_b),32);
            tracep->chgCData(oldp+48,(vlTOPp->singlecycle__DOT__o_alu_control),4);
            tracep->chgBit(oldp+49,((0U == vlTOPp->singlecycle__DOT__o_alu_result)));
            tracep->chgBit(oldp+50,(((0x23U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem))
                                      ? 1U : 0U)));
            tracep->chgCData(oldp+51,(vlTOPp->singlecycle__DOT__o_dmem_byte_sel),4);
            tracep->chgCData(oldp+52,(((3U == (0x7fU 
                                               & vlTOPp->singlecycle__DOT__o_imem))
                                        ? 1U : (((0x67U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem)) 
                                                 | (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->singlecycle__DOT__o_imem)))
                                                 ? 2U
                                                 : 3U))),2);
            tracep->chgWData(oldp+53,(vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data),96);
            tracep->chgIData(oldp+56,(vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+57,(vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+58,(vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[2]),32);
            tracep->chgCData(oldp+59,((0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                                >> 0xfU))),5);
            tracep->chgCData(oldp+60,((0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+61,((0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                                >> 7U))),5);
            tracep->chgQData(oldp+62,(vlTOPp->singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data),64);
            tracep->chgIData(oldp+64,(vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+65,(vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr[1]),32);
            tracep->chgQData(oldp+66,(vlTOPp->singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data),64);
            tracep->chgIData(oldp+68,(vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+69,(vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr[1]),32);
            tracep->chgSData(oldp+70,((0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result)),14);
            tracep->chgCData(oldp+71,((0x7fU & vlTOPp->singlecycle__DOT__o_imem)),7);
            tracep->chgCData(oldp+72,((7U & (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 0xcU))),3);
            tracep->chgBit(oldp+73,((1U & (vlTOPp->singlecycle__DOT__o_imem 
                                           >> 0x1eU))));
            tracep->chgBit(oldp+74,(((0x63U == (0x7fU 
                                                & vlTOPp->singlecycle__DOT__o_imem)) 
                                     & ((0x4000U & vlTOPp->singlecycle__DOT__o_imem)
                                         ? ((0x2000U 
                                             & vlTOPp->singlecycle__DOT__o_imem)
                                             ? ((0x1000U 
                                                 & vlTOPp->singlecycle__DOT__o_imem)
                                                 ? 
                                                (0U 
                                                 == vlTOPp->singlecycle__DOT__o_alu_result)
                                                 : 
                                                (0U 
                                                 != vlTOPp->singlecycle__DOT__o_alu_result))
                                             : ((0x1000U 
                                                 & vlTOPp->singlecycle__DOT__o_imem)
                                                 ? 
                                                (0U 
                                                 == vlTOPp->singlecycle__DOT__o_alu_result)
                                                 : 
                                                (0U 
                                                 != vlTOPp->singlecycle__DOT__o_alu_result)))
                                         : ((~ (vlTOPp->singlecycle__DOT__o_imem 
                                                >> 0xdU)) 
                                            & ((0x1000U 
                                                & vlTOPp->singlecycle__DOT__o_imem)
                                                ? (0U 
                                                   != vlTOPp->singlecycle__DOT__o_alu_result)
                                                : (0U 
                                                   == vlTOPp->singlecycle__DOT__o_alu_result)))))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgIData(oldp+75,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr
                                      [vlTOPp->singlecycle__DOT__o_src_rd]),32);
            tracep->chgIData(oldp+76,(vlTOPp->singlecycle__DOT__o_rd_data),32);
            tracep->chgWData(oldp+77,(vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data),128);
            tracep->chgIData(oldp+81,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+82,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+83,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[2]),32);
            tracep->chgIData(oldp+84,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[3]),32);
        }
        tracep->chgBit(oldp+85,(vlTOPp->i_clk));
        tracep->chgBit(oldp+86,(vlTOPp->i_rstn));
        tracep->chgIData(oldp+87,((vlTOPp->singlecycle__DOT__i_pc 
                                   + vlTOPp->singlecycle__DOT__o_imm_dec)),32);
        tracep->chgIData(oldp+88,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers
                                  [(0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 0xfU))]),32);
    }
}

void Vriscv_singlecycle::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
    }
}

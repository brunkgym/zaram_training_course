// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


void Vriscv_top::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vriscv_top::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgWData(oldp+0,(vlTOPp->riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF),1024);
            tracep->chgWData(oldp+32,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF),1024);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+64,(vlTOPp->riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__imem_arr
                                      [(0x3fffU & vlTOPp->riscv_top__DOT__o_pc_f)]),32);
            tracep->chgIData(oldp+65,(((IData)(4U) 
                                       + vlTOPp->riscv_top__DOT__o_pc_f)),32);
            tracep->chgIData(oldp+66,(vlTOPp->riscv_top__DOT__o_pc_f),32);
            tracep->chgIData(oldp+67,(vlTOPp->riscv_top__DOT__o_pc_plus_4_d),32);
            tracep->chgCData(oldp+68,(vlTOPp->riscv_top__DOT__o_result_src_e),2);
            tracep->chgBit(oldp+69,(vlTOPp->riscv_top__DOT__o_alu_src_e));
            tracep->chgCData(oldp+70,(vlTOPp->riscv_top__DOT__o_alu_control_e),4);
            tracep->chgBit(oldp+71,(vlTOPp->riscv_top__DOT__o_jump_e));
            tracep->chgBit(oldp+72,(vlTOPp->riscv_top__DOT__o_branch_e));
            tracep->chgIData(oldp+73,(vlTOPp->riscv_top__DOT__o_rd1_e),32);
            tracep->chgIData(oldp+74,(vlTOPp->riscv_top__DOT__o_rd2_e),32);
            tracep->chgCData(oldp+75,(vlTOPp->riscv_top__DOT__o_rs1_e),5);
            tracep->chgCData(oldp+76,(vlTOPp->riscv_top__DOT__o_rs2_e),5);
            tracep->chgIData(oldp+77,(vlTOPp->riscv_top__DOT__o_extimm_e),32);
            tracep->chgIData(oldp+78,(vlTOPp->riscv_top__DOT__o_pc_plus_4_e),32);
            tracep->chgIData(oldp+79,(vlTOPp->riscv_top__DOT__o_pc_e),32);
            tracep->chgBit(oldp+80,(vlTOPp->riscv_top__DOT__o_zero_condition_e));
            tracep->chgIData(oldp+81,((vlTOPp->riscv_top__DOT__o_pc_e 
                                       + vlTOPp->riscv_top__DOT__o_extimm_e)),32);
            tracep->chgCData(oldp+82,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),2);
            tracep->chgIData(oldp+83,(vlTOPp->riscv_top__DOT__o_pc_plus_4_m),32);
            tracep->chgCData(oldp+84,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1)),2);
            tracep->chgIData(oldp+85,(vlTOPp->riscv_top__DOT__o_alu_result_w),32);
            tracep->chgIData(oldp+86,(vlTOPp->riscv_top__DOT__o_read_data_w),32);
            tracep->chgIData(oldp+87,(vlTOPp->riscv_top__DOT__o_pc_plus_4_w),32);
            tracep->chgSData(oldp+88,((0x3fffU & vlTOPp->riscv_top__DOT__o_pc_f)),14);
            tracep->chgQData(oldp+89,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
            tracep->chgIData(oldp+91,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1),32);
            tracep->chgIData(oldp+92,(vlTOPp->riscv_top__DOT__o_result_src_e),32);
            tracep->chgIData(oldp+93,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1),32);
            tracep->chgIData(oldp+94,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),32);
            tracep->chgWData(oldp+95,(vlTOPp->riscv_top__DOT____Vcellinp__u_mux_result__i_mux_concat_data),96);
            tracep->chgIData(oldp+98,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+99,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+100,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[2]),32);
            tracep->chgBit(oldp+101,((1U & (IData)(vlTOPp->riscv_top__DOT__o_result_src_e))));
            tracep->chgQData(oldp+102,(vlTOPp->riscv_top__DOT____Vcellinp__u_mux_pcf__i_mux_concat_data),64);
            tracep->chgIData(oldp+104,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+105,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[1]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+106,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr
                                       [vlTOPp->riscv_top__DOT__o_pc_src_e]),32);
            tracep->chgBit(oldp+107,((((~ (IData)(vlTOPp->riscv_top__DOT__o_zero_condition_e)) 
                                       & (0U == vlTOPp->riscv_top__DOT__o_alu_result_e)) 
                                      | ((IData)(vlTOPp->riscv_top__DOT__o_zero_condition_e) 
                                         & (0U != vlTOPp->riscv_top__DOT__o_alu_result_e)))));
            tracep->chgBit(oldp+108,((((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                         == (0x1fU 
                                             & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                        & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                       & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                       ? 0U : (((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                                  == 
                                                  (0x1fU 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                 & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                & (0U 
                                                   != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                                ? 1U
                                                : 0U))));
            tracep->chgBit(oldp+109,((((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                         == (0x1fU 
                                             & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                        & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                       & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                       ? 0U : (((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                                  == 
                                                  (0x1fU 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                 & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                & (0U 
                                                   != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                                ? 1U
                                                : 0U))));
            tracep->chgCData(oldp+110,((((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                         ? 0U : (((
                                                   ((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+111,((((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                         ? 0U : (((
                                                   ((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+112,((((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                         ? 2U : (((
                                                   ((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+113,((((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                         ? 2U : (((
                                                   ((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                                  ? 1U
                                                  : 0U))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+114,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
            tracep->chgIData(oldp+115,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
            tracep->chgIData(oldp+116,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
            tracep->chgIData(oldp+117,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
            tracep->chgIData(oldp+118,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
            tracep->chgIData(oldp+119,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
            tracep->chgIData(oldp+120,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
            tracep->chgIData(oldp+121,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
            tracep->chgIData(oldp+122,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
            tracep->chgIData(oldp+123,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
            tracep->chgIData(oldp+124,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
            tracep->chgIData(oldp+125,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
            tracep->chgIData(oldp+126,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
            tracep->chgIData(oldp+127,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
            tracep->chgIData(oldp+128,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
            tracep->chgIData(oldp+129,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
            tracep->chgIData(oldp+130,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
            tracep->chgIData(oldp+131,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
            tracep->chgIData(oldp+132,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
            tracep->chgIData(oldp+133,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
            tracep->chgIData(oldp+134,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
            tracep->chgIData(oldp+135,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
            tracep->chgIData(oldp+136,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
            tracep->chgIData(oldp+137,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
            tracep->chgIData(oldp+138,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
            tracep->chgIData(oldp+139,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
            tracep->chgIData(oldp+140,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
            tracep->chgIData(oldp+141,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
            tracep->chgIData(oldp+142,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
            tracep->chgIData(oldp+143,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
            tracep->chgIData(oldp+144,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
            tracep->chgIData(oldp+145,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+146,(vlTOPp->riscv_top__DOT__o_pc_src_e));
            tracep->chgIData(oldp+147,(vlTOPp->riscv_top__DOT__o_instr_d),32);
            tracep->chgIData(oldp+148,(vlTOPp->riscv_top__DOT__o_pc_d),32);
            tracep->chgBit(oldp+149,(vlTOPp->riscv_top__DOT__u_riscv_hazard_unit__DOT__lwstall));
            tracep->chgCData(oldp+150,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+151,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+152,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+153,(((3U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))
                                         ? 1U : (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->riscv_top__DOT__o_instr_d)))
                                                  ? 2U
                                                  : 0U))),2);
            tracep->chgBit(oldp+154,(vlTOPp->riscv_top__DOT__o_alu_src_d));
            tracep->chgBit(oldp+155,((1U & (~ ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instr_d)))))));
            tracep->chgBit(oldp+156,((0x23U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))));
            tracep->chgCData(oldp+157,((((3U == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d)))
                                         ? ((0x4000U 
                                             & vlTOPp->riscv_top__DOT__o_instr_d)
                                             ? ((0x2000U 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)
                                                 ? 0xfU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U))
                                             : ((0x2000U 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)
                                                 ? 0xfU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U)))
                                         : 0xfU)),4);
            tracep->chgCData(oldp+158,(vlTOPp->riscv_top__DOT__o_alu_control_d),4);
            tracep->chgBit(oldp+159,((0x6fU == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))));
            tracep->chgBit(oldp+160,((0x63U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))));
            tracep->chgIData(oldp+161,(vlTOPp->riscv_top__DOT__o_extimm_d),32);
            tracep->chgBit(oldp+162,(((0x63U == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                      & ((0x4000U & vlTOPp->riscv_top__DOT__o_instr_d)
                                          ? ((0x2000U 
                                              & vlTOPp->riscv_top__DOT__o_instr_d)
                                              ? (~ 
                                                 (vlTOPp->riscv_top__DOT__o_instr_d 
                                                  >> 0xcU))
                                              : (~ 
                                                 (vlTOPp->riscv_top__DOT__o_instr_d 
                                                  >> 0xcU)))
                                          : ((~ (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 0xdU)) 
                                             & (vlTOPp->riscv_top__DOT__o_instr_d 
                                                >> 0xcU))))));
            tracep->chgIData(oldp+163,(vlTOPp->riscv_top__DOT__o_result_w),32);
            tracep->chgCData(oldp+164,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)),5);
            tracep->chgBit(oldp+165,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0)));
            tracep->chgBit(oldp+166,(vlTOPp->riscv_top__DOT__o_reg_write_e));
            tracep->chgBit(oldp+167,(vlTOPp->riscv_top__DOT__o_mem_write_e));
            tracep->chgCData(oldp+168,(vlTOPp->riscv_top__DOT__o_mem_byte_sel_e),4);
            tracep->chgIData(oldp+169,(vlTOPp->riscv_top__DOT__o_rd_e),32);
            tracep->chgBit(oldp+170,(vlTOPp->riscv_top__DOT__o_flush_e));
            tracep->chgIData(oldp+171,(vlTOPp->riscv_top__DOT__o_alu_result_e),32);
            tracep->chgIData(oldp+172,(vlTOPp->riscv_top__DOT__o_write_data_e),32);
            tracep->chgBit(oldp+173,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)));
            tracep->chgBit(oldp+174,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2)));
            tracep->chgCData(oldp+175,((0xfU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3)),4);
            tracep->chgIData(oldp+176,(vlTOPp->riscv_top__DOT__o_alu_result_m),32);
            tracep->chgIData(oldp+177,(vlTOPp->riscv_top__DOT__o_write_data_m),32);
            tracep->chgCData(oldp+178,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),5);
            tracep->chgCData(oldp+179,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d),3);
            tracep->chgIData(oldp+180,(((0x37U == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instr_d))
                                         ? vlTOPp->riscv_top__DOT__o_extimm_d
                                         : ((0x17U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d))
                                             ? (vlTOPp->riscv_top__DOT__o_pc_d 
                                                + vlTOPp->riscv_top__DOT__o_extimm_d)
                                             : vlTOPp->riscv_top__DOT__o_result_w))),32);
            tracep->chgBit(oldp+181,((1U & (((0x37U 
                                              == (0x7fU 
                                                  & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d))) 
                                            | vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0))));
            tracep->chgBit(oldp+182,((0x17U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))));
            tracep->chgBit(oldp+183,((0x37U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))));
            tracep->chgCData(oldp+184,((0x7fU & vlTOPp->riscv_top__DOT__o_instr_d)),7);
            tracep->chgCData(oldp+185,((7U & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+186,((1U & (vlTOPp->riscv_top__DOT__o_instr_d 
                                            >> 0x1eU))));
            tracep->chgWData(oldp+187,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR),256);
            tracep->chgIData(oldp+195,((0x1ffffffU 
                                        & (vlTOPp->riscv_top__DOT__o_instr_d 
                                           >> 7U))),32);
            tracep->chgIData(oldp+196,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 7U))),32);
            tracep->chgIData(oldp+197,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__o_src_a_e),32);
            tracep->chgIData(oldp+198,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__o_src_b_e),32);
            tracep->chgWData(oldp+199,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_a__i_mux_concat_data),96);
            tracep->chgIData(oldp+202,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+203,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+204,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[2]),32);
            tracep->chgWData(oldp+205,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_b__i_mux_concat_data),96);
            tracep->chgIData(oldp+208,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+209,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+210,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[2]),32);
            tracep->chgQData(oldp+211,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_b__i_mux_concat_data),64);
            tracep->chgIData(oldp+213,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+214,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+215,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0),32);
            tracep->chgIData(oldp+216,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2),32);
            tracep->chgIData(oldp+217,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3),32);
            tracep->chgIData(oldp+218,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6),32);
            tracep->chgIData(oldp+219,(vlTOPp->riscv_top__DOT__o_reg_write_e),32);
            tracep->chgIData(oldp+220,(vlTOPp->riscv_top__DOT__o_mem_write_e),32);
            tracep->chgIData(oldp+221,(vlTOPp->riscv_top__DOT__o_mem_byte_sel_e),32);
            tracep->chgSData(oldp+222,((0x3fffU & vlTOPp->riscv_top__DOT__o_alu_result_m)),14);
            tracep->chgIData(oldp+223,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0),32);
            tracep->chgIData(oldp+224,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4),32);
            tracep->chgIData(oldp+225,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)),32);
            tracep->chgIData(oldp+226,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),32);
            tracep->chgCData(oldp+227,((0x1fU & vlTOPp->riscv_top__DOT__o_rd_e)),5);
        }
        tracep->chgBit(oldp+228,(vlTOPp->i_clk));
        tracep->chgBit(oldp+229,(vlTOPp->i_rstn));
        tracep->chgIData(oldp+230,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+231,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0x14U))]),32);
        tracep->chgIData(oldp+232,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                   [(0x3fffU & vlTOPp->riscv_top__DOT__o_alu_result_m)]),32);
        tracep->chgIData(oldp+233,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__i),32);
    }
}

void Vriscv_top::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}

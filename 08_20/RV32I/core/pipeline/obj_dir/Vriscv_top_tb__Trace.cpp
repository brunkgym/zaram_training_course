// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top_tb__Syms.h"


void Vriscv_top_tb::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vriscv_top_tb::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgBit(oldp+0,(vlTOPp->riscv_top_tb__DOT__i_rstn));
            tracep->chgWData(oldp+1,(vlTOPp->riscv_top_tb__DOT__taskState),256);
            tracep->chgIData(oldp+9,(vlTOPp->riscv_top_tb__DOT__i),32);
            tracep->chgWData(oldp+10,(vlTOPp->riscv_top_tb__DOT__vcd_file),256);
            tracep->chgWData(oldp+18,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF),1024);
            tracep->chgWData(oldp+50,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF),1024);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+82,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__imem_arr
                                      [(0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f)]),32);
            tracep->chgIData(oldp+83,(((IData)(4U) 
                                       + vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f)),32);
            tracep->chgIData(oldp+84,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f),32);
            tracep->chgIData(oldp+85,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_d),32);
            tracep->chgCData(oldp+86,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_src_e),2);
            tracep->chgBit(oldp+87,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_src_e));
            tracep->chgCData(oldp+88,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_control_e),4);
            tracep->chgBit(oldp+89,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_jump_e));
            tracep->chgBit(oldp+90,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_branch_e));
            tracep->chgIData(oldp+91,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd1_e),32);
            tracep->chgIData(oldp+92,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd2_e),32);
            tracep->chgCData(oldp+93,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e),5);
            tracep->chgCData(oldp+94,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e),5);
            tracep->chgIData(oldp+95,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_e),32);
            tracep->chgIData(oldp+96,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_e),32);
            tracep->chgIData(oldp+97,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_e),32);
            tracep->chgBit(oldp+98,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_zero_condition_e));
            tracep->chgIData(oldp+99,((vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_e 
                                       + vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_e)),32);
            tracep->chgCData(oldp+100,((3U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),2);
            tracep->chgIData(oldp+101,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_m),32);
            tracep->chgCData(oldp+102,((3U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1)),2);
            tracep->chgIData(oldp+103,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_w),32);
            tracep->chgIData(oldp+104,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_read_data_w),32);
            tracep->chgIData(oldp+105,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_w),32);
            tracep->chgSData(oldp+106,((0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f)),14);
            tracep->chgQData(oldp+107,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
            tracep->chgIData(oldp+109,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1),32);
            tracep->chgIData(oldp+110,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_src_e),32);
            tracep->chgIData(oldp+111,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1),32);
            tracep->chgIData(oldp+112,((3U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),32);
            tracep->chgWData(oldp+113,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellinp__u_mux_result__i_mux_concat_data),96);
            tracep->chgIData(oldp+116,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_result__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+117,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_result__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+118,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_result__DOT__mux_input_arr[2]),32);
            tracep->chgBit(oldp+119,((1U & (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_src_e))));
            tracep->chgQData(oldp+120,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellinp__u_mux_pcf__i_mux_concat_data),64);
            tracep->chgIData(oldp+122,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+123,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[1]),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [3U]))) {
            tracep->chgIData(oldp+124,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr
                                       [vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_src_e]),32);
            tracep->chgBit(oldp+125,((((~ (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_zero_condition_e)) 
                                       & (0U == vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_e)) 
                                      | ((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_zero_condition_e) 
                                         & (0U != vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_e)))));
            tracep->chgBit(oldp+126,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                         == (0x1fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                        & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                       & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                       ? 0U : (((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                                  == 
                                                  (0x1fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                & (0U 
                                                   != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                                ? 1U
                                                : 0U))));
            tracep->chgBit(oldp+127,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                         == (0x1fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                        & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                       & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                       ? 0U : (((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                                  == 
                                                  (0x1fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                & (0U 
                                                   != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                                ? 1U
                                                : 0U))));
            tracep->chgCData(oldp+128,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                         ? 0U : (((
                                                   ((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+129,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                         ? 0U : (((
                                                   ((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+130,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                         ? 2U : (((
                                                   ((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                                  ? 1U
                                                  : 0U))),2);
            tracep->chgCData(oldp+131,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                           == (0x1fU 
                                               & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                          & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                         & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                         ? 2U : (((
                                                   ((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                                    == 
                                                    (0x1fU 
                                                     & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                                  & (0U 
                                                     != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                                  ? 1U
                                                  : 0U))),2);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgIData(oldp+132,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
            tracep->chgIData(oldp+133,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
            tracep->chgIData(oldp+134,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
            tracep->chgIData(oldp+135,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
            tracep->chgIData(oldp+136,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
            tracep->chgIData(oldp+137,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
            tracep->chgIData(oldp+138,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
            tracep->chgIData(oldp+139,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
            tracep->chgIData(oldp+140,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
            tracep->chgIData(oldp+141,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
            tracep->chgIData(oldp+142,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
            tracep->chgIData(oldp+143,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
            tracep->chgIData(oldp+144,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
            tracep->chgIData(oldp+145,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
            tracep->chgIData(oldp+146,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
            tracep->chgIData(oldp+147,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
            tracep->chgIData(oldp+148,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
            tracep->chgIData(oldp+149,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
            tracep->chgIData(oldp+150,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
            tracep->chgIData(oldp+151,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
            tracep->chgIData(oldp+152,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
            tracep->chgIData(oldp+153,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
            tracep->chgIData(oldp+154,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
            tracep->chgIData(oldp+155,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
            tracep->chgIData(oldp+156,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
            tracep->chgIData(oldp+157,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
            tracep->chgIData(oldp+158,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
            tracep->chgIData(oldp+159,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
            tracep->chgIData(oldp+160,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
            tracep->chgIData(oldp+161,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
            tracep->chgIData(oldp+162,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
            tracep->chgIData(oldp+163,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+164,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_src_e));
            tracep->chgIData(oldp+165,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d),32);
            tracep->chgIData(oldp+166,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_d),32);
            tracep->chgBit(oldp+167,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_hazard_unit__DOT__lwstall));
            tracep->chgCData(oldp+168,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 0xfU))),5);
            tracep->chgCData(oldp+169,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 0x14U))),5);
            tracep->chgCData(oldp+170,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 7U))),5);
            tracep->chgCData(oldp+171,(((3U == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))
                                         ? 1U : (((0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                                  | (0x67U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)))
                                                  ? 2U
                                                  : 0U))),2);
            tracep->chgBit(oldp+172,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_src_d));
            tracep->chgBit(oldp+173,((1U & (~ ((0x23U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                               | (0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)))))));
            tracep->chgBit(oldp+174,((0x23U == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
            tracep->chgCData(oldp+175,((((3U == (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                         | (0x23U == 
                                            (0x7fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)))
                                         ? ((0x4000U 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                             ? ((0x2000U 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                                 ? 0xfU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U))
                                             : ((0x2000U 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                                 ? 0xfU
                                                 : 
                                                ((0x1000U 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U)))
                                         : 0xfU)),4);
            tracep->chgCData(oldp+176,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_control_d),4);
            tracep->chgBit(oldp+177,((0x6fU == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
            tracep->chgBit(oldp+178,((0x63U == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
            tracep->chgIData(oldp+179,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_d),32);
            tracep->chgBit(oldp+180,(((0x63U == (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                      & ((0x4000U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                          ? ((0x2000U 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                              ? (~ 
                                                 (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                  >> 0xcU))
                                              : (~ 
                                                 (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                  >> 0xcU)))
                                          : ((~ (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 0xdU)) 
                                             & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                >> 0xcU))))));
            tracep->chgIData(oldp+181,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_w),32);
            tracep->chgCData(oldp+182,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)),5);
            tracep->chgBit(oldp+183,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0)));
            tracep->chgBit(oldp+184,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_reg_write_e));
            tracep->chgBit(oldp+185,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_write_e));
            tracep->chgCData(oldp+186,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_byte_sel_e),4);
            tracep->chgIData(oldp+187,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd_e),32);
            tracep->chgBit(oldp+188,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_flush_e));
            tracep->chgIData(oldp+189,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_e),32);
            tracep->chgIData(oldp+190,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_write_data_e),32);
            tracep->chgBit(oldp+191,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)));
            tracep->chgBit(oldp+192,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2)));
            tracep->chgCData(oldp+193,((0xfU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3)),4);
            tracep->chgIData(oldp+194,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_m),32);
            tracep->chgIData(oldp+195,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_write_data_m),32);
            tracep->chgCData(oldp+196,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),5);
            tracep->chgCData(oldp+197,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d),3);
            tracep->chgIData(oldp+198,(((0x37U == (0x7fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))
                                         ? vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_d
                                         : ((0x17U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))
                                             ? (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_d 
                                                + vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_d)
                                             : vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_w))),32);
            tracep->chgBit(oldp+199,((1U & (((0x37U 
                                              == (0x7fU 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))) 
                                            | vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0))));
            tracep->chgBit(oldp+200,((0x17U == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
            tracep->chgBit(oldp+201,((0x37U == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
            tracep->chgCData(oldp+202,((0x7fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)),7);
            tracep->chgCData(oldp+203,((7U & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+204,((1U & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                            >> 0x1eU))));
            tracep->chgWData(oldp+205,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR),256);
            tracep->chgIData(oldp+213,((0x1ffffffU 
                                        & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                           >> 7U))),32);
            tracep->chgIData(oldp+214,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 7U))),32);
            tracep->chgIData(oldp+215,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__o_src_a_e),32);
            tracep->chgIData(oldp+216,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__o_src_b_e),32);
            tracep->chgWData(oldp+217,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_a__i_mux_concat_data),96);
            tracep->chgIData(oldp+220,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+221,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+222,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[2]),32);
            tracep->chgWData(oldp+223,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_b__i_mux_concat_data),96);
            tracep->chgIData(oldp+226,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+227,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+228,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[2]),32);
            tracep->chgQData(oldp+229,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_b__i_mux_concat_data),64);
            tracep->chgIData(oldp+231,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[0]),32);
            tracep->chgIData(oldp+232,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[1]),32);
            tracep->chgIData(oldp+233,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0),32);
            tracep->chgIData(oldp+234,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2),32);
            tracep->chgIData(oldp+235,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3),32);
            tracep->chgIData(oldp+236,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6),32);
            tracep->chgIData(oldp+237,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_reg_write_e),32);
            tracep->chgIData(oldp+238,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_write_e),32);
            tracep->chgIData(oldp+239,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_byte_sel_e),32);
            tracep->chgSData(oldp+240,((0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_m)),14);
            tracep->chgIData(oldp+241,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0),32);
            tracep->chgIData(oldp+242,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4),32);
            tracep->chgIData(oldp+243,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)),32);
            tracep->chgIData(oldp+244,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),32);
            tracep->chgCData(oldp+245,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd_e)),5);
        }
        tracep->chgBit(oldp+246,(vlTOPp->riscv_top_tb__DOT__i_clk));
        tracep->chgIData(oldp+247,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 0xfU))]),32);
        tracep->chgIData(oldp+248,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 0x14U))]),32);
        tracep->chgIData(oldp+249,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                   [(0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_m)]),32);
        tracep->chgIData(oldp+250,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__i),32);
    }
}

void Vriscv_top_tb::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
    }
}

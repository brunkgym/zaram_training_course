// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_singlecycle__Syms.h"


//======================

void Vriscv_singlecycle::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vriscv_singlecycle::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_singlecycle::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vriscv_singlecycle::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vriscv_singlecycle::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+86,"i_clk", false,-1);
        tracep->declBit(c+87,"i_rstn", false,-1);
        tracep->declBit(c+86,"singlecycle i_clk", false,-1);
        tracep->declBit(c+87,"singlecycle i_rstn", false,-1);
        tracep->declBus(c+37,"singlecycle o_alu_result", false,-1, 31,0);
        tracep->declBus(c+38,"singlecycle o_pc_next", false,-1, 31,0);
        tracep->declBus(c+1,"singlecycle o_pc_plus", false,-1, 31,0);
        tracep->declBus(c+88,"singlecycle o_pc_target", false,-1, 31,0);
        tracep->declBus(c+39,"singlecycle o_pc_src", false,-1, 1,0);
        tracep->declBus(c+2,"singlecycle i_pc", false,-1, 31,0);
        tracep->declBus(c+40,"singlecycle o_imem", false,-1, 31,0);
        tracep->declBus(c+89,"singlecycle o_regfile_rs1_data", false,-1, 31,0);
        tracep->declBus(c+41,"singlecycle o_regfile_rs2_data", false,-1, 31,0);
        tracep->declBus(c+76,"singlecycle o_reg_rd_data", false,-1, 31,0);
        tracep->declBit(c+42,"singlecycle o_reg_wr_en", false,-1);
        tracep->declBus(c+43,"singlecycle o_imm_dec", false,-1, 31,0);
        tracep->declBus(c+44,"singlecycle o_imm_src", false,-1, 2,0);
        tracep->declBit(c+45,"singlecycle o_alu_src_a", false,-1);
        tracep->declBit(c+46,"singlecycle o_alu_src_b", false,-1);
        tracep->declBus(c+47,"singlecycle o_alu_mux_a", false,-1, 31,0);
        tracep->declBus(c+48,"singlecycle o_alu_mux_b", false,-1, 31,0);
        tracep->declBus(c+49,"singlecycle o_alu_control", false,-1, 3,0);
        tracep->declBit(c+50,"singlecycle o_alu_zero", false,-1);
        tracep->declBus(c+77,"singlecycle o_rd_data", false,-1, 31,0);
        tracep->declBus(c+41,"singlecycle i_wr_data", false,-1, 31,0);
        tracep->declBit(c+51,"singlecycle o_mem_wr_en", false,-1);
        tracep->declBus(c+52,"singlecycle o_dmem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+90,"singlecycle o_src_rd", false,-1, 1,0);
        tracep->declBus(c+53,"singlecycle o_result_src", false,-1, 1,0);
        tracep->declBus(c+91,"singlecycle pc_next_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+38,"singlecycle pc_next_mux o_mux_data", false,-1, 31,0);
        tracep->declArray(c+54,"singlecycle pc_next_mux i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+39,"singlecycle pc_next_mux i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+57+i*1,"singlecycle pc_next_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+92,"singlecycle u_riscv_register REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+2,"singlecycle u_riscv_register o_register_q", false,-1, 31,0);
        tracep->declBus(c+38,"singlecycle u_riscv_register i_register_d", false,-1, 31,0);
        tracep->declBit(c+93,"singlecycle u_riscv_register i_register_en", false,-1);
        tracep->declBit(c+86,"singlecycle u_riscv_register i_clk", false,-1);
        tracep->declBit(c+87,"singlecycle u_riscv_register i_rstn", false,-1);
        tracep->declBus(c+40,"singlecycle u_riscv_imem o_imem_data", false,-1, 31,0);
        tracep->declBus(c+3,"singlecycle u_riscv_imem i_imem_addr", false,-1, 13,0);
        tracep->declBit(c+86,"singlecycle u_riscv_imem i_clk", false,-1);
        tracep->declBus(c+1,"singlecycle adder_pc_plus o_adder_out", false,-1, 31,0);
        tracep->declBus(c+2,"singlecycle adder_pc_plus i_adder_a", false,-1, 31,0);
        tracep->declBus(c+94,"singlecycle adder_pc_plus i_adder_b", false,-1, 31,0);
        tracep->declBus(c+89,"singlecycle u_riscv_regfile o_regfile_rs1_data", false,-1, 31,0);
        tracep->declBus(c+41,"singlecycle u_riscv_regfile o_regfile_rs2_data", false,-1, 31,0);
        tracep->declBus(c+60,"singlecycle u_riscv_regfile i_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+61,"singlecycle u_riscv_regfile i_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+76,"singlecycle u_riscv_regfile i_regfile_rd_data", false,-1, 31,0);
        tracep->declBus(c+62,"singlecycle u_riscv_regfile i_regfile_rd_addr", false,-1, 4,0);
        tracep->declBit(c+42,"singlecycle u_riscv_regfile i_regfile_rd_wen", false,-1);
        tracep->declBit(c+86,"singlecycle u_riscv_regfile i_clk", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+4+i*1,"singlecycle u_riscv_regfile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+43,"singlecycle u_riscv_immdec o_imm_dec", false,-1, 31,0);
        tracep->declBus(c+40,"singlecycle u_riscv_immdec i_imm_instr", false,-1, 31,0);
        tracep->declBus(c+44,"singlecycle u_riscv_immdec i_imm_src", false,-1, 2,0);
        tracep->declBus(c+88,"singlecycle adder_pc_target o_adder_out", false,-1, 31,0);
        tracep->declBus(c+2,"singlecycle adder_pc_target i_adder_a", false,-1, 31,0);
        tracep->declBus(c+43,"singlecycle adder_pc_target i_adder_b", false,-1, 31,0);
        tracep->declBus(c+95,"singlecycle src_a_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+47,"singlecycle src_a_mux o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+63,"singlecycle src_a_mux i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+45,"singlecycle src_a_mux i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+65+i*1,"singlecycle src_a_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+95,"singlecycle src_b_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+48,"singlecycle src_b_mux o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+67,"singlecycle src_b_mux i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+46,"singlecycle src_b_mux i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+69+i*1,"singlecycle src_b_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+37,"singlecycle u_riscv_alu o_alu_result", false,-1, 31,0);
        tracep->declBit(c+50,"singlecycle u_riscv_alu o_alu_zero", false,-1);
        tracep->declBus(c+47,"singlecycle u_riscv_alu i_alu_a", false,-1, 31,0);
        tracep->declBus(c+48,"singlecycle u_riscv_alu i_alu_b", false,-1, 31,0);
        tracep->declBus(c+49,"singlecycle u_riscv_alu i_alu_ctrl", false,-1, 3,0);
        tracep->declBus(c+77,"singlecycle u_riscv_dmem o_dmem_data", false,-1, 31,0);
        tracep->declBus(c+41,"singlecycle u_riscv_dmem i_dmem_data", false,-1, 31,0);
        tracep->declBus(c+71,"singlecycle u_riscv_dmem i_dmem_addr", false,-1, 13,0);
        tracep->declBus(c+52,"singlecycle u_riscv_dmem i_dmem_byte_sel", false,-1, 3,0);
        tracep->declBit(c+51,"singlecycle u_riscv_dmem i_dmem_wr_en", false,-1);
        tracep->declBit(c+86,"singlecycle u_riscv_dmem i_clk", false,-1);
        tracep->declBus(c+36,"singlecycle u_riscv_dmem i", false,-1, 31,0);
        tracep->declBus(c+96,"singlecycle result_mux N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+76,"singlecycle result_mux o_mux_data", false,-1, 31,0);
        tracep->declArray(c+78,"singlecycle result_mux i_mux_concat_data", false,-1, 127,0);
        tracep->declBus(c+90,"singlecycle result_mux i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+82+i*1,"singlecycle result_mux mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+39,"singlecycle u_riscv_control_unit o_pc_src", false,-1, 1,0);
        tracep->declBus(c+53,"singlecycle u_riscv_control_unit o_result_src", false,-1, 1,0);
        tracep->declBit(c+51,"singlecycle u_riscv_control_unit o_mem_wr_en", false,-1);
        tracep->declBus(c+49,"singlecycle u_riscv_control_unit o_alu_control", false,-1, 3,0);
        tracep->declBit(c+45,"singlecycle u_riscv_control_unit o_alu_src_a", false,-1);
        tracep->declBit(c+46,"singlecycle u_riscv_control_unit o_alu_src_b", false,-1);
        tracep->declBus(c+44,"singlecycle u_riscv_control_unit o_imm_src", false,-1, 2,0);
        tracep->declBit(c+42,"singlecycle u_riscv_control_unit o_reg_wr", false,-1);
        tracep->declBus(c+52,"singlecycle u_riscv_control_unit o_dmem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+72,"singlecycle u_riscv_control_unit i_op", false,-1, 6,0);
        tracep->declBus(c+73,"singlecycle u_riscv_control_unit i_funct3", false,-1, 2,0);
        tracep->declBit(c+74,"singlecycle u_riscv_control_unit i_funct7", false,-1);
        tracep->declBit(c+50,"singlecycle u_riscv_control_unit i_zero", false,-1);
        tracep->declBit(c+75,"singlecycle u_riscv_control_unit take_branch", false,-1);
    }
}

void Vriscv_singlecycle::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vriscv_singlecycle::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vriscv_singlecycle::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_singlecycle__Syms* __restrict vlSymsp = static_cast<Vriscv_singlecycle__Syms*>(userp);
    Vriscv_singlecycle* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(((IData)(4U) + vlTOPp->singlecycle__DOT__i_pc)),32);
        tracep->fullIData(oldp+2,(vlTOPp->singlecycle__DOT__i_pc),32);
        tracep->fullSData(oldp+3,((0x3fffU & vlTOPp->singlecycle__DOT__i_pc)),14);
        tracep->fullIData(oldp+4,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[0]),32);
        tracep->fullIData(oldp+5,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[1]),32);
        tracep->fullIData(oldp+6,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[2]),32);
        tracep->fullIData(oldp+7,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[3]),32);
        tracep->fullIData(oldp+8,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[4]),32);
        tracep->fullIData(oldp+9,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[5]),32);
        tracep->fullIData(oldp+10,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[6]),32);
        tracep->fullIData(oldp+11,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[7]),32);
        tracep->fullIData(oldp+12,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[8]),32);
        tracep->fullIData(oldp+13,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[9]),32);
        tracep->fullIData(oldp+14,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[10]),32);
        tracep->fullIData(oldp+15,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[11]),32);
        tracep->fullIData(oldp+16,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[12]),32);
        tracep->fullIData(oldp+17,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[13]),32);
        tracep->fullIData(oldp+18,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[14]),32);
        tracep->fullIData(oldp+19,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[15]),32);
        tracep->fullIData(oldp+20,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[16]),32);
        tracep->fullIData(oldp+21,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[17]),32);
        tracep->fullIData(oldp+22,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[18]),32);
        tracep->fullIData(oldp+23,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[19]),32);
        tracep->fullIData(oldp+24,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[20]),32);
        tracep->fullIData(oldp+25,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[21]),32);
        tracep->fullIData(oldp+26,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[22]),32);
        tracep->fullIData(oldp+27,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[23]),32);
        tracep->fullIData(oldp+28,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[24]),32);
        tracep->fullIData(oldp+29,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[25]),32);
        tracep->fullIData(oldp+30,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[26]),32);
        tracep->fullIData(oldp+31,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[27]),32);
        tracep->fullIData(oldp+32,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[28]),32);
        tracep->fullIData(oldp+33,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[29]),32);
        tracep->fullIData(oldp+34,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[30]),32);
        tracep->fullIData(oldp+35,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers[31]),32);
        tracep->fullIData(oldp+36,(vlTOPp->singlecycle__DOT__u_riscv_dmem__DOT__i),32);
        tracep->fullIData(oldp+37,(vlTOPp->singlecycle__DOT__o_alu_result),32);
        tracep->fullIData(oldp+38,(((2U >= (IData)(vlTOPp->singlecycle__DOT__o_pc_src))
                                     ? vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr
                                    [vlTOPp->singlecycle__DOT__o_pc_src]
                                     : 0U)),32);
        tracep->fullCData(oldp+39,(vlTOPp->singlecycle__DOT__o_pc_src),2);
        tracep->fullIData(oldp+40,(vlTOPp->singlecycle__DOT__o_imem),32);
        tracep->fullIData(oldp+41,(vlTOPp->singlecycle__DOT__o_regfile_rs2_data),32);
        tracep->fullBit(oldp+42,(((0x33U == (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                   ? 1U : ((0x13U == 
                                            (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                            ? 1U : 
                                           ((3U == 
                                             (0x7fU 
                                              & vlTOPp->singlecycle__DOT__o_imem))
                                             ? 1U : 
                                            ((0x67U 
                                              == (0x7fU 
                                                  & vlTOPp->singlecycle__DOT__o_imem))
                                              ? 1U : 
                                             ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 1U
                                               : 0U)))))));
        tracep->fullIData(oldp+43,(vlTOPp->singlecycle__DOT__o_imm_dec),32);
        tracep->fullCData(oldp+44,(vlTOPp->singlecycle__DOT__o_imm_src),3);
        tracep->fullBit(oldp+45,(((0x33U == (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                            ? 0U : 
                                           ((3U == 
                                             (0x7fU 
                                              & vlTOPp->singlecycle__DOT__o_imem))
                                             ? 0U : 
                                            ((0x67U 
                                              == (0x7fU 
                                                  & vlTOPp->singlecycle__DOT__o_imem))
                                              ? 0U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 0U
                                                   : 1U))))))));
        tracep->fullBit(oldp+46,(((0x33U == (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                   ? 0U : ((0x13U == 
                                            (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                            ? 1U : 
                                           ((3U == 
                                             (0x7fU 
                                              & vlTOPp->singlecycle__DOT__o_imem))
                                             ? 1U : 
                                            ((0x67U 
                                              == (0x7fU 
                                                  & vlTOPp->singlecycle__DOT__o_imem))
                                              ? 1U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem))
                                               ? 0U
                                               : ((0x63U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->singlecycle__DOT__o_imem))
                                                   ? 0U
                                                   : 1U))))))));
        tracep->fullIData(oldp+47,(vlTOPp->singlecycle__DOT__o_alu_mux_a),32);
        tracep->fullIData(oldp+48,(vlTOPp->singlecycle__DOT__o_alu_mux_b),32);
        tracep->fullCData(oldp+49,(vlTOPp->singlecycle__DOT__o_alu_control),4);
        tracep->fullBit(oldp+50,((0U == vlTOPp->singlecycle__DOT__o_alu_result)));
        tracep->fullBit(oldp+51,(((0x23U == (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem))
                                   ? 1U : 0U)));
        tracep->fullCData(oldp+52,(vlTOPp->singlecycle__DOT__o_dmem_byte_sel),4);
        tracep->fullCData(oldp+53,(((3U == (0x7fU & vlTOPp->singlecycle__DOT__o_imem))
                                     ? 1U : (((0x67U 
                                               == (0x7fU 
                                                   & vlTOPp->singlecycle__DOT__o_imem)) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlTOPp->singlecycle__DOT__o_imem)))
                                              ? 2U : 3U))),2);
        tracep->fullWData(oldp+54,(vlTOPp->singlecycle__DOT____Vcellinp__pc_next_mux__i_mux_concat_data),96);
        tracep->fullIData(oldp+57,(vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+58,(vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+59,(vlTOPp->singlecycle__DOT__pc_next_mux__DOT__mux_input_arr[2]),32);
        tracep->fullCData(oldp+60,((0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+61,((0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+62,((0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 7U))),5);
        tracep->fullQData(oldp+63,(vlTOPp->singlecycle__DOT____Vcellinp__src_a_mux__i_mux_concat_data),64);
        tracep->fullIData(oldp+65,(vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+66,(vlTOPp->singlecycle__DOT__src_a_mux__DOT__mux_input_arr[1]),32);
        tracep->fullQData(oldp+67,(vlTOPp->singlecycle__DOT____Vcellinp__src_b_mux__i_mux_concat_data),64);
        tracep->fullIData(oldp+69,(vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+70,(vlTOPp->singlecycle__DOT__src_b_mux__DOT__mux_input_arr[1]),32);
        tracep->fullSData(oldp+71,((0x3fffU & vlTOPp->singlecycle__DOT__o_alu_result)),14);
        tracep->fullCData(oldp+72,((0x7fU & vlTOPp->singlecycle__DOT__o_imem)),7);
        tracep->fullCData(oldp+73,((7U & (vlTOPp->singlecycle__DOT__o_imem 
                                          >> 0xcU))),3);
        tracep->fullBit(oldp+74,((1U & (vlTOPp->singlecycle__DOT__o_imem 
                                        >> 0x1eU))));
        tracep->fullBit(oldp+75,(((0x63U == (0x7fU 
                                             & vlTOPp->singlecycle__DOT__o_imem)) 
                                  & ((0x4000U & vlTOPp->singlecycle__DOT__o_imem)
                                      ? ((0x2000U & vlTOPp->singlecycle__DOT__o_imem)
                                          ? ((0x1000U 
                                              & vlTOPp->singlecycle__DOT__o_imem)
                                              ? (0U 
                                                 == vlTOPp->singlecycle__DOT__o_alu_result)
                                              : (0U 
                                                 != vlTOPp->singlecycle__DOT__o_alu_result))
                                          : ((0x1000U 
                                              & vlTOPp->singlecycle__DOT__o_imem)
                                              ? (0U 
                                                 == vlTOPp->singlecycle__DOT__o_alu_result)
                                              : (0U 
                                                 != vlTOPp->singlecycle__DOT__o_alu_result)))
                                      : ((~ (vlTOPp->singlecycle__DOT__o_imem 
                                             >> 0xdU)) 
                                         & ((0x1000U 
                                             & vlTOPp->singlecycle__DOT__o_imem)
                                             ? (0U 
                                                != vlTOPp->singlecycle__DOT__o_alu_result)
                                             : (0U 
                                                == vlTOPp->singlecycle__DOT__o_alu_result)))))));
        tracep->fullIData(oldp+76,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr
                                   [vlTOPp->singlecycle__DOT__o_src_rd]),32);
        tracep->fullIData(oldp+77,(vlTOPp->singlecycle__DOT__o_rd_data),32);
        tracep->fullWData(oldp+78,(vlTOPp->singlecycle__DOT____Vcellinp__result_mux__i_mux_concat_data),128);
        tracep->fullIData(oldp+82,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+83,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+84,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[2]),32);
        tracep->fullIData(oldp+85,(vlTOPp->singlecycle__DOT__result_mux__DOT__mux_input_arr[3]),32);
        tracep->fullBit(oldp+86,(vlTOPp->i_clk));
        tracep->fullBit(oldp+87,(vlTOPp->i_rstn));
        tracep->fullIData(oldp+88,((vlTOPp->singlecycle__DOT__i_pc 
                                    + vlTOPp->singlecycle__DOT__o_imm_dec)),32);
        tracep->fullIData(oldp+89,(vlTOPp->singlecycle__DOT__u_riscv_regfile__DOT__registers
                                   [(0x1fU & (vlTOPp->singlecycle__DOT__o_imem 
                                              >> 0xfU))]),32);
        tracep->fullCData(oldp+90,(vlTOPp->singlecycle__DOT__o_src_rd),2);
        tracep->fullIData(oldp+91,(3U),32);
        tracep->fullIData(oldp+92,(0U),32);
        tracep->fullBit(oldp+93,(1U));
        tracep->fullIData(oldp+94,(4U),32);
        tracep->fullIData(oldp+95,(2U),32);
        tracep->fullIData(oldp+96,(4U),32);
    }
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top__Syms.h"


//======================

void Vriscv_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vriscv_top::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_top::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vriscv_top::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vriscv_top::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBus(c+231,"o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+232,"o_pc_f", false,-1, 31,0);
        tracep->declBus(c+233,"o_alu_result_m", false,-1, 31,0);
        tracep->declBit(c+234,"o_mem_write_m", false,-1);
        tracep->declBus(c+235,"o_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBus(c+236,"o_write_data_m", false,-1, 31,0);
        tracep->declBus(c+237,"o_read_data_m", false,-1, 31,0);
        tracep->declBit(c+238,"i_clk", false,-1);
        tracep->declBit(c+239,"i_rstn", false,-1);
        tracep->declBus(c+247,"riscv_top REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+231,"riscv_top o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top o_pc_f", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top o_alu_result_m", false,-1, 31,0);
        tracep->declBit(c+234,"riscv_top o_mem_write_m", false,-1);
        tracep->declBus(c+235,"riscv_top o_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBus(c+236,"riscv_top o_write_data_m", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_top o_read_data_m", false,-1, 31,0);
        tracep->declBit(c+238,"riscv_top i_clk", false,-1);
        tracep->declBit(c+239,"riscv_top i_rstn", false,-1);
        tracep->declBus(c+144,"riscv_top o_pc_src_e", false,-1, 1,0);
        tracep->declBus(c+240,"riscv_top o_pc_plus_4_f", false,-1, 31,0);
        tracep->declBus(c+145,"riscv_top o_pc_f_", false,-1, 31,0);
        tracep->declBus(c+146,"riscv_top o_instr_d", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top o_pc_d", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top o_pc_plus_4_d", false,-1, 31,0);
        tracep->declBit(c+147,"riscv_top o_stall_d", false,-1);
        tracep->declBit(c+148,"riscv_top o_flush_d", false,-1);
        tracep->declBus(c+149,"riscv_top rs1_d", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_top rs2_d", false,-1, 4,0);
        tracep->declBus(c+151,"riscv_top rd_d", false,-1, 4,0);
        tracep->declBus(c+152,"riscv_top o_result_src_d", false,-1, 1,0);
        tracep->declBit(c+248,"riscv_top o_alu_src_d", false,-1);
        tracep->declBit(c+153,"riscv_top o_reg_write_d", false,-1);
        tracep->declBit(c+154,"riscv_top o_mem_write_d", false,-1);
        tracep->declBus(c+155,"riscv_top o_mem_byte_sel_d", false,-1, 3,0);
        tracep->declBus(c+156,"riscv_top o_alu_control_d", false,-1, 3,0);
        tracep->declBit(c+157,"riscv_top o_jalr_d", false,-1);
        tracep->declBit(c+158,"riscv_top o_jump_d", false,-1);
        tracep->declBit(c+159,"riscv_top o_branch_d", false,-1);
        tracep->declBus(c+241,"riscv_top o_rd1_d", false,-1, 31,0);
        tracep->declBus(c+242,"riscv_top o_rd2_d", false,-1, 31,0);
        tracep->declBus(c+160,"riscv_top o_extimm_d", false,-1, 31,0);
        tracep->declBit(c+161,"riscv_top o_zero_condition_d", false,-1);
        tracep->declBus(c+162,"riscv_top o_result_w", false,-1, 31,0);
        tracep->declBus(c+163,"riscv_top o_rd_w", false,-1, 4,0);
        tracep->declBit(c+164,"riscv_top o_reg_write_w", false,-1);
        tracep->declBus(c+67,"riscv_top o_result_src_e", false,-1, 1,0);
        tracep->declBit(c+68,"riscv_top o_alu_src_a_e", false,-1);
        tracep->declBit(c+69,"riscv_top o_alu_src_b_e", false,-1);
        tracep->declBit(c+165,"riscv_top o_reg_write_e", false,-1);
        tracep->declBit(c+70,"riscv_top o_mem_write_e", false,-1);
        tracep->declBus(c+71,"riscv_top o_mem_byte_sel_e", false,-1, 3,0);
        tracep->declBus(c+72,"riscv_top o_alu_control_e", false,-1, 3,0);
        tracep->declBit(c+73,"riscv_top o_jump_e", false,-1);
        tracep->declBit(c+74,"riscv_top o_branch_e", false,-1);
        tracep->declBus(c+75,"riscv_top o_rd1_e", false,-1, 31,0);
        tracep->declBus(c+76,"riscv_top o_rd2_e", false,-1, 31,0);
        tracep->declBus(c+77,"riscv_top o_rs1_e", false,-1, 4,0);
        tracep->declBus(c+78,"riscv_top o_rs2_e", false,-1, 4,0);
        tracep->declBus(c+166,"riscv_top o_rd_e", false,-1, 4,0);
        tracep->declBus(c+79,"riscv_top o_extimm_e", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top o_pc_plus_4_e", false,-1, 31,0);
        tracep->declBus(c+81,"riscv_top o_pc_e", false,-1, 31,0);
        tracep->declBit(c+82,"riscv_top o_zero_condition_e", false,-1);
        tracep->declBit(c+167,"riscv_top o_flush_e", false,-1);
        tracep->declBit(c+83,"riscv_top o_jalr_e", false,-1);
        tracep->declBit(c+243,"riscv_top o_zero_e", false,-1);
        tracep->declBus(c+168,"riscv_top o_alu_result_e", false,-1, 31,0);
        tracep->declBus(c+169,"riscv_top o_write_data_e", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top o_pc_target_e", false,-1, 31,0);
        tracep->declBus(c+170,"riscv_top o_forward_a_e", false,-1, 1,0);
        tracep->declBus(c+171,"riscv_top o_forward_b_e", false,-1, 1,0);
        tracep->declBit(c+172,"riscv_top o_reg_write_m", false,-1);
        tracep->declBus(c+85,"riscv_top o_result_src_m", false,-1, 1,0);
        tracep->declBus(c+173,"riscv_top o_rd_m", false,-1, 4,0);
        tracep->declBus(c+86,"riscv_top o_pc_plus_4_m", false,-1, 31,0);
        tracep->declBus(c+87,"riscv_top o_extimm_m", false,-1, 31,0);
        tracep->declBus(c+88,"riscv_top o_result_src_w", false,-1, 1,0);
        tracep->declBus(c+89,"riscv_top o_alu_result_w", false,-1, 31,0);
        tracep->declBus(c+90,"riscv_top o_read_data_w", false,-1, 31,0);
        tracep->declBus(c+91,"riscv_top o_pc_plus_4_w", false,-1, 31,0);
        tracep->declBus(c+92,"riscv_top o_extimm_w", false,-1, 31,0);
        tracep->declBit(c+147,"riscv_top o_stall_f", false,-1);
        tracep->declBit(c+174,"riscv_top o_alu_src_a_d", false,-1);
        tracep->declBit(c+175,"riscv_top o_alu_src_b_d", false,-1);
        tracep->declBus(c+231,"riscv_top u_riscv_fetch o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+240,"riscv_top u_riscv_fetch o_pc_plus_4_f", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_fetch i_pc_f", false,-1, 31,0);
        tracep->declBus(c+231,"riscv_top u_riscv_fetch u_riscv_imem o_imem_data", false,-1, 31,0);
        tracep->declBus(c+244,"riscv_top u_riscv_fetch u_riscv_imem i_imem_addr", false,-1, 13,0);
        tracep->declArray(c+1,"riscv_top u_riscv_fetch u_riscv_imem FILE_TEXT_MIF", false,-1, 1023,0);
        tracep->declBus(c+240,"riscv_top u_riscv_fetch u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_fetch u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_top u_riscv_fetch u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+247,"riscv_top u_riscv_register_fetch REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+146,"riscv_top u_riscv_register_fetch o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top u_riscv_register_fetch o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_riscv_register_fetch o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+231,"riscv_top u_riscv_register_fetch i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_register_fetch i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+240,"riscv_top u_riscv_register_fetch i_register_d_2", false,-1, 31,0);
        tracep->declBit(c+147,"riscv_top u_riscv_register_fetch i_register_en", false,-1);
        tracep->declBit(c+238,"riscv_top u_riscv_register_fetch i_clk", false,-1);
        tracep->declBit(c+148,"riscv_top u_riscv_register_fetch i_clr", false,-1);
        tracep->declBit(c+239,"riscv_top u_riscv_register_fetch i_rstn", false,-1);
        tracep->declBus(c+152,"riscv_top u_riscv_decode o_result_src_d", false,-1, 1,0);
        tracep->declBit(c+174,"riscv_top u_riscv_decode o_alu_src_a_d", false,-1);
        tracep->declBit(c+175,"riscv_top u_riscv_decode o_alu_src_b_d", false,-1);
        tracep->declBit(c+153,"riscv_top u_riscv_decode o_reg_write_d", false,-1);
        tracep->declBit(c+154,"riscv_top u_riscv_decode o_mem_write_d", false,-1);
        tracep->declBus(c+155,"riscv_top u_riscv_decode o_mem_byte_sel_d", false,-1, 3,0);
        tracep->declBus(c+156,"riscv_top u_riscv_decode o_alu_control_d", false,-1, 3,0);
        tracep->declBus(c+241,"riscv_top u_riscv_decode o_rd1_d", false,-1, 31,0);
        tracep->declBus(c+242,"riscv_top u_riscv_decode o_rd2_d", false,-1, 31,0);
        tracep->declBus(c+160,"riscv_top u_riscv_decode o_extimm_d", false,-1, 31,0);
        tracep->declBit(c+157,"riscv_top u_riscv_decode o_jalr_d", false,-1);
        tracep->declBit(c+158,"riscv_top u_riscv_decode o_jump_d", false,-1);
        tracep->declBit(c+159,"riscv_top u_riscv_decode o_branch_d", false,-1);
        tracep->declBit(c+161,"riscv_top u_riscv_decode o_zero_condition", false,-1);
        tracep->declBus(c+146,"riscv_top u_riscv_decode i_instr_d", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top u_riscv_decode i_pc_d", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_riscv_decode i_result_w", false,-1, 31,0);
        tracep->declBit(c+164,"riscv_top u_riscv_decode i_reg_write_w", false,-1);
        tracep->declBus(c+163,"riscv_top u_riscv_decode i_rd_w", false,-1, 4,0);
        tracep->declBit(c+238,"riscv_top u_riscv_decode i_clk", false,-1);
        tracep->declBus(c+176,"riscv_top u_riscv_decode o_immsrc_d", false,-1, 2,0);
        tracep->declBus(c+176,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_imm", false,-1, 2,0);
        tracep->declBus(c+152,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_rd", false,-1, 1,0);
        tracep->declBit(c+174,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_alu_a", false,-1);
        tracep->declBit(c+175,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_alu_b", false,-1);
        tracep->declBit(c+153,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_reg_wr_en", false,-1);
        tracep->declBit(c+154,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_mem_wr_en", false,-1);
        tracep->declBus(c+155,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+156,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+157,"riscv_top u_riscv_decode u_riscv_ctrl o_jalr_d", false,-1);
        tracep->declBit(c+158,"riscv_top u_riscv_decode u_riscv_ctrl o_jump_d", false,-1);
        tracep->declBit(c+159,"riscv_top u_riscv_decode u_riscv_ctrl o_branch_d", false,-1);
        tracep->declBit(c+161,"riscv_top u_riscv_decode u_riscv_ctrl o_zero_condition", false,-1);
        tracep->declBus(c+177,"riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_opcode", false,-1, 6,0);
        tracep->declBus(c+178,"riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_funct3", false,-1, 2,0);
        tracep->declBit(c+179,"riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_funct7_5b", false,-1);
        tracep->declArray(c+180,"riscv_top u_riscv_decode u_riscv_ctrl DEBUG_INSTR", false,-1, 255,0);
        tracep->declBus(c+241,"riscv_top u_riscv_decode u_riscv_regfile o_regfile_rs1_data", false,-1, 31,0);
        tracep->declBus(c+242,"riscv_top u_riscv_decode u_riscv_regfile o_regfile_rs2_data", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+162,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_data", false,-1, 31,0);
        tracep->declBus(c+163,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_addr", false,-1, 4,0);
        tracep->declBit(c+164,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_wen", false,-1);
        tracep->declBit(c+238,"riscv_top u_riscv_decode u_riscv_regfile i_clk", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+112+i*1,"riscv_top u_riscv_decode u_riscv_regfile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+160,"riscv_top u_riscv_decode u_riscv_immext o_imm_ext", false,-1, 31,0);
        tracep->declBus(c+146,"riscv_top u_riscv_decode u_riscv_immext i_imm_instr", false,-1, 31,0);
        tracep->declBus(c+176,"riscv_top u_riscv_decode u_riscv_immext i_imm_src", false,-1, 2,0);
        tracep->declBus(c+247,"riscv_top u_riscv_register_decode REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_riscv_register_decode o_register_q_0", false,-1, 1,0);
        tracep->declBit(c+68,"riscv_top u_riscv_register_decode o_register_q_1", false,-1);
        tracep->declBit(c+69,"riscv_top u_riscv_register_decode o_register_q_2", false,-1);
        tracep->declBit(c+165,"riscv_top u_riscv_register_decode o_register_q_3", false,-1);
        tracep->declBit(c+70,"riscv_top u_riscv_register_decode o_register_q_4", false,-1);
        tracep->declBus(c+71,"riscv_top u_riscv_register_decode o_register_q_5", false,-1, 3,0);
        tracep->declBus(c+72,"riscv_top u_riscv_register_decode o_register_q_6", false,-1, 3,0);
        tracep->declBit(c+73,"riscv_top u_riscv_register_decode o_register_q_7", false,-1);
        tracep->declBit(c+74,"riscv_top u_riscv_register_decode o_register_q_8", false,-1);
        tracep->declBus(c+75,"riscv_top u_riscv_register_decode o_register_q_9", false,-1, 31,0);
        tracep->declBus(c+76,"riscv_top u_riscv_register_decode o_register_q_10", false,-1, 31,0);
        tracep->declBus(c+77,"riscv_top u_riscv_register_decode o_register_q_11", false,-1, 4,0);
        tracep->declBus(c+78,"riscv_top u_riscv_register_decode o_register_q_12", false,-1, 4,0);
        tracep->declBus(c+188,"riscv_top u_riscv_register_decode o_register_q_13", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_riscv_register_decode o_register_q_14", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top u_riscv_register_decode o_register_q_15", false,-1, 31,0);
        tracep->declBus(c+81,"riscv_top u_riscv_register_decode o_register_q_16", false,-1, 31,0);
        tracep->declBit(c+82,"riscv_top u_riscv_register_decode o_register_q_17", false,-1);
        tracep->declBit(c+83,"riscv_top u_riscv_register_decode o_register_q_18", false,-1);
        tracep->declBus(c+152,"riscv_top u_riscv_register_decode i_register_d_0", false,-1, 1,0);
        tracep->declBit(c+174,"riscv_top u_riscv_register_decode i_register_d_1", false,-1);
        tracep->declBit(c+175,"riscv_top u_riscv_register_decode i_register_d_2", false,-1);
        tracep->declBit(c+153,"riscv_top u_riscv_register_decode i_register_d_3", false,-1);
        tracep->declBit(c+154,"riscv_top u_riscv_register_decode i_register_d_4", false,-1);
        tracep->declBus(c+155,"riscv_top u_riscv_register_decode i_register_d_5", false,-1, 3,0);
        tracep->declBus(c+156,"riscv_top u_riscv_register_decode i_register_d_6", false,-1, 3,0);
        tracep->declBit(c+158,"riscv_top u_riscv_register_decode i_register_d_7", false,-1);
        tracep->declBit(c+159,"riscv_top u_riscv_register_decode i_register_d_8", false,-1);
        tracep->declBus(c+241,"riscv_top u_riscv_register_decode i_register_d_9", false,-1, 31,0);
        tracep->declBus(c+242,"riscv_top u_riscv_register_decode i_register_d_10", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_top u_riscv_register_decode i_register_d_11", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_top u_riscv_register_decode i_register_d_12", false,-1, 4,0);
        tracep->declBus(c+189,"riscv_top u_riscv_register_decode i_register_d_13", false,-1, 31,0);
        tracep->declBus(c+160,"riscv_top u_riscv_register_decode i_register_d_14", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_riscv_register_decode i_register_d_15", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top u_riscv_register_decode i_register_d_16", false,-1, 31,0);
        tracep->declBit(c+161,"riscv_top u_riscv_register_decode i_register_d_17", false,-1);
        tracep->declBit(c+157,"riscv_top u_riscv_register_decode i_register_d_18", false,-1);
        tracep->declBit(c+238,"riscv_top u_riscv_register_decode i_clk", false,-1);
        tracep->declBit(c+167,"riscv_top u_riscv_register_decode i_clr", false,-1);
        tracep->declBit(c+239,"riscv_top u_riscv_register_decode i_rstn", false,-1);
        tracep->declBit(c+243,"riscv_top u_riscv_execute o_zero_e", false,-1);
        tracep->declBus(c+168,"riscv_top u_riscv_execute o_alu_result_e", false,-1, 31,0);
        tracep->declBus(c+169,"riscv_top u_riscv_execute o_write_data_e", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top u_riscv_execute o_pc_target_e", false,-1, 31,0);
        tracep->declBus(c+72,"riscv_top u_riscv_execute i_alu_control_e", false,-1, 3,0);
        tracep->declBit(c+68,"riscv_top u_riscv_execute i_alu_src_a_e", false,-1);
        tracep->declBit(c+69,"riscv_top u_riscv_execute i_alu_src_b_e", false,-1);
        tracep->declBus(c+75,"riscv_top u_riscv_execute i_rd1_e", false,-1, 31,0);
        tracep->declBus(c+76,"riscv_top u_riscv_execute i_rd2_e", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_riscv_execute i_result_w", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top u_riscv_execute i_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+81,"riscv_top u_riscv_execute i_pc_e", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_riscv_execute i_extimm_e", false,-1, 31,0);
        tracep->declBus(c+170,"riscv_top u_riscv_execute i_forward_a_e", false,-1, 1,0);
        tracep->declBus(c+171,"riscv_top u_riscv_execute i_forward_b_e", false,-1, 1,0);
        tracep->declBit(c+82,"riscv_top u_riscv_execute i_zero_condition", false,-1);
        tracep->declBus(c+190,"riscv_top u_riscv_execute o_src_a_e", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top u_riscv_execute o_src_b_e", false,-1, 31,0);
        tracep->declBus(c+192,"riscv_top u_riscv_execute o_mux_src_a", false,-1, 31,0);
        tracep->declBus(c+250,"riscv_top u_riscv_execute u_mux_forward_a N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+192,"riscv_top u_riscv_execute u_mux_forward_a o_mux_data", false,-1, 31,0);
        tracep->declArray(c+193,"riscv_top u_riscv_execute u_mux_forward_a i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+170,"riscv_top u_riscv_execute u_mux_forward_a i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+196+i*1,"riscv_top u_riscv_execute u_mux_forward_a mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+251,"riscv_top u_riscv_execute u_mux_alu_src_a N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+190,"riscv_top u_riscv_execute u_mux_alu_src_a o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+199,"riscv_top u_riscv_execute u_mux_alu_src_a i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+68,"riscv_top u_riscv_execute u_mux_alu_src_a i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+201+i*1,"riscv_top u_riscv_execute u_mux_alu_src_a mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+250,"riscv_top u_riscv_execute u_mux_forward_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+169,"riscv_top u_riscv_execute u_mux_forward_b o_mux_data", false,-1, 31,0);
        tracep->declArray(c+203,"riscv_top u_riscv_execute u_mux_forward_b i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+171,"riscv_top u_riscv_execute u_mux_forward_b i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+206+i*1,"riscv_top u_riscv_execute u_mux_forward_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+251,"riscv_top u_riscv_execute u_mux_alu_src_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top u_riscv_execute u_mux_alu_src_b o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+209,"riscv_top u_riscv_execute u_mux_alu_src_b i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+69,"riscv_top u_riscv_execute u_mux_alu_src_b i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+211+i*1,"riscv_top u_riscv_execute u_mux_alu_src_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+168,"riscv_top u_riscv_execute u_riscv_alu o_alu_result", false,-1, 31,0);
        tracep->declBit(c+243,"riscv_top u_riscv_execute u_riscv_alu o_zero_e", false,-1);
        tracep->declBus(c+190,"riscv_top u_riscv_execute u_riscv_alu i_alu_a", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top u_riscv_execute u_riscv_alu i_alu_b", false,-1, 31,0);
        tracep->declBus(c+72,"riscv_top u_riscv_execute u_riscv_alu i_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+82,"riscv_top u_riscv_execute u_riscv_alu i_zero_condition", false,-1);
        tracep->declBit(c+213,"riscv_top u_riscv_execute u_riscv_alu alu_zero", false,-1);
        tracep->declQuad(c+93,"riscv_top u_riscv_execute u_riscv_alu DEBUG_ALU_OP", false,-1, 63,0);
        tracep->declBus(c+84,"riscv_top u_riscv_execute u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+81,"riscv_top u_riscv_execute u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_riscv_execute u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+247,"riscv_top u_riscv_register_execute REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+214,"riscv_top u_riscv_register_execute o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+95,"riscv_top u_riscv_register_execute o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top u_riscv_register_execute o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+97,"riscv_top u_riscv_register_execute o_register_q_3", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top u_riscv_register_execute o_register_q_4", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top u_riscv_register_execute o_register_q_5", false,-1, 31,0);
        tracep->declBus(c+215,"riscv_top u_riscv_register_execute o_register_q_6", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top u_riscv_register_execute o_register_q_7", false,-1, 31,0);
        tracep->declBus(c+87,"riscv_top u_riscv_register_execute o_register_q_8", false,-1, 31,0);
        tracep->declBus(c+216,"riscv_top u_riscv_register_execute i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+98,"riscv_top u_riscv_register_execute i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+99,"riscv_top u_riscv_register_execute i_register_d_2", false,-1, 31,0);
        tracep->declBus(c+100,"riscv_top u_riscv_register_execute i_register_d_3", false,-1, 31,0);
        tracep->declBus(c+168,"riscv_top u_riscv_register_execute i_register_d_4", false,-1, 31,0);
        tracep->declBus(c+169,"riscv_top u_riscv_register_execute i_register_d_5", false,-1, 31,0);
        tracep->declBus(c+217,"riscv_top u_riscv_register_execute i_register_d_6", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top u_riscv_register_execute i_register_d_7", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_riscv_register_execute i_register_d_8", false,-1, 31,0);
        tracep->declBit(c+238,"riscv_top u_riscv_register_execute i_clk", false,-1);
        tracep->declBit(c+239,"riscv_top u_riscv_register_execute i_rstn", false,-1);
        tracep->declBus(c+237,"riscv_top u_riscv_memory o_read_data_m", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top u_riscv_memory i_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top u_riscv_memory i_write_data_m", false,-1, 31,0);
        tracep->declBit(c+234,"riscv_top u_riscv_memory i_mem_write_m", false,-1);
        tracep->declBus(c+235,"riscv_top u_riscv_memory i_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBit(c+238,"riscv_top u_riscv_memory i_clk", false,-1);
        tracep->declBus(c+237,"riscv_top u_riscv_memory u_riscv_dmem o_dmem_data", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_data", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_addr", false,-1, 13,0);
        tracep->declBus(c+235,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_byte_sel", false,-1, 3,0);
        tracep->declBit(c+234,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_wr_en", false,-1);
        tracep->declBit(c+238,"riscv_top u_riscv_memory u_riscv_dmem i_clk", false,-1);
        tracep->declArray(c+33,"riscv_top u_riscv_memory u_riscv_dmem FILE_DATA_MIF", false,-1, 1023,0);
        tracep->declBus(c+218,"riscv_top u_riscv_memory u_riscv_dmem o_dmem_data_", false,-1, 31,0);
        tracep->declBus(c+246,"riscv_top u_riscv_memory u_riscv_dmem i", false,-1, 31,0);
        tracep->declBus(c+247,"riscv_top u_riscv_register_memory REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+219,"riscv_top u_riscv_register_memory o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+101,"riscv_top u_riscv_register_memory o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top u_riscv_register_memory o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+90,"riscv_top u_riscv_register_memory o_register_q_3", false,-1, 31,0);
        tracep->declBus(c+220,"riscv_top u_riscv_register_memory o_register_q_4", false,-1, 31,0);
        tracep->declBus(c+91,"riscv_top u_riscv_register_memory o_register_q_5", false,-1, 31,0);
        tracep->declBus(c+92,"riscv_top u_riscv_register_memory o_register_q_6", false,-1, 31,0);
        tracep->declBus(c+221,"riscv_top u_riscv_register_memory i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+102,"riscv_top u_riscv_register_memory i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top u_riscv_register_memory i_register_d_2", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_top u_riscv_register_memory i_register_d_3", false,-1, 31,0);
        tracep->declBus(c+222,"riscv_top u_riscv_register_memory i_register_d_4", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top u_riscv_register_memory i_register_d_5", false,-1, 31,0);
        tracep->declBus(c+87,"riscv_top u_riscv_register_memory i_register_d_6", false,-1, 31,0);
        tracep->declBit(c+238,"riscv_top u_riscv_register_memory i_clk", false,-1);
        tracep->declBit(c+239,"riscv_top u_riscv_register_memory i_rstn", false,-1);
        tracep->declBus(c+252,"riscv_top u_mux_result N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_mux_result o_mux_data", false,-1, 31,0);
        tracep->declArray(c+103,"riscv_top u_mux_result i_mux_concat_data", false,-1, 127,0);
        tracep->declBus(c+88,"riscv_top u_mux_result i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+107+i*1,"riscv_top u_mux_result mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBit(c+147,"riscv_top u_riscv_hazard_unit o_stall_f", false,-1);
        tracep->declBit(c+147,"riscv_top u_riscv_hazard_unit o_stall_d", false,-1);
        tracep->declBit(c+148,"riscv_top u_riscv_hazard_unit o_flush_d", false,-1);
        tracep->declBit(c+167,"riscv_top u_riscv_hazard_unit o_flush_e", false,-1);
        tracep->declBus(c+170,"riscv_top u_riscv_hazard_unit o_forward_a_e", false,-1, 1,0);
        tracep->declBus(c+171,"riscv_top u_riscv_hazard_unit o_forward_b_e", false,-1, 1,0);
        tracep->declBus(c+149,"riscv_top u_riscv_hazard_unit i_rs1_d", false,-1, 4,0);
        tracep->declBus(c+150,"riscv_top u_riscv_hazard_unit i_rs2_d", false,-1, 4,0);
        tracep->declBus(c+166,"riscv_top u_riscv_hazard_unit i_rd_e", false,-1, 4,0);
        tracep->declBus(c+78,"riscv_top u_riscv_hazard_unit i_rs2_e", false,-1, 4,0);
        tracep->declBus(c+77,"riscv_top u_riscv_hazard_unit i_rs1_e", false,-1, 4,0);
        tracep->declBit(c+148,"riscv_top u_riscv_hazard_unit i_pc_src_e", false,-1);
        tracep->declBit(c+111,"riscv_top u_riscv_hazard_unit i_result_src_e", false,-1);
        tracep->declBus(c+173,"riscv_top u_riscv_hazard_unit i_rd_m", false,-1, 4,0);
        tracep->declBus(c+163,"riscv_top u_riscv_hazard_unit i_rd_w", false,-1, 4,0);
        tracep->declBit(c+172,"riscv_top u_riscv_hazard_unit i_reg_write_m", false,-1);
        tracep->declBit(c+164,"riscv_top u_riscv_hazard_unit i_reg_write_w", false,-1);
        tracep->declBit(c+147,"riscv_top u_riscv_hazard_unit lwstall", false,-1);
        tracep->declBus(c+252,"riscv_top u_mux_pcf N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+145,"riscv_top u_mux_pcf o_mux_data", false,-1, 31,0);
        tracep->declArray(c+223,"riscv_top u_mux_pcf i_mux_concat_data", false,-1, 127,0);
        tracep->declBus(c+144,"riscv_top u_mux_pcf i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<4; i++) {
                tracep->declBus(c+227+i*1,"riscv_top u_mux_pcf mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+247,"riscv_top u_riscv_register REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_register o_register_q", false,-1, 31,0);
        tracep->declBus(c+145,"riscv_top u_riscv_register i_register_d", false,-1, 31,0);
        tracep->declBit(c+147,"riscv_top u_riscv_register i_register_en", false,-1);
        tracep->declBit(c+238,"riscv_top u_riscv_register i_clk", false,-1);
        tracep->declBit(c+239,"riscv_top u_riscv_register i_rstn", false,-1);
    }
}

void Vriscv_top::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vriscv_top::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vriscv_top::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top__Syms* __restrict vlSymsp = static_cast<Vriscv_top__Syms*>(userp);
    Vriscv_top* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullWData(oldp+1,(vlTOPp->riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF),1024);
        tracep->fullWData(oldp+33,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF),1024);
        tracep->fullIData(oldp+65,(vlTOPp->riscv_top__DOT__o_pc_d),32);
        tracep->fullIData(oldp+66,(vlTOPp->riscv_top__DOT__o_pc_plus_4_d),32);
        tracep->fullCData(oldp+67,(vlTOPp->riscv_top__DOT__o_result_src_e),2);
        tracep->fullBit(oldp+68,(vlTOPp->riscv_top__DOT__o_alu_src_a_e));
        tracep->fullBit(oldp+69,(vlTOPp->riscv_top__DOT__o_alu_src_b_e));
        tracep->fullBit(oldp+70,(vlTOPp->riscv_top__DOT__o_mem_write_e));
        tracep->fullCData(oldp+71,(vlTOPp->riscv_top__DOT__o_mem_byte_sel_e),4);
        tracep->fullCData(oldp+72,(vlTOPp->riscv_top__DOT__o_alu_control_e),4);
        tracep->fullBit(oldp+73,(vlTOPp->riscv_top__DOT__o_jump_e));
        tracep->fullBit(oldp+74,(vlTOPp->riscv_top__DOT__o_branch_e));
        tracep->fullIData(oldp+75,(vlTOPp->riscv_top__DOT__o_rd1_e),32);
        tracep->fullIData(oldp+76,(vlTOPp->riscv_top__DOT__o_rd2_e),32);
        tracep->fullCData(oldp+77,(vlTOPp->riscv_top__DOT__o_rs1_e),5);
        tracep->fullCData(oldp+78,(vlTOPp->riscv_top__DOT__o_rs2_e),5);
        tracep->fullIData(oldp+79,(vlTOPp->riscv_top__DOT__o_extimm_e),32);
        tracep->fullIData(oldp+80,(vlTOPp->riscv_top__DOT__o_pc_plus_4_e),32);
        tracep->fullIData(oldp+81,(vlTOPp->riscv_top__DOT__o_pc_e),32);
        tracep->fullBit(oldp+82,(vlTOPp->riscv_top__DOT__o_zero_condition_e));
        tracep->fullBit(oldp+83,(vlTOPp->riscv_top__DOT__o_jalr_e));
        tracep->fullIData(oldp+84,((vlTOPp->riscv_top__DOT__o_pc_e 
                                    + vlTOPp->riscv_top__DOT__o_extimm_e)),32);
        tracep->fullCData(oldp+85,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),2);
        tracep->fullIData(oldp+86,(vlTOPp->riscv_top__DOT__o_pc_plus_4_m),32);
        tracep->fullIData(oldp+87,(vlTOPp->riscv_top__DOT__o_extimm_m),32);
        tracep->fullCData(oldp+88,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1)),2);
        tracep->fullIData(oldp+89,(vlTOPp->riscv_top__DOT__o_alu_result_w),32);
        tracep->fullIData(oldp+90,(vlTOPp->riscv_top__DOT__o_read_data_w),32);
        tracep->fullIData(oldp+91,(vlTOPp->riscv_top__DOT__o_pc_plus_4_w),32);
        tracep->fullIData(oldp+92,(vlTOPp->riscv_top__DOT__o_extimm_w),32);
        tracep->fullQData(oldp+93,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
        tracep->fullIData(oldp+95,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1),32);
        tracep->fullIData(oldp+96,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2),32);
        tracep->fullIData(oldp+97,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3),32);
        tracep->fullIData(oldp+98,(vlTOPp->riscv_top__DOT__o_result_src_e),32);
        tracep->fullIData(oldp+99,(vlTOPp->riscv_top__DOT__o_mem_write_e),32);
        tracep->fullIData(oldp+100,(vlTOPp->riscv_top__DOT__o_mem_byte_sel_e),32);
        tracep->fullIData(oldp+101,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1),32);
        tracep->fullIData(oldp+102,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),32);
        tracep->fullWData(oldp+103,(vlTOPp->riscv_top__DOT____Vcellinp__u_mux_result__i_mux_concat_data),128);
        tracep->fullIData(oldp+107,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+108,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+109,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[2]),32);
        tracep->fullIData(oldp+110,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[3]),32);
        tracep->fullBit(oldp+111,((1U & (IData)(vlTOPp->riscv_top__DOT__o_result_src_e))));
        tracep->fullIData(oldp+112,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
        tracep->fullIData(oldp+113,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
        tracep->fullIData(oldp+114,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
        tracep->fullIData(oldp+115,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
        tracep->fullIData(oldp+116,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
        tracep->fullIData(oldp+117,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
        tracep->fullIData(oldp+118,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
        tracep->fullIData(oldp+119,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
        tracep->fullIData(oldp+120,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
        tracep->fullIData(oldp+121,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
        tracep->fullIData(oldp+122,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
        tracep->fullIData(oldp+123,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
        tracep->fullIData(oldp+124,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
        tracep->fullIData(oldp+125,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
        tracep->fullIData(oldp+126,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
        tracep->fullIData(oldp+127,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
        tracep->fullIData(oldp+128,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
        tracep->fullIData(oldp+129,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
        tracep->fullIData(oldp+130,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
        tracep->fullIData(oldp+131,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
        tracep->fullIData(oldp+132,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
        tracep->fullIData(oldp+133,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
        tracep->fullIData(oldp+134,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
        tracep->fullIData(oldp+135,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
        tracep->fullIData(oldp+136,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
        tracep->fullIData(oldp+137,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
        tracep->fullIData(oldp+138,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
        tracep->fullIData(oldp+139,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
        tracep->fullIData(oldp+140,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
        tracep->fullIData(oldp+141,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
        tracep->fullIData(oldp+142,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
        tracep->fullIData(oldp+143,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        tracep->fullCData(oldp+144,(vlTOPp->riscv_top__DOT__o_pc_src_e),2);
        tracep->fullIData(oldp+145,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr
                                    [vlTOPp->riscv_top__DOT__o_pc_src_e]),32);
        tracep->fullIData(oldp+146,(vlTOPp->riscv_top__DOT__o_instr_d),32);
        tracep->fullBit(oldp+147,(vlTOPp->riscv_top__DOT__u_riscv_hazard_unit__DOT__lwstall));
        tracep->fullBit(oldp+148,((1U & (IData)(vlTOPp->riscv_top__DOT__o_pc_src_e))));
        tracep->fullCData(oldp+149,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+150,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+151,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 7U))),5);
        tracep->fullCData(oldp+152,(vlTOPp->riscv_top__DOT__o_result_src_d),2);
        tracep->fullBit(oldp+153,((1U & (~ ((0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instr_d)))))));
        tracep->fullBit(oldp+154,((0x23U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullCData(oldp+155,((((3U == (0x7fU 
                                              & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                      | (0x23U == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instr_d)))
                                      ? ((0x4000U & vlTOPp->riscv_top__DOT__o_instr_d)
                                          ? ((0x2000U 
                                              & vlTOPp->riscv_top__DOT__o_instr_d)
                                              ? 0xfU
                                              : ((0x1000U 
                                                  & vlTOPp->riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U))
                                          : ((0x2000U 
                                              & vlTOPp->riscv_top__DOT__o_instr_d)
                                              ? 0xfU
                                              : ((0x1000U 
                                                  & vlTOPp->riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U)))
                                      : 0xfU)),4);
        tracep->fullCData(oldp+156,(vlTOPp->riscv_top__DOT__o_alu_control_d),4);
        tracep->fullBit(oldp+157,((0x67U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+158,((0x6fU == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+159,((0x63U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullIData(oldp+160,(vlTOPp->riscv_top__DOT__o_extimm_d),32);
        tracep->fullBit(oldp+161,(((0x63U == (0x7fU 
                                              & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                   & ((0x4000U & vlTOPp->riscv_top__DOT__o_instr_d)
                                       ? ((0x2000U 
                                           & vlTOPp->riscv_top__DOT__o_instr_d)
                                           ? (~ (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 0xcU))
                                           : (~ (vlTOPp->riscv_top__DOT__o_instr_d 
                                                 >> 0xcU)))
                                       : ((~ (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0xdU)) 
                                          & (vlTOPp->riscv_top__DOT__o_instr_d 
                                             >> 0xcU))))));
        tracep->fullIData(oldp+162,(vlTOPp->riscv_top__DOT__o_result_w),32);
        tracep->fullCData(oldp+163,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)),5);
        tracep->fullBit(oldp+164,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0)));
        tracep->fullBit(oldp+165,(vlTOPp->riscv_top__DOT__o_reg_write_e));
        tracep->fullCData(oldp+166,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_decode__o_register_q_13)),5);
        tracep->fullBit(oldp+167,(vlTOPp->riscv_top__DOT__o_flush_e));
        tracep->fullIData(oldp+168,(vlTOPp->riscv_top__DOT__o_alu_result_e),32);
        tracep->fullIData(oldp+169,(vlTOPp->riscv_top__DOT__o_write_data_e),32);
        tracep->fullCData(oldp+170,(vlTOPp->riscv_top__DOT__o_forward_a_e),2);
        tracep->fullCData(oldp+171,(vlTOPp->riscv_top__DOT__o_forward_b_e),2);
        tracep->fullBit(oldp+172,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)));
        tracep->fullCData(oldp+173,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),5);
        tracep->fullBit(oldp+174,((0x17U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+175,(vlTOPp->riscv_top__DOT__o_alu_src_b_d));
        tracep->fullCData(oldp+176,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d),3);
        tracep->fullCData(oldp+177,((0x7fU & vlTOPp->riscv_top__DOT__o_instr_d)),7);
        tracep->fullCData(oldp+178,((7U & (vlTOPp->riscv_top__DOT__o_instr_d 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+179,((1U & (vlTOPp->riscv_top__DOT__o_instr_d 
                                         >> 0x1eU))));
        tracep->fullWData(oldp+180,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR),256);
        tracep->fullIData(oldp+188,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_decode__o_register_q_13),32);
        tracep->fullIData(oldp+189,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 7U))),32);
        tracep->fullIData(oldp+190,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__o_src_a_e),32);
        tracep->fullIData(oldp+191,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__o_src_b_e),32);
        tracep->fullIData(oldp+192,(((2U >= (IData)(vlTOPp->riscv_top__DOT__o_forward_a_e))
                                      ? vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr
                                     [vlTOPp->riscv_top__DOT__o_forward_a_e]
                                      : 0U)),32);
        tracep->fullWData(oldp+193,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_a__i_mux_concat_data),96);
        tracep->fullIData(oldp+196,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+197,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+198,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[2]),32);
        tracep->fullQData(oldp+199,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_a__i_mux_concat_data),64);
        tracep->fullIData(oldp+201,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_a__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+202,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_a__DOT__mux_input_arr[1]),32);
        tracep->fullWData(oldp+203,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_b__i_mux_concat_data),96);
        tracep->fullIData(oldp+206,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+207,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+208,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[2]),32);
        tracep->fullQData(oldp+209,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_b__i_mux_concat_data),64);
        tracep->fullIData(oldp+211,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+212,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[1]),32);
        tracep->fullBit(oldp+213,(((0U == vlTOPp->riscv_top__DOT__o_alu_result_e)
                                    ? 1U : 0U)));
        tracep->fullIData(oldp+214,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0),32);
        tracep->fullIData(oldp+215,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6),32);
        tracep->fullIData(oldp+216,(vlTOPp->riscv_top__DOT__o_reg_write_e),32);
        tracep->fullIData(oldp+217,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_decode__o_register_q_13)),32);
        tracep->fullIData(oldp+218,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__o_dmem_data_),32);
        tracep->fullIData(oldp+219,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0),32);
        tracep->fullIData(oldp+220,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4),32);
        tracep->fullIData(oldp+221,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)),32);
        tracep->fullIData(oldp+222,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),32);
        tracep->fullWData(oldp+223,(vlTOPp->riscv_top__DOT____Vcellinp__u_mux_pcf__i_mux_concat_data),128);
        tracep->fullIData(oldp+227,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+228,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+229,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[2]),32);
        tracep->fullIData(oldp+230,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[3]),32);
        tracep->fullIData(oldp+231,(vlTOPp->o_im_rd_f),32);
        tracep->fullIData(oldp+232,(vlTOPp->o_pc_f),32);
        tracep->fullIData(oldp+233,(vlTOPp->o_alu_result_m),32);
        tracep->fullBit(oldp+234,(vlTOPp->o_mem_write_m));
        tracep->fullCData(oldp+235,(vlTOPp->o_mem_byte_sel_m),4);
        tracep->fullIData(oldp+236,(vlTOPp->o_write_data_m),32);
        tracep->fullIData(oldp+237,(vlTOPp->o_read_data_m),32);
        tracep->fullBit(oldp+238,(vlTOPp->i_clk));
        tracep->fullBit(oldp+239,(vlTOPp->i_rstn));
        tracep->fullIData(oldp+240,(((IData)(4U) + vlTOPp->o_pc_f)),32);
        tracep->fullIData(oldp+241,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                               >> 0xfU))]),32);
        tracep->fullIData(oldp+242,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                               >> 0x14U))]),32);
        tracep->fullBit(oldp+243,((1U & ((IData)(vlTOPp->riscv_top__DOT__o_zero_condition_e)
                                          ? (~ ((0U 
                                                 == vlTOPp->riscv_top__DOT__o_alu_result_e)
                                                 ? 1U
                                                 : 0U))
                                          : ((0U == vlTOPp->riscv_top__DOT__o_alu_result_e)
                                              ? 1U : 0U)))));
        tracep->fullSData(oldp+244,((0x3fffU & (vlTOPp->o_pc_f 
                                                >> 2U))),14);
        tracep->fullSData(oldp+245,((0x3fffU & (vlTOPp->o_alu_result_m 
                                                >> 2U))),14);
        tracep->fullIData(oldp+246,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__i),32);
        tracep->fullIData(oldp+247,(0U),32);
        tracep->fullBit(oldp+248,(vlTOPp->riscv_top__DOT__o_alu_src_d));
        tracep->fullIData(oldp+249,(4U),32);
        tracep->fullIData(oldp+250,(3U),32);
        tracep->fullIData(oldp+251,(2U),32);
        tracep->fullIData(oldp+252,(4U),32);
    }
}

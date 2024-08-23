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
        tracep->declBit(c+229,"i_clk", false,-1);
        tracep->declBit(c+230,"i_rstn", false,-1);
        tracep->declBus(c+235,"riscv_top REGISTER_INIT", false,-1, 31,0);
        tracep->declBit(c+229,"riscv_top i_clk", false,-1);
        tracep->declBit(c+230,"riscv_top i_rstn", false,-1);
        tracep->declBit(c+147,"riscv_top o_pc_src_e", false,-1);
        tracep->declBus(c+65,"riscv_top o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top o_pc_plus_4_f", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top o_pc_f", false,-1, 31,0);
        tracep->declBus(c+107,"riscv_top o_pc_f_", false,-1, 31,0);
        tracep->declBus(c+148,"riscv_top o_instr_d", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_top o_pc_d", false,-1, 31,0);
        tracep->declBus(c+68,"riscv_top o_pc_plus_4_d", false,-1, 31,0);
        tracep->declBit(c+150,"riscv_top o_stall_d", false,-1);
        tracep->declBit(c+147,"riscv_top o_flush_d", false,-1);
        tracep->declBus(c+151,"riscv_top rs1_d", false,-1, 4,0);
        tracep->declBus(c+152,"riscv_top rs2_d", false,-1, 4,0);
        tracep->declBus(c+153,"riscv_top rd_d", false,-1, 4,0);
        tracep->declBus(c+154,"riscv_top o_result_src_d", false,-1, 1,0);
        tracep->declBit(c+155,"riscv_top o_alu_src_d", false,-1);
        tracep->declBit(c+156,"riscv_top o_reg_write_d", false,-1);
        tracep->declBit(c+157,"riscv_top o_mem_write_d", false,-1);
        tracep->declBus(c+158,"riscv_top o_mem_byte_sel_d", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top o_alu_control_d", false,-1, 3,0);
        tracep->declBit(c+160,"riscv_top o_jump_d", false,-1);
        tracep->declBit(c+161,"riscv_top o_branch_d", false,-1);
        tracep->declBus(c+231,"riscv_top o_rd1_d", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top o_rd2_d", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top o_extimm_d", false,-1, 31,0);
        tracep->declBit(c+163,"riscv_top o_zero_condition_d", false,-1);
        tracep->declBus(c+164,"riscv_top o_result_w", false,-1, 31,0);
        tracep->declBus(c+165,"riscv_top o_rd_w", false,-1, 4,0);
        tracep->declBit(c+166,"riscv_top o_reg_write_w", false,-1);
        tracep->declBus(c+69,"riscv_top o_result_src_e", false,-1, 1,0);
        tracep->declBit(c+70,"riscv_top o_alu_src_e", false,-1);
        tracep->declBit(c+167,"riscv_top o_reg_write_e", false,-1);
        tracep->declBit(c+168,"riscv_top o_mem_write_e", false,-1);
        tracep->declBus(c+169,"riscv_top o_mem_byte_sel_e", false,-1, 3,0);
        tracep->declBus(c+71,"riscv_top o_alu_control_e", false,-1, 3,0);
        tracep->declBit(c+72,"riscv_top o_jump_e", false,-1);
        tracep->declBit(c+73,"riscv_top o_branch_e", false,-1);
        tracep->declBus(c+74,"riscv_top o_rd1_e", false,-1, 31,0);
        tracep->declBus(c+75,"riscv_top o_rd2_e", false,-1, 31,0);
        tracep->declBus(c+76,"riscv_top o_rs1_e", false,-1, 4,0);
        tracep->declBus(c+77,"riscv_top o_rs2_e", false,-1, 4,0);
        tracep->declBus(c+170,"riscv_top o_rd_e", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top o_extimm_e", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top o_pc_plus_4_e", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top o_pc_e", false,-1, 31,0);
        tracep->declBit(c+81,"riscv_top o_zero_condition_e", false,-1);
        tracep->declBit(c+171,"riscv_top o_flush_e", false,-1);
        tracep->declBit(c+108,"riscv_top o_zero_e", false,-1);
        tracep->declBus(c+172,"riscv_top o_alu_result_e", false,-1, 31,0);
        tracep->declBus(c+173,"riscv_top o_write_data_e", false,-1, 31,0);
        tracep->declBus(c+82,"riscv_top o_pc_target_e", false,-1, 31,0);
        tracep->declBit(c+109,"riscv_top o_forward_a_e", false,-1);
        tracep->declBit(c+110,"riscv_top o_forward_b_e", false,-1);
        tracep->declBit(c+174,"riscv_top o_reg_write_m", false,-1);
        tracep->declBus(c+83,"riscv_top o_result_src_m", false,-1, 1,0);
        tracep->declBit(c+175,"riscv_top o_mem_write_m", false,-1);
        tracep->declBus(c+176,"riscv_top o_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBus(c+177,"riscv_top o_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+178,"riscv_top o_write_data_m", false,-1, 31,0);
        tracep->declBus(c+179,"riscv_top o_rd_m", false,-1, 4,0);
        tracep->declBus(c+84,"riscv_top o_pc_plus_4_m", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top o_read_data_m", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top o_result_src_w", false,-1, 1,0);
        tracep->declBus(c+86,"riscv_top o_alu_result_w", false,-1, 31,0);
        tracep->declBus(c+87,"riscv_top o_read_data_w", false,-1, 31,0);
        tracep->declBus(c+88,"riscv_top o_pc_plus_4_w", false,-1, 31,0);
        tracep->declBit(c+150,"riscv_top o_stall_f", false,-1);
        tracep->declBus(c+65,"riscv_top u_riscv_fetch o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_riscv_fetch o_pc_plus_4_f", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_riscv_fetch i_pc_f", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top u_riscv_fetch u_riscv_imem o_imem_data", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top u_riscv_fetch u_riscv_imem i_imem_addr", false,-1, 13,0);
        tracep->declArray(c+1,"riscv_top u_riscv_fetch u_riscv_imem FILE_TEXT_MIF", false,-1, 1023,0);
        tracep->declBus(c+66,"riscv_top u_riscv_fetch u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_riscv_fetch u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top u_riscv_fetch u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+235,"riscv_top u_riscv_register_fetch REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+148,"riscv_top u_riscv_register_fetch o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_top u_riscv_register_fetch o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+68,"riscv_top u_riscv_register_fetch o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+65,"riscv_top u_riscv_register_fetch i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_riscv_register_fetch i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+66,"riscv_top u_riscv_register_fetch i_register_d_2", false,-1, 31,0);
        tracep->declBit(c+150,"riscv_top u_riscv_register_fetch i_register_en", false,-1);
        tracep->declBit(c+229,"riscv_top u_riscv_register_fetch i_clk", false,-1);
        tracep->declBit(c+147,"riscv_top u_riscv_register_fetch i_clr", false,-1);
        tracep->declBit(c+230,"riscv_top u_riscv_register_fetch i_rstn", false,-1);
        tracep->declBus(c+154,"riscv_top u_riscv_decode o_result_src_d", false,-1, 1,0);
        tracep->declBit(c+155,"riscv_top u_riscv_decode o_alu_src_d", false,-1);
        tracep->declBit(c+156,"riscv_top u_riscv_decode o_reg_write_d", false,-1);
        tracep->declBit(c+157,"riscv_top u_riscv_decode o_mem_write_d", false,-1);
        tracep->declBus(c+158,"riscv_top u_riscv_decode o_mem_byte_sel_d", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top u_riscv_decode o_alu_control_d", false,-1, 3,0);
        tracep->declBus(c+231,"riscv_top u_riscv_decode o_rd1_d", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_decode o_rd2_d", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_riscv_decode o_extimm_d", false,-1, 31,0);
        tracep->declBit(c+160,"riscv_top u_riscv_decode o_jump_d", false,-1);
        tracep->declBit(c+161,"riscv_top u_riscv_decode o_branch_d", false,-1);
        tracep->declBit(c+163,"riscv_top u_riscv_decode o_zero_condition", false,-1);
        tracep->declBus(c+148,"riscv_top u_riscv_decode i_instr_d", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_top u_riscv_decode i_pc_d", false,-1, 31,0);
        tracep->declBus(c+164,"riscv_top u_riscv_decode i_result_w", false,-1, 31,0);
        tracep->declBit(c+166,"riscv_top u_riscv_decode i_reg_write_w", false,-1);
        tracep->declBus(c+165,"riscv_top u_riscv_decode i_rd_w", false,-1, 4,0);
        tracep->declBit(c+229,"riscv_top u_riscv_decode i_clk", false,-1);
        tracep->declBus(c+180,"riscv_top u_riscv_decode o_immsrc_d", false,-1, 2,0);
        tracep->declBus(c+181,"riscv_top u_riscv_decode wd3", false,-1, 31,0);
        tracep->declBit(c+182,"riscv_top u_riscv_decode w3en", false,-1);
        tracep->declBit(c+183,"riscv_top u_riscv_decode o_aui", false,-1);
        tracep->declBit(c+184,"riscv_top u_riscv_decode o_lui", false,-1);
        tracep->declBus(c+180,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_imm", false,-1, 2,0);
        tracep->declBus(c+154,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_rd", false,-1, 1,0);
        tracep->declBit(c+155,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_alu_b", false,-1);
        tracep->declBit(c+156,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_reg_wr_en", false,-1);
        tracep->declBit(c+157,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_mem_wr_en", false,-1);
        tracep->declBus(c+158,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+160,"riscv_top u_riscv_decode u_riscv_ctrl o_jump_d", false,-1);
        tracep->declBit(c+161,"riscv_top u_riscv_decode u_riscv_ctrl o_branch_d", false,-1);
        tracep->declBit(c+183,"riscv_top u_riscv_decode u_riscv_ctrl o_aui", false,-1);
        tracep->declBit(c+184,"riscv_top u_riscv_decode u_riscv_ctrl o_lui", false,-1);
        tracep->declBit(c+163,"riscv_top u_riscv_decode u_riscv_ctrl o_zero_condition", false,-1);
        tracep->declBus(c+185,"riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_opcode", false,-1, 6,0);
        tracep->declBus(c+186,"riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_funct3", false,-1, 2,0);
        tracep->declBit(c+187,"riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_funct7_5b", false,-1);
        tracep->declArray(c+188,"riscv_top u_riscv_decode u_riscv_ctrl DEBUG_INSTR", false,-1, 255,0);
        tracep->declBus(c+231,"riscv_top u_riscv_decode u_riscv_regfile o_regfile_rs1_data", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_decode u_riscv_regfile o_regfile_rs2_data", false,-1, 31,0);
        tracep->declBus(c+151,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+152,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+181,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_data", false,-1, 31,0);
        tracep->declBus(c+165,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_addr", false,-1, 4,0);
        tracep->declBit(c+182,"riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_wen", false,-1);
        tracep->declBit(c+229,"riscv_top u_riscv_decode u_riscv_regfile i_clk", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+115+i*1,"riscv_top u_riscv_decode u_riscv_regfile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+162,"riscv_top u_riscv_decode u_riscv_immext o_imm_ext", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_top u_riscv_decode u_riscv_immext i_imm_instr", false,-1, 31,0);
        tracep->declBus(c+180,"riscv_top u_riscv_decode u_riscv_immext i_imm_src", false,-1, 2,0);
        tracep->declBus(c+235,"riscv_top u_riscv_register_decode REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+69,"riscv_top u_riscv_register_decode o_register_q_0", false,-1, 1,0);
        tracep->declBit(c+70,"riscv_top u_riscv_register_decode o_register_q_1", false,-1);
        tracep->declBit(c+167,"riscv_top u_riscv_register_decode o_register_q_2", false,-1);
        tracep->declBit(c+168,"riscv_top u_riscv_register_decode o_register_q_3", false,-1);
        tracep->declBus(c+169,"riscv_top u_riscv_register_decode o_register_q_4", false,-1, 3,0);
        tracep->declBus(c+71,"riscv_top u_riscv_register_decode o_register_q_5", false,-1, 3,0);
        tracep->declBit(c+72,"riscv_top u_riscv_register_decode o_register_q_6", false,-1);
        tracep->declBit(c+73,"riscv_top u_riscv_register_decode o_register_q_7", false,-1);
        tracep->declBus(c+74,"riscv_top u_riscv_register_decode o_register_q_8", false,-1, 31,0);
        tracep->declBus(c+75,"riscv_top u_riscv_register_decode o_register_q_9", false,-1, 31,0);
        tracep->declBus(c+76,"riscv_top u_riscv_register_decode o_register_q_10", false,-1, 4,0);
        tracep->declBus(c+77,"riscv_top u_riscv_register_decode o_register_q_11", false,-1, 4,0);
        tracep->declBus(c+170,"riscv_top u_riscv_register_decode o_register_q_12", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top u_riscv_register_decode o_register_q_13", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_riscv_register_decode o_register_q_14", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top u_riscv_register_decode o_register_q_15", false,-1, 31,0);
        tracep->declBit(c+81,"riscv_top u_riscv_register_decode o_register_q_16", false,-1);
        tracep->declBus(c+154,"riscv_top u_riscv_register_decode i_register_d_0", false,-1, 1,0);
        tracep->declBit(c+155,"riscv_top u_riscv_register_decode i_register_d_1", false,-1);
        tracep->declBit(c+156,"riscv_top u_riscv_register_decode i_register_d_2", false,-1);
        tracep->declBit(c+157,"riscv_top u_riscv_register_decode i_register_d_3", false,-1);
        tracep->declBus(c+158,"riscv_top u_riscv_register_decode i_register_d_4", false,-1, 3,0);
        tracep->declBus(c+159,"riscv_top u_riscv_register_decode i_register_d_5", false,-1, 3,0);
        tracep->declBit(c+160,"riscv_top u_riscv_register_decode i_register_d_6", false,-1);
        tracep->declBit(c+161,"riscv_top u_riscv_register_decode i_register_d_7", false,-1);
        tracep->declBus(c+231,"riscv_top u_riscv_register_decode i_register_d_8", false,-1, 31,0);
        tracep->declBus(c+232,"riscv_top u_riscv_register_decode i_register_d_9", false,-1, 31,0);
        tracep->declBus(c+151,"riscv_top u_riscv_register_decode i_register_d_10", false,-1, 4,0);
        tracep->declBus(c+152,"riscv_top u_riscv_register_decode i_register_d_11", false,-1, 4,0);
        tracep->declBus(c+197,"riscv_top u_riscv_register_decode i_register_d_12", false,-1, 31,0);
        tracep->declBus(c+162,"riscv_top u_riscv_register_decode i_register_d_13", false,-1, 31,0);
        tracep->declBus(c+68,"riscv_top u_riscv_register_decode i_register_d_14", false,-1, 31,0);
        tracep->declBus(c+149,"riscv_top u_riscv_register_decode i_register_d_15", false,-1, 31,0);
        tracep->declBit(c+163,"riscv_top u_riscv_register_decode i_register_d_16", false,-1);
        tracep->declBit(c+229,"riscv_top u_riscv_register_decode i_clk", false,-1);
        tracep->declBit(c+171,"riscv_top u_riscv_register_decode i_clr", false,-1);
        tracep->declBit(c+230,"riscv_top u_riscv_register_decode i_rstn", false,-1);
        tracep->declBit(c+108,"riscv_top u_riscv_execute o_zero_e", false,-1);
        tracep->declBus(c+172,"riscv_top u_riscv_execute o_alu_result_e", false,-1, 31,0);
        tracep->declBus(c+173,"riscv_top u_riscv_execute o_write_data_e", false,-1, 31,0);
        tracep->declBus(c+82,"riscv_top u_riscv_execute o_pc_target_e", false,-1, 31,0);
        tracep->declBus(c+71,"riscv_top u_riscv_execute i_alu_control_e", false,-1, 3,0);
        tracep->declBit(c+70,"riscv_top u_riscv_execute i_alu_src_e", false,-1);
        tracep->declBus(c+74,"riscv_top u_riscv_execute i_rd1_e", false,-1, 31,0);
        tracep->declBus(c+75,"riscv_top u_riscv_execute i_rd2_e", false,-1, 31,0);
        tracep->declBus(c+164,"riscv_top u_riscv_execute i_result_w", false,-1, 31,0);
        tracep->declBus(c+177,"riscv_top u_riscv_execute i_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top u_riscv_execute i_pc_e", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top u_riscv_execute i_extimm_e", false,-1, 31,0);
        tracep->declBit(c+109,"riscv_top u_riscv_execute i_forward_a_e", false,-1);
        tracep->declBit(c+110,"riscv_top u_riscv_execute i_forward_b_e", false,-1);
        tracep->declBit(c+81,"riscv_top u_riscv_execute i_zero_condition", false,-1);
        tracep->declBus(c+198,"riscv_top u_riscv_execute o_src_a_e", false,-1, 31,0);
        tracep->declBus(c+199,"riscv_top u_riscv_execute o_src_b_e", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_top u_riscv_execute u_mux_forward_a N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+198,"riscv_top u_riscv_execute u_mux_forward_a o_mux_data", false,-1, 31,0);
        tracep->declArray(c+200,"riscv_top u_riscv_execute u_mux_forward_a i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+111,"riscv_top u_riscv_execute u_mux_forward_a i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+203+i*1,"riscv_top u_riscv_execute u_mux_forward_a mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+237,"riscv_top u_riscv_execute u_mux_forward_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+173,"riscv_top u_riscv_execute u_mux_forward_b o_mux_data", false,-1, 31,0);
        tracep->declArray(c+206,"riscv_top u_riscv_execute u_mux_forward_b i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+112,"riscv_top u_riscv_execute u_mux_forward_b i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+209+i*1,"riscv_top u_riscv_execute u_mux_forward_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+238,"riscv_top u_riscv_execute u_mux_alu_src_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+199,"riscv_top u_riscv_execute u_mux_alu_src_b o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+212,"riscv_top u_riscv_execute u_mux_alu_src_b i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+70,"riscv_top u_riscv_execute u_mux_alu_src_b i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+214+i*1,"riscv_top u_riscv_execute u_mux_alu_src_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+172,"riscv_top u_riscv_execute u_riscv_alu o_alu_result", false,-1, 31,0);
        tracep->declBit(c+108,"riscv_top u_riscv_execute u_riscv_alu o_alu_zero", false,-1);
        tracep->declBus(c+198,"riscv_top u_riscv_execute u_riscv_alu i_alu_a", false,-1, 31,0);
        tracep->declBus(c+199,"riscv_top u_riscv_execute u_riscv_alu i_alu_b", false,-1, 31,0);
        tracep->declBus(c+71,"riscv_top u_riscv_execute u_riscv_alu i_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+81,"riscv_top u_riscv_execute u_riscv_alu i_zero_condition", false,-1);
        tracep->declQuad(c+90,"riscv_top u_riscv_execute u_riscv_alu DEBUG_ALU_OP", false,-1, 63,0);
        tracep->declBus(c+82,"riscv_top u_riscv_execute u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+80,"riscv_top u_riscv_execute u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+78,"riscv_top u_riscv_execute u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+235,"riscv_top u_riscv_register_execute REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+216,"riscv_top u_riscv_register_execute o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+92,"riscv_top u_riscv_register_execute o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+217,"riscv_top u_riscv_register_execute o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+218,"riscv_top u_riscv_register_execute o_register_q_3", false,-1, 31,0);
        tracep->declBus(c+177,"riscv_top u_riscv_register_execute o_register_q_4", false,-1, 31,0);
        tracep->declBus(c+178,"riscv_top u_riscv_register_execute o_register_q_5", false,-1, 31,0);
        tracep->declBus(c+219,"riscv_top u_riscv_register_execute o_register_q_6", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top u_riscv_register_execute o_register_q_7", false,-1, 31,0);
        tracep->declBus(c+220,"riscv_top u_riscv_register_execute i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+93,"riscv_top u_riscv_register_execute i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+221,"riscv_top u_riscv_register_execute i_register_d_2", false,-1, 31,0);
        tracep->declBus(c+222,"riscv_top u_riscv_register_execute i_register_d_3", false,-1, 31,0);
        tracep->declBus(c+172,"riscv_top u_riscv_register_execute i_register_d_4", false,-1, 31,0);
        tracep->declBus(c+173,"riscv_top u_riscv_register_execute i_register_d_5", false,-1, 31,0);
        tracep->declBus(c+170,"riscv_top u_riscv_register_execute i_register_d_6", false,-1, 31,0);
        tracep->declBus(c+79,"riscv_top u_riscv_register_execute i_register_d_7", false,-1, 31,0);
        tracep->declBit(c+229,"riscv_top u_riscv_register_execute i_clk", false,-1);
        tracep->declBit(c+230,"riscv_top u_riscv_register_execute i_rstn", false,-1);
        tracep->declBus(c+233,"riscv_top u_riscv_memory o_read_data_m", false,-1, 31,0);
        tracep->declBus(c+177,"riscv_top u_riscv_memory i_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+178,"riscv_top u_riscv_memory i_write_data_m", false,-1, 31,0);
        tracep->declBit(c+175,"riscv_top u_riscv_memory i_mem_write_m", false,-1);
        tracep->declBus(c+176,"riscv_top u_riscv_memory i_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBit(c+229,"riscv_top u_riscv_memory i_clk", false,-1);
        tracep->declBus(c+233,"riscv_top u_riscv_memory u_riscv_dmem o_dmem_data", false,-1, 31,0);
        tracep->declBus(c+178,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_data", false,-1, 31,0);
        tracep->declBus(c+223,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_addr", false,-1, 13,0);
        tracep->declBus(c+176,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_byte_sel", false,-1, 3,0);
        tracep->declBit(c+175,"riscv_top u_riscv_memory u_riscv_dmem i_dmem_wr_en", false,-1);
        tracep->declBit(c+229,"riscv_top u_riscv_memory u_riscv_dmem i_clk", false,-1);
        tracep->declArray(c+33,"riscv_top u_riscv_memory u_riscv_dmem FILE_DATA_MIF", false,-1, 1023,0);
        tracep->declBus(c+234,"riscv_top u_riscv_memory u_riscv_dmem i", false,-1, 31,0);
        tracep->declBus(c+235,"riscv_top u_riscv_register_memory REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+224,"riscv_top u_riscv_register_memory o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+94,"riscv_top u_riscv_register_memory o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top u_riscv_register_memory o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+87,"riscv_top u_riscv_register_memory o_register_q_3", false,-1, 31,0);
        tracep->declBus(c+225,"riscv_top u_riscv_register_memory o_register_q_4", false,-1, 31,0);
        tracep->declBus(c+88,"riscv_top u_riscv_register_memory o_register_q_5", false,-1, 31,0);
        tracep->declBus(c+226,"riscv_top u_riscv_register_memory i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+95,"riscv_top u_riscv_register_memory i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+177,"riscv_top u_riscv_register_memory i_register_d_2", false,-1, 31,0);
        tracep->declBus(c+233,"riscv_top u_riscv_register_memory i_register_d_3", false,-1, 31,0);
        tracep->declBus(c+227,"riscv_top u_riscv_register_memory i_register_d_4", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top u_riscv_register_memory i_register_d_5", false,-1, 31,0);
        tracep->declBit(c+229,"riscv_top u_riscv_register_memory i_clk", false,-1);
        tracep->declBit(c+230,"riscv_top u_riscv_register_memory i_rstn", false,-1);
        tracep->declBus(c+237,"riscv_top u_mux_result N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+164,"riscv_top u_mux_result o_mux_data", false,-1, 31,0);
        tracep->declArray(c+96,"riscv_top u_mux_result i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+85,"riscv_top u_mux_result i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+99+i*1,"riscv_top u_mux_result mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBit(c+150,"riscv_top u_riscv_hazard_unit o_stall_f", false,-1);
        tracep->declBit(c+150,"riscv_top u_riscv_hazard_unit o_stall_d", false,-1);
        tracep->declBit(c+147,"riscv_top u_riscv_hazard_unit o_flush_d", false,-1);
        tracep->declBit(c+171,"riscv_top u_riscv_hazard_unit o_flush_e", false,-1);
        tracep->declBus(c+113,"riscv_top u_riscv_hazard_unit o_forward_a_e", false,-1, 1,0);
        tracep->declBus(c+114,"riscv_top u_riscv_hazard_unit o_forward_b_e", false,-1, 1,0);
        tracep->declBus(c+151,"riscv_top u_riscv_hazard_unit i_rs1_d", false,-1, 4,0);
        tracep->declBus(c+152,"riscv_top u_riscv_hazard_unit i_rs2_d", false,-1, 4,0);
        tracep->declBus(c+228,"riscv_top u_riscv_hazard_unit i_rd_e", false,-1, 4,0);
        tracep->declBus(c+77,"riscv_top u_riscv_hazard_unit i_rs2_e", false,-1, 4,0);
        tracep->declBus(c+76,"riscv_top u_riscv_hazard_unit i_rs1_e", false,-1, 4,0);
        tracep->declBit(c+147,"riscv_top u_riscv_hazard_unit i_pc_src_e", false,-1);
        tracep->declBit(c+102,"riscv_top u_riscv_hazard_unit i_result_src_e", false,-1);
        tracep->declBus(c+179,"riscv_top u_riscv_hazard_unit i_rd_m", false,-1, 4,0);
        tracep->declBus(c+165,"riscv_top u_riscv_hazard_unit i_rd_w", false,-1, 4,0);
        tracep->declBit(c+174,"riscv_top u_riscv_hazard_unit i_reg_write_m", false,-1);
        tracep->declBit(c+166,"riscv_top u_riscv_hazard_unit i_reg_write_w", false,-1);
        tracep->declBit(c+150,"riscv_top u_riscv_hazard_unit lwstall", false,-1);
        tracep->declBus(c+238,"riscv_top u_mux_pcf N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+107,"riscv_top u_mux_pcf o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+103,"riscv_top u_mux_pcf i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+147,"riscv_top u_mux_pcf i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+105+i*1,"riscv_top u_mux_pcf mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+235,"riscv_top u_riscv_register REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+67,"riscv_top u_riscv_register o_register_q", false,-1, 31,0);
        tracep->declBus(c+107,"riscv_top u_riscv_register i_register_d", false,-1, 31,0);
        tracep->declBit(c+150,"riscv_top u_riscv_register i_register_en", false,-1);
        tracep->declBit(c+229,"riscv_top u_riscv_register i_clk", false,-1);
        tracep->declBit(c+230,"riscv_top u_riscv_register i_rstn", false,-1);
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
        tracep->fullIData(oldp+65,(vlTOPp->riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__imem_arr
                                   [(0x3fffU & vlTOPp->riscv_top__DOT__o_pc_f)]),32);
        tracep->fullIData(oldp+66,(((IData)(4U) + vlTOPp->riscv_top__DOT__o_pc_f)),32);
        tracep->fullIData(oldp+67,(vlTOPp->riscv_top__DOT__o_pc_f),32);
        tracep->fullIData(oldp+68,(vlTOPp->riscv_top__DOT__o_pc_plus_4_d),32);
        tracep->fullCData(oldp+69,(vlTOPp->riscv_top__DOT__o_result_src_e),2);
        tracep->fullBit(oldp+70,(vlTOPp->riscv_top__DOT__o_alu_src_e));
        tracep->fullCData(oldp+71,(vlTOPp->riscv_top__DOT__o_alu_control_e),4);
        tracep->fullBit(oldp+72,(vlTOPp->riscv_top__DOT__o_jump_e));
        tracep->fullBit(oldp+73,(vlTOPp->riscv_top__DOT__o_branch_e));
        tracep->fullIData(oldp+74,(vlTOPp->riscv_top__DOT__o_rd1_e),32);
        tracep->fullIData(oldp+75,(vlTOPp->riscv_top__DOT__o_rd2_e),32);
        tracep->fullCData(oldp+76,(vlTOPp->riscv_top__DOT__o_rs1_e),5);
        tracep->fullCData(oldp+77,(vlTOPp->riscv_top__DOT__o_rs2_e),5);
        tracep->fullIData(oldp+78,(vlTOPp->riscv_top__DOT__o_extimm_e),32);
        tracep->fullIData(oldp+79,(vlTOPp->riscv_top__DOT__o_pc_plus_4_e),32);
        tracep->fullIData(oldp+80,(vlTOPp->riscv_top__DOT__o_pc_e),32);
        tracep->fullBit(oldp+81,(vlTOPp->riscv_top__DOT__o_zero_condition_e));
        tracep->fullIData(oldp+82,((vlTOPp->riscv_top__DOT__o_pc_e 
                                    + vlTOPp->riscv_top__DOT__o_extimm_e)),32);
        tracep->fullCData(oldp+83,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),2);
        tracep->fullIData(oldp+84,(vlTOPp->riscv_top__DOT__o_pc_plus_4_m),32);
        tracep->fullCData(oldp+85,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1)),2);
        tracep->fullIData(oldp+86,(vlTOPp->riscv_top__DOT__o_alu_result_w),32);
        tracep->fullIData(oldp+87,(vlTOPp->riscv_top__DOT__o_read_data_w),32);
        tracep->fullIData(oldp+88,(vlTOPp->riscv_top__DOT__o_pc_plus_4_w),32);
        tracep->fullSData(oldp+89,((0x3fffU & vlTOPp->riscv_top__DOT__o_pc_f)),14);
        tracep->fullQData(oldp+90,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
        tracep->fullIData(oldp+92,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1),32);
        tracep->fullIData(oldp+93,(vlTOPp->riscv_top__DOT__o_result_src_e),32);
        tracep->fullIData(oldp+94,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1),32);
        tracep->fullIData(oldp+95,((3U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),32);
        tracep->fullWData(oldp+96,(vlTOPp->riscv_top__DOT____Vcellinp__u_mux_result__i_mux_concat_data),96);
        tracep->fullIData(oldp+99,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+100,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+101,(vlTOPp->riscv_top__DOT__u_mux_result__DOT__mux_input_arr[2]),32);
        tracep->fullBit(oldp+102,((1U & (IData)(vlTOPp->riscv_top__DOT__o_result_src_e))));
        tracep->fullQData(oldp+103,(vlTOPp->riscv_top__DOT____Vcellinp__u_mux_pcf__i_mux_concat_data),64);
        tracep->fullIData(oldp+105,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+106,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+107,(vlTOPp->riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr
                                    [vlTOPp->riscv_top__DOT__o_pc_src_e]),32);
        tracep->fullBit(oldp+108,((((~ (IData)(vlTOPp->riscv_top__DOT__o_zero_condition_e)) 
                                    & (0U == vlTOPp->riscv_top__DOT__o_alu_result_e)) 
                                   | ((IData)(vlTOPp->riscv_top__DOT__o_zero_condition_e) 
                                      & (0U != vlTOPp->riscv_top__DOT__o_alu_result_e)))));
        tracep->fullBit(oldp+109,((((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                      == (0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                     & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                    & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                    ? 0U : (((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                               == (0x1fU 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                              & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                             & (0U 
                                                != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                             ? 1U : 0U))));
        tracep->fullBit(oldp+110,((((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                      == (0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                     & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                    & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                    ? 0U : (((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                               == (0x1fU 
                                                   & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                              & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                             & (0U 
                                                != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                             ? 1U : 0U))));
        tracep->fullCData(oldp+111,((((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                        == (0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
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
                                               : 0U))),2);
        tracep->fullCData(oldp+112,((((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                        == (0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
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
                                               : 0U))),2);
        tracep->fullCData(oldp+113,((((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                        == (0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                       & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                      & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                      ? 2U : (((((IData)(vlTOPp->riscv_top__DOT__o_rs1_e) 
                                                 == 
                                                 (0x1fU 
                                                  & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                               & (0U 
                                                  != (IData)(vlTOPp->riscv_top__DOT__o_rs1_e)))
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+114,((((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                        == (0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                       & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                      & (0U != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                      ? 2U : (((((IData)(vlTOPp->riscv_top__DOT__o_rs2_e) 
                                                 == 
                                                 (0x1fU 
                                                  & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                               & (0U 
                                                  != (IData)(vlTOPp->riscv_top__DOT__o_rs2_e)))
                                               ? 1U
                                               : 0U))),2);
        tracep->fullIData(oldp+115,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
        tracep->fullIData(oldp+116,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
        tracep->fullIData(oldp+117,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
        tracep->fullIData(oldp+118,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
        tracep->fullIData(oldp+119,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
        tracep->fullIData(oldp+120,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
        tracep->fullIData(oldp+121,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
        tracep->fullIData(oldp+122,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
        tracep->fullIData(oldp+123,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
        tracep->fullIData(oldp+124,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
        tracep->fullIData(oldp+125,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
        tracep->fullIData(oldp+126,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
        tracep->fullIData(oldp+127,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
        tracep->fullIData(oldp+128,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
        tracep->fullIData(oldp+129,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
        tracep->fullIData(oldp+130,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
        tracep->fullIData(oldp+131,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
        tracep->fullIData(oldp+132,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
        tracep->fullIData(oldp+133,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
        tracep->fullIData(oldp+134,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
        tracep->fullIData(oldp+135,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
        tracep->fullIData(oldp+136,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
        tracep->fullIData(oldp+137,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
        tracep->fullIData(oldp+138,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
        tracep->fullIData(oldp+139,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
        tracep->fullIData(oldp+140,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
        tracep->fullIData(oldp+141,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
        tracep->fullIData(oldp+142,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
        tracep->fullIData(oldp+143,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
        tracep->fullIData(oldp+144,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
        tracep->fullIData(oldp+145,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
        tracep->fullIData(oldp+146,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        tracep->fullBit(oldp+147,(vlTOPp->riscv_top__DOT__o_pc_src_e));
        tracep->fullIData(oldp+148,(vlTOPp->riscv_top__DOT__o_instr_d),32);
        tracep->fullIData(oldp+149,(vlTOPp->riscv_top__DOT__o_pc_d),32);
        tracep->fullBit(oldp+150,(vlTOPp->riscv_top__DOT__u_riscv_hazard_unit__DOT__lwstall));
        tracep->fullCData(oldp+151,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+152,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+153,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 7U))),5);
        tracep->fullCData(oldp+154,(((3U == (0x7fU 
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
        tracep->fullBit(oldp+155,(vlTOPp->riscv_top__DOT__o_alu_src_d));
        tracep->fullBit(oldp+156,((1U & (~ ((0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top__DOT__o_instr_d)))))));
        tracep->fullBit(oldp+157,((0x23U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullCData(oldp+158,((((3U == (0x7fU 
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
        tracep->fullCData(oldp+159,(vlTOPp->riscv_top__DOT__o_alu_control_d),4);
        tracep->fullBit(oldp+160,((0x6fU == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+161,((0x63U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullIData(oldp+162,(vlTOPp->riscv_top__DOT__o_extimm_d),32);
        tracep->fullBit(oldp+163,(((0x63U == (0x7fU 
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
        tracep->fullIData(oldp+164,(vlTOPp->riscv_top__DOT__o_result_w),32);
        tracep->fullCData(oldp+165,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)),5);
        tracep->fullBit(oldp+166,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0)));
        tracep->fullBit(oldp+167,(vlTOPp->riscv_top__DOT__o_reg_write_e));
        tracep->fullBit(oldp+168,(vlTOPp->riscv_top__DOT__o_mem_write_e));
        tracep->fullCData(oldp+169,(vlTOPp->riscv_top__DOT__o_mem_byte_sel_e),4);
        tracep->fullIData(oldp+170,(vlTOPp->riscv_top__DOT__o_rd_e),32);
        tracep->fullBit(oldp+171,(vlTOPp->riscv_top__DOT__o_flush_e));
        tracep->fullIData(oldp+172,(vlTOPp->riscv_top__DOT__o_alu_result_e),32);
        tracep->fullIData(oldp+173,(vlTOPp->riscv_top__DOT__o_write_data_e),32);
        tracep->fullBit(oldp+174,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)));
        tracep->fullBit(oldp+175,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2)));
        tracep->fullCData(oldp+176,((0xfU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3)),4);
        tracep->fullIData(oldp+177,(vlTOPp->riscv_top__DOT__o_alu_result_m),32);
        tracep->fullIData(oldp+178,(vlTOPp->riscv_top__DOT__o_write_data_m),32);
        tracep->fullCData(oldp+179,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),5);
        tracep->fullCData(oldp+180,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d),3);
        tracep->fullIData(oldp+181,(((0x37U == (0x7fU 
                                                & vlTOPp->riscv_top__DOT__o_instr_d))
                                      ? vlTOPp->riscv_top__DOT__o_extimm_d
                                      : ((0x17U == 
                                          (0x7fU & vlTOPp->riscv_top__DOT__o_instr_d))
                                          ? (vlTOPp->riscv_top__DOT__o_pc_d 
                                             + vlTOPp->riscv_top__DOT__o_extimm_d)
                                          : vlTOPp->riscv_top__DOT__o_result_w))),32);
        tracep->fullBit(oldp+182,((1U & (((0x37U == 
                                           (0x7fU & vlTOPp->riscv_top__DOT__o_instr_d)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top__DOT__o_instr_d))) 
                                         | vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0))));
        tracep->fullBit(oldp+183,((0x17U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+184,((0x37U == (0x7fU 
                                             & vlTOPp->riscv_top__DOT__o_instr_d))));
        tracep->fullCData(oldp+185,((0x7fU & vlTOPp->riscv_top__DOT__o_instr_d)),7);
        tracep->fullCData(oldp+186,((7U & (vlTOPp->riscv_top__DOT__o_instr_d 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+187,((1U & (vlTOPp->riscv_top__DOT__o_instr_d 
                                         >> 0x1eU))));
        tracep->fullWData(oldp+188,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR),256);
        tracep->fullIData(oldp+196,((0x1ffffffU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                                   >> 7U))),32);
        tracep->fullIData(oldp+197,((0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                              >> 7U))),32);
        tracep->fullIData(oldp+198,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__o_src_a_e),32);
        tracep->fullIData(oldp+199,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__o_src_b_e),32);
        tracep->fullWData(oldp+200,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_a__i_mux_concat_data),96);
        tracep->fullIData(oldp+203,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+204,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+205,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[2]),32);
        tracep->fullWData(oldp+206,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_b__i_mux_concat_data),96);
        tracep->fullIData(oldp+209,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+210,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+211,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[2]),32);
        tracep->fullQData(oldp+212,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_b__i_mux_concat_data),64);
        tracep->fullIData(oldp+214,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+215,(vlTOPp->riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+216,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0),32);
        tracep->fullIData(oldp+217,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2),32);
        tracep->fullIData(oldp+218,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3),32);
        tracep->fullIData(oldp+219,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6),32);
        tracep->fullIData(oldp+220,(vlTOPp->riscv_top__DOT__o_reg_write_e),32);
        tracep->fullIData(oldp+221,(vlTOPp->riscv_top__DOT__o_mem_write_e),32);
        tracep->fullIData(oldp+222,(vlTOPp->riscv_top__DOT__o_mem_byte_sel_e),32);
        tracep->fullSData(oldp+223,((0x3fffU & vlTOPp->riscv_top__DOT__o_alu_result_m)),14);
        tracep->fullIData(oldp+224,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0),32);
        tracep->fullIData(oldp+225,(vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4),32);
        tracep->fullIData(oldp+226,((1U & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)),32);
        tracep->fullIData(oldp+227,((0x1fU & vlTOPp->riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),32);
        tracep->fullCData(oldp+228,((0x1fU & vlTOPp->riscv_top__DOT__o_rd_e)),5);
        tracep->fullBit(oldp+229,(vlTOPp->i_clk));
        tracep->fullBit(oldp+230,(vlTOPp->i_rstn));
        tracep->fullIData(oldp+231,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                               >> 0xfU))]),32);
        tracep->fullIData(oldp+232,(vlTOPp->riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top__DOT__o_instr_d 
                                               >> 0x14U))]),32);
        tracep->fullIData(oldp+233,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                    [(0x3fffU & vlTOPp->riscv_top__DOT__o_alu_result_m)]),32);
        tracep->fullIData(oldp+234,(vlTOPp->riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__i),32);
        tracep->fullIData(oldp+235,(0U),32);
        tracep->fullIData(oldp+236,(4U),32);
        tracep->fullIData(oldp+237,(3U),32);
        tracep->fullIData(oldp+238,(2U),32);
    }
}

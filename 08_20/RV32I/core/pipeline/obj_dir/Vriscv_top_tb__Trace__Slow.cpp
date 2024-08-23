// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vriscv_top_tb__Syms.h"


//======================

void Vriscv_top_tb::_traceDump() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumperp->dump(VL_TIME_Q());
}
void Vriscv_top_tb::_traceDumpOpen() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    if (VL_UNLIKELY(!__VlSymsp->__Vm_dumperp)) {
        __VlSymsp->__Vm_dumperp = new VerilatedVcdC();
        const char* cp = vl_dumpctl_filenamep();
        trace(__VlSymsp->__Vm_dumperp, 0, 0);
        __VlSymsp->__Vm_dumperp->open(vl_dumpctl_filenamep());
        __VlSymsp->__Vm_dumperp->changeThread();
        __VlSymsp->__Vm_dumping = true;
    }
}
void Vriscv_top_tb::_traceDumpClose() {
    const VerilatedLockGuard lock(__VlSymsp->__Vm_dumperMutex);
    __VlSymsp->__Vm_dumping = false;
    VL_DO_CLEAR(delete __VlSymsp->__Vm_dumperp, __VlSymsp->__Vm_dumperp = NULL);
}
void Vriscv_top_tb::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void Vriscv_top_tb::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vriscv_top_tb::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void Vriscv_top_tb::traceInitTop(void* userp, VerilatedVcd* tracep) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void Vriscv_top_tb::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+247,"riscv_top_tb i_clk", false,-1);
        tracep->declBit(c+1,"riscv_top_tb i_rstn", false,-1);
        tracep->declArray(c+2,"riscv_top_tb taskState", false,-1, 255,0);
        tracep->declBus(c+252,"riscv_top_tb err", false,-1, 31,0);
        tracep->declBus(c+10,"riscv_top_tb i", false,-1, 31,0);
        tracep->declBus(c+253,"riscv_top_tb j", false,-1, 31,0);
        tracep->declArray(c+11,"riscv_top_tb vcd_file", false,-1, 255,0);
        tracep->declBus(c+252,"riscv_top_tb u_riscv_top REGISTER_INIT", false,-1, 31,0);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top i_clk", false,-1);
        tracep->declBit(c+1,"riscv_top_tb u_riscv_top i_rstn", false,-1);
        tracep->declBit(c+165,"riscv_top_tb u_riscv_top o_pc_src_e", false,-1);
        tracep->declBus(c+83,"riscv_top_tb u_riscv_top o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top_tb u_riscv_top o_pc_plus_4_f", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top_tb u_riscv_top o_pc_f", false,-1, 31,0);
        tracep->declBus(c+125,"riscv_top_tb u_riscv_top o_pc_f_", false,-1, 31,0);
        tracep->declBus(c+166,"riscv_top_tb u_riscv_top o_instr_d", false,-1, 31,0);
        tracep->declBus(c+167,"riscv_top_tb u_riscv_top o_pc_d", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top_tb u_riscv_top o_pc_plus_4_d", false,-1, 31,0);
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top o_stall_d", false,-1);
        tracep->declBit(c+165,"riscv_top_tb u_riscv_top o_flush_d", false,-1);
        tracep->declBus(c+169,"riscv_top_tb u_riscv_top rs1_d", false,-1, 4,0);
        tracep->declBus(c+170,"riscv_top_tb u_riscv_top rs2_d", false,-1, 4,0);
        tracep->declBus(c+171,"riscv_top_tb u_riscv_top rd_d", false,-1, 4,0);
        tracep->declBus(c+172,"riscv_top_tb u_riscv_top o_result_src_d", false,-1, 1,0);
        tracep->declBit(c+173,"riscv_top_tb u_riscv_top o_alu_src_d", false,-1);
        tracep->declBit(c+174,"riscv_top_tb u_riscv_top o_reg_write_d", false,-1);
        tracep->declBit(c+175,"riscv_top_tb u_riscv_top o_mem_write_d", false,-1);
        tracep->declBus(c+176,"riscv_top_tb u_riscv_top o_mem_byte_sel_d", false,-1, 3,0);
        tracep->declBus(c+177,"riscv_top_tb u_riscv_top o_alu_control_d", false,-1, 3,0);
        tracep->declBit(c+178,"riscv_top_tb u_riscv_top o_jump_d", false,-1);
        tracep->declBit(c+179,"riscv_top_tb u_riscv_top o_branch_d", false,-1);
        tracep->declBus(c+248,"riscv_top_tb u_riscv_top o_rd1_d", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_top_tb u_riscv_top o_rd2_d", false,-1, 31,0);
        tracep->declBus(c+180,"riscv_top_tb u_riscv_top o_extimm_d", false,-1, 31,0);
        tracep->declBit(c+181,"riscv_top_tb u_riscv_top o_zero_condition_d", false,-1);
        tracep->declBus(c+182,"riscv_top_tb u_riscv_top o_result_w", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_top_tb u_riscv_top o_rd_w", false,-1, 4,0);
        tracep->declBit(c+184,"riscv_top_tb u_riscv_top o_reg_write_w", false,-1);
        tracep->declBus(c+87,"riscv_top_tb u_riscv_top o_result_src_e", false,-1, 1,0);
        tracep->declBit(c+88,"riscv_top_tb u_riscv_top o_alu_src_e", false,-1);
        tracep->declBit(c+185,"riscv_top_tb u_riscv_top o_reg_write_e", false,-1);
        tracep->declBit(c+186,"riscv_top_tb u_riscv_top o_mem_write_e", false,-1);
        tracep->declBus(c+187,"riscv_top_tb u_riscv_top o_mem_byte_sel_e", false,-1, 3,0);
        tracep->declBus(c+89,"riscv_top_tb u_riscv_top o_alu_control_e", false,-1, 3,0);
        tracep->declBit(c+90,"riscv_top_tb u_riscv_top o_jump_e", false,-1);
        tracep->declBit(c+91,"riscv_top_tb u_riscv_top o_branch_e", false,-1);
        tracep->declBus(c+92,"riscv_top_tb u_riscv_top o_rd1_e", false,-1, 31,0);
        tracep->declBus(c+93,"riscv_top_tb u_riscv_top o_rd2_e", false,-1, 31,0);
        tracep->declBus(c+94,"riscv_top_tb u_riscv_top o_rs1_e", false,-1, 4,0);
        tracep->declBus(c+95,"riscv_top_tb u_riscv_top o_rs2_e", false,-1, 4,0);
        tracep->declBus(c+188,"riscv_top_tb u_riscv_top o_rd_e", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top_tb u_riscv_top o_extimm_e", false,-1, 31,0);
        tracep->declBus(c+97,"riscv_top_tb u_riscv_top o_pc_plus_4_e", false,-1, 31,0);
        tracep->declBus(c+98,"riscv_top_tb u_riscv_top o_pc_e", false,-1, 31,0);
        tracep->declBit(c+99,"riscv_top_tb u_riscv_top o_zero_condition_e", false,-1);
        tracep->declBit(c+189,"riscv_top_tb u_riscv_top o_flush_e", false,-1);
        tracep->declBit(c+126,"riscv_top_tb u_riscv_top o_zero_e", false,-1);
        tracep->declBus(c+190,"riscv_top_tb u_riscv_top o_alu_result_e", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top_tb u_riscv_top o_write_data_e", false,-1, 31,0);
        tracep->declBus(c+100,"riscv_top_tb u_riscv_top o_pc_target_e", false,-1, 31,0);
        tracep->declBit(c+127,"riscv_top_tb u_riscv_top o_forward_a_e", false,-1);
        tracep->declBit(c+128,"riscv_top_tb u_riscv_top o_forward_b_e", false,-1);
        tracep->declBit(c+192,"riscv_top_tb u_riscv_top o_reg_write_m", false,-1);
        tracep->declBus(c+101,"riscv_top_tb u_riscv_top o_result_src_m", false,-1, 1,0);
        tracep->declBit(c+193,"riscv_top_tb u_riscv_top o_mem_write_m", false,-1);
        tracep->declBus(c+194,"riscv_top_tb u_riscv_top o_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBus(c+195,"riscv_top_tb u_riscv_top o_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_top_tb u_riscv_top o_write_data_m", false,-1, 31,0);
        tracep->declBus(c+197,"riscv_top_tb u_riscv_top o_rd_m", false,-1, 4,0);
        tracep->declBus(c+102,"riscv_top_tb u_riscv_top o_pc_plus_4_m", false,-1, 31,0);
        tracep->declBus(c+250,"riscv_top_tb u_riscv_top o_read_data_m", false,-1, 31,0);
        tracep->declBus(c+103,"riscv_top_tb u_riscv_top o_result_src_w", false,-1, 1,0);
        tracep->declBus(c+104,"riscv_top_tb u_riscv_top o_alu_result_w", false,-1, 31,0);
        tracep->declBus(c+105,"riscv_top_tb u_riscv_top o_read_data_w", false,-1, 31,0);
        tracep->declBus(c+106,"riscv_top_tb u_riscv_top o_pc_plus_4_w", false,-1, 31,0);
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top o_stall_f", false,-1);
        tracep->declBus(c+83,"riscv_top_tb u_riscv_top u_riscv_fetch o_im_rd_f", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top_tb u_riscv_top u_riscv_fetch o_pc_plus_4_f", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top_tb u_riscv_top u_riscv_fetch i_pc_f", false,-1, 31,0);
        tracep->declBus(c+83,"riscv_top_tb u_riscv_top u_riscv_fetch u_riscv_imem o_imem_data", false,-1, 31,0);
        tracep->declBus(c+107,"riscv_top_tb u_riscv_top u_riscv_fetch u_riscv_imem i_imem_addr", false,-1, 13,0);
        tracep->declArray(c+19,"riscv_top_tb u_riscv_top u_riscv_fetch u_riscv_imem FILE_TEXT_MIF", false,-1, 1023,0);
        tracep->declBus(c+84,"riscv_top_tb u_riscv_top u_riscv_fetch u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top_tb u_riscv_top u_riscv_fetch u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+254,"riscv_top_tb u_riscv_top u_riscv_fetch u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+252,"riscv_top_tb u_riscv_top u_riscv_register_fetch REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+166,"riscv_top_tb u_riscv_top u_riscv_register_fetch o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+167,"riscv_top_tb u_riscv_top u_riscv_register_fetch o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top_tb u_riscv_top u_riscv_register_fetch o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+83,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+84,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_register_d_2", false,-1, 31,0);
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_register_en", false,-1);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_clk", false,-1);
        tracep->declBit(c+165,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_clr", false,-1);
        tracep->declBit(c+1,"riscv_top_tb u_riscv_top u_riscv_register_fetch i_rstn", false,-1);
        tracep->declBus(c+172,"riscv_top_tb u_riscv_top u_riscv_decode o_result_src_d", false,-1, 1,0);
        tracep->declBit(c+173,"riscv_top_tb u_riscv_top u_riscv_decode o_alu_src_d", false,-1);
        tracep->declBit(c+174,"riscv_top_tb u_riscv_top u_riscv_decode o_reg_write_d", false,-1);
        tracep->declBit(c+175,"riscv_top_tb u_riscv_top u_riscv_decode o_mem_write_d", false,-1);
        tracep->declBus(c+176,"riscv_top_tb u_riscv_top u_riscv_decode o_mem_byte_sel_d", false,-1, 3,0);
        tracep->declBus(c+177,"riscv_top_tb u_riscv_top u_riscv_decode o_alu_control_d", false,-1, 3,0);
        tracep->declBus(c+248,"riscv_top_tb u_riscv_top u_riscv_decode o_rd1_d", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_top_tb u_riscv_top u_riscv_decode o_rd2_d", false,-1, 31,0);
        tracep->declBus(c+180,"riscv_top_tb u_riscv_top u_riscv_decode o_extimm_d", false,-1, 31,0);
        tracep->declBit(c+178,"riscv_top_tb u_riscv_top u_riscv_decode o_jump_d", false,-1);
        tracep->declBit(c+179,"riscv_top_tb u_riscv_top u_riscv_decode o_branch_d", false,-1);
        tracep->declBit(c+181,"riscv_top_tb u_riscv_top u_riscv_decode o_zero_condition", false,-1);
        tracep->declBus(c+166,"riscv_top_tb u_riscv_top u_riscv_decode i_instr_d", false,-1, 31,0);
        tracep->declBus(c+167,"riscv_top_tb u_riscv_top u_riscv_decode i_pc_d", false,-1, 31,0);
        tracep->declBus(c+182,"riscv_top_tb u_riscv_top u_riscv_decode i_result_w", false,-1, 31,0);
        tracep->declBit(c+184,"riscv_top_tb u_riscv_top u_riscv_decode i_reg_write_w", false,-1);
        tracep->declBus(c+183,"riscv_top_tb u_riscv_top u_riscv_decode i_rd_w", false,-1, 4,0);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_decode i_clk", false,-1);
        tracep->declBus(c+198,"riscv_top_tb u_riscv_top u_riscv_decode o_immsrc_d", false,-1, 2,0);
        tracep->declBus(c+199,"riscv_top_tb u_riscv_top u_riscv_decode wd3", false,-1, 31,0);
        tracep->declBit(c+200,"riscv_top_tb u_riscv_top u_riscv_decode w3en", false,-1);
        tracep->declBit(c+201,"riscv_top_tb u_riscv_top u_riscv_decode o_aui", false,-1);
        tracep->declBit(c+202,"riscv_top_tb u_riscv_top u_riscv_decode o_lui", false,-1);
        tracep->declBus(c+198,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_imm", false,-1, 2,0);
        tracep->declBus(c+172,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_rd", false,-1, 1,0);
        tracep->declBit(c+173,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_src_alu_b", false,-1);
        tracep->declBit(c+174,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_reg_wr_en", false,-1);
        tracep->declBit(c+175,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_mem_wr_en", false,-1);
        tracep->declBus(c+176,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_mem_byte_sel", false,-1, 3,0);
        tracep->declBus(c+177,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_ctrl_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+178,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_jump_d", false,-1);
        tracep->declBit(c+179,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_branch_d", false,-1);
        tracep->declBit(c+201,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_aui", false,-1);
        tracep->declBit(c+202,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_lui", false,-1);
        tracep->declBit(c+181,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl o_zero_condition", false,-1);
        tracep->declBus(c+203,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_opcode", false,-1, 6,0);
        tracep->declBus(c+204,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_funct3", false,-1, 2,0);
        tracep->declBit(c+205,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl i_ctrl_funct7_5b", false,-1);
        tracep->declArray(c+206,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_ctrl DEBUG_INSTR", false,-1, 255,0);
        tracep->declBus(c+248,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile o_regfile_rs1_data", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile o_regfile_rs2_data", false,-1, 31,0);
        tracep->declBus(c+169,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile i_regfile_rs1_addr", false,-1, 4,0);
        tracep->declBus(c+170,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile i_regfile_rs2_addr", false,-1, 4,0);
        tracep->declBus(c+199,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_data", false,-1, 31,0);
        tracep->declBus(c+183,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_addr", false,-1, 4,0);
        tracep->declBit(c+200,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile i_regfile_rd_wen", false,-1);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile i_clk", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+133+i*1,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_regfile registers", true,(i+0), 31,0);}}
        tracep->declBus(c+180,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_immext o_imm_ext", false,-1, 31,0);
        tracep->declBus(c+214,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_immext i_imm_instr", false,-1, 31,0);
        tracep->declBus(c+198,"riscv_top_tb u_riscv_top u_riscv_decode u_riscv_immext i_imm_src", false,-1, 2,0);
        tracep->declBus(c+252,"riscv_top_tb u_riscv_top u_riscv_register_decode REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+87,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_0", false,-1, 1,0);
        tracep->declBit(c+88,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_1", false,-1);
        tracep->declBit(c+185,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_2", false,-1);
        tracep->declBit(c+186,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_3", false,-1);
        tracep->declBus(c+187,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_4", false,-1, 3,0);
        tracep->declBus(c+89,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_5", false,-1, 3,0);
        tracep->declBit(c+90,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_6", false,-1);
        tracep->declBit(c+91,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_7", false,-1);
        tracep->declBus(c+92,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_8", false,-1, 31,0);
        tracep->declBus(c+93,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_9", false,-1, 31,0);
        tracep->declBus(c+94,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_10", false,-1, 4,0);
        tracep->declBus(c+95,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_11", false,-1, 4,0);
        tracep->declBus(c+188,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_12", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_13", false,-1, 31,0);
        tracep->declBus(c+97,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_14", false,-1, 31,0);
        tracep->declBus(c+98,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_15", false,-1, 31,0);
        tracep->declBit(c+99,"riscv_top_tb u_riscv_top u_riscv_register_decode o_register_q_16", false,-1);
        tracep->declBus(c+172,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_0", false,-1, 1,0);
        tracep->declBit(c+173,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_1", false,-1);
        tracep->declBit(c+174,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_2", false,-1);
        tracep->declBit(c+175,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_3", false,-1);
        tracep->declBus(c+176,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_4", false,-1, 3,0);
        tracep->declBus(c+177,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_5", false,-1, 3,0);
        tracep->declBit(c+178,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_6", false,-1);
        tracep->declBit(c+179,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_7", false,-1);
        tracep->declBus(c+248,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_8", false,-1, 31,0);
        tracep->declBus(c+249,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_9", false,-1, 31,0);
        tracep->declBus(c+169,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_10", false,-1, 4,0);
        tracep->declBus(c+170,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_11", false,-1, 4,0);
        tracep->declBus(c+215,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_12", false,-1, 31,0);
        tracep->declBus(c+180,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_13", false,-1, 31,0);
        tracep->declBus(c+86,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_14", false,-1, 31,0);
        tracep->declBus(c+167,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_15", false,-1, 31,0);
        tracep->declBit(c+181,"riscv_top_tb u_riscv_top u_riscv_register_decode i_register_d_16", false,-1);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_register_decode i_clk", false,-1);
        tracep->declBit(c+189,"riscv_top_tb u_riscv_top u_riscv_register_decode i_clr", false,-1);
        tracep->declBit(c+1,"riscv_top_tb u_riscv_top u_riscv_register_decode i_rstn", false,-1);
        tracep->declBit(c+126,"riscv_top_tb u_riscv_top u_riscv_execute o_zero_e", false,-1);
        tracep->declBus(c+190,"riscv_top_tb u_riscv_top u_riscv_execute o_alu_result_e", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top_tb u_riscv_top u_riscv_execute o_write_data_e", false,-1, 31,0);
        tracep->declBus(c+100,"riscv_top_tb u_riscv_top u_riscv_execute o_pc_target_e", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top_tb u_riscv_top u_riscv_execute i_alu_control_e", false,-1, 3,0);
        tracep->declBit(c+88,"riscv_top_tb u_riscv_top u_riscv_execute i_alu_src_e", false,-1);
        tracep->declBus(c+92,"riscv_top_tb u_riscv_top u_riscv_execute i_rd1_e", false,-1, 31,0);
        tracep->declBus(c+93,"riscv_top_tb u_riscv_top u_riscv_execute i_rd2_e", false,-1, 31,0);
        tracep->declBus(c+182,"riscv_top_tb u_riscv_top u_riscv_execute i_result_w", false,-1, 31,0);
        tracep->declBus(c+195,"riscv_top_tb u_riscv_top u_riscv_execute i_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+98,"riscv_top_tb u_riscv_top u_riscv_execute i_pc_e", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top_tb u_riscv_top u_riscv_execute i_extimm_e", false,-1, 31,0);
        tracep->declBit(c+127,"riscv_top_tb u_riscv_top u_riscv_execute i_forward_a_e", false,-1);
        tracep->declBit(c+128,"riscv_top_tb u_riscv_top u_riscv_execute i_forward_b_e", false,-1);
        tracep->declBit(c+99,"riscv_top_tb u_riscv_top u_riscv_execute i_zero_condition", false,-1);
        tracep->declBus(c+216,"riscv_top_tb u_riscv_top u_riscv_execute o_src_a_e", false,-1, 31,0);
        tracep->declBus(c+217,"riscv_top_tb u_riscv_top u_riscv_execute o_src_b_e", false,-1, 31,0);
        tracep->declBus(c+255,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_a N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+216,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_a o_mux_data", false,-1, 31,0);
        tracep->declArray(c+218,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_a i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+129,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_a i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+221+i*1,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_a mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+255,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_b o_mux_data", false,-1, 31,0);
        tracep->declArray(c+224,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_b i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+130,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_b i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+227+i*1,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_forward_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+256,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_alu_src_b N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+217,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_alu_src_b o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+230,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_alu_src_b i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+88,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_alu_src_b i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+232+i*1,"riscv_top_tb u_riscv_top u_riscv_execute u_mux_alu_src_b mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+190,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu o_alu_result", false,-1, 31,0);
        tracep->declBit(c+126,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu o_alu_zero", false,-1);
        tracep->declBus(c+216,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu i_alu_a", false,-1, 31,0);
        tracep->declBus(c+217,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu i_alu_b", false,-1, 31,0);
        tracep->declBus(c+89,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu i_alu_ctrl", false,-1, 3,0);
        tracep->declBit(c+99,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu i_zero_condition", false,-1);
        tracep->declQuad(c+108,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_alu DEBUG_ALU_OP", false,-1, 63,0);
        tracep->declBus(c+100,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_adder o_adder_sum", false,-1, 31,0);
        tracep->declBus(c+98,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_adder i_adder_a", false,-1, 31,0);
        tracep->declBus(c+96,"riscv_top_tb u_riscv_top u_riscv_execute u_riscv_adder i_adder_b", false,-1, 31,0);
        tracep->declBus(c+252,"riscv_top_tb u_riscv_top u_riscv_register_execute REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+234,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+110,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+235,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+236,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_3", false,-1, 31,0);
        tracep->declBus(c+195,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_4", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_5", false,-1, 31,0);
        tracep->declBus(c+237,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_6", false,-1, 31,0);
        tracep->declBus(c+102,"riscv_top_tb u_riscv_top u_riscv_register_execute o_register_q_7", false,-1, 31,0);
        tracep->declBus(c+238,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+111,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+239,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_2", false,-1, 31,0);
        tracep->declBus(c+240,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_3", false,-1, 31,0);
        tracep->declBus(c+190,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_4", false,-1, 31,0);
        tracep->declBus(c+191,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_5", false,-1, 31,0);
        tracep->declBus(c+188,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_6", false,-1, 31,0);
        tracep->declBus(c+97,"riscv_top_tb u_riscv_top u_riscv_register_execute i_register_d_7", false,-1, 31,0);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_register_execute i_clk", false,-1);
        tracep->declBit(c+1,"riscv_top_tb u_riscv_top u_riscv_register_execute i_rstn", false,-1);
        tracep->declBus(c+250,"riscv_top_tb u_riscv_top u_riscv_memory o_read_data_m", false,-1, 31,0);
        tracep->declBus(c+195,"riscv_top_tb u_riscv_top u_riscv_memory i_alu_result_m", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_top_tb u_riscv_top u_riscv_memory i_write_data_m", false,-1, 31,0);
        tracep->declBit(c+193,"riscv_top_tb u_riscv_top u_riscv_memory i_mem_write_m", false,-1);
        tracep->declBus(c+194,"riscv_top_tb u_riscv_top u_riscv_memory i_mem_byte_sel_m", false,-1, 3,0);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_memory i_clk", false,-1);
        tracep->declBus(c+250,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem o_dmem_data", false,-1, 31,0);
        tracep->declBus(c+196,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem i_dmem_data", false,-1, 31,0);
        tracep->declBus(c+241,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem i_dmem_addr", false,-1, 13,0);
        tracep->declBus(c+194,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem i_dmem_byte_sel", false,-1, 3,0);
        tracep->declBit(c+193,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem i_dmem_wr_en", false,-1);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem i_clk", false,-1);
        tracep->declArray(c+51,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem FILE_DATA_MIF", false,-1, 1023,0);
        tracep->declBus(c+251,"riscv_top_tb u_riscv_top u_riscv_memory u_riscv_dmem i", false,-1, 31,0);
        tracep->declBus(c+252,"riscv_top_tb u_riscv_top u_riscv_register_memory REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+242,"riscv_top_tb u_riscv_top u_riscv_register_memory o_register_q_0", false,-1, 31,0);
        tracep->declBus(c+112,"riscv_top_tb u_riscv_top u_riscv_register_memory o_register_q_1", false,-1, 31,0);
        tracep->declBus(c+104,"riscv_top_tb u_riscv_top u_riscv_register_memory o_register_q_2", false,-1, 31,0);
        tracep->declBus(c+105,"riscv_top_tb u_riscv_top u_riscv_register_memory o_register_q_3", false,-1, 31,0);
        tracep->declBus(c+243,"riscv_top_tb u_riscv_top u_riscv_register_memory o_register_q_4", false,-1, 31,0);
        tracep->declBus(c+106,"riscv_top_tb u_riscv_top u_riscv_register_memory o_register_q_5", false,-1, 31,0);
        tracep->declBus(c+244,"riscv_top_tb u_riscv_top u_riscv_register_memory i_register_d_0", false,-1, 31,0);
        tracep->declBus(c+113,"riscv_top_tb u_riscv_top u_riscv_register_memory i_register_d_1", false,-1, 31,0);
        tracep->declBus(c+195,"riscv_top_tb u_riscv_top u_riscv_register_memory i_register_d_2", false,-1, 31,0);
        tracep->declBus(c+250,"riscv_top_tb u_riscv_top u_riscv_register_memory i_register_d_3", false,-1, 31,0);
        tracep->declBus(c+245,"riscv_top_tb u_riscv_top u_riscv_register_memory i_register_d_4", false,-1, 31,0);
        tracep->declBus(c+102,"riscv_top_tb u_riscv_top u_riscv_register_memory i_register_d_5", false,-1, 31,0);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_register_memory i_clk", false,-1);
        tracep->declBit(c+1,"riscv_top_tb u_riscv_top u_riscv_register_memory i_rstn", false,-1);
        tracep->declBus(c+255,"riscv_top_tb u_riscv_top u_mux_result N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+182,"riscv_top_tb u_riscv_top u_mux_result o_mux_data", false,-1, 31,0);
        tracep->declArray(c+114,"riscv_top_tb u_riscv_top u_mux_result i_mux_concat_data", false,-1, 95,0);
        tracep->declBus(c+103,"riscv_top_tb u_riscv_top u_mux_result i_mux_sel", false,-1, 1,0);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+117+i*1,"riscv_top_tb u_riscv_top u_mux_result mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top u_riscv_hazard_unit o_stall_f", false,-1);
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top u_riscv_hazard_unit o_stall_d", false,-1);
        tracep->declBit(c+165,"riscv_top_tb u_riscv_top u_riscv_hazard_unit o_flush_d", false,-1);
        tracep->declBit(c+189,"riscv_top_tb u_riscv_top u_riscv_hazard_unit o_flush_e", false,-1);
        tracep->declBus(c+131,"riscv_top_tb u_riscv_top u_riscv_hazard_unit o_forward_a_e", false,-1, 1,0);
        tracep->declBus(c+132,"riscv_top_tb u_riscv_top u_riscv_hazard_unit o_forward_b_e", false,-1, 1,0);
        tracep->declBus(c+169,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rs1_d", false,-1, 4,0);
        tracep->declBus(c+170,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rs2_d", false,-1, 4,0);
        tracep->declBus(c+246,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rd_e", false,-1, 4,0);
        tracep->declBus(c+95,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rs2_e", false,-1, 4,0);
        tracep->declBus(c+94,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rs1_e", false,-1, 4,0);
        tracep->declBit(c+165,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_pc_src_e", false,-1);
        tracep->declBit(c+120,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_result_src_e", false,-1);
        tracep->declBus(c+197,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rd_m", false,-1, 4,0);
        tracep->declBus(c+183,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_rd_w", false,-1, 4,0);
        tracep->declBit(c+192,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_reg_write_m", false,-1);
        tracep->declBit(c+184,"riscv_top_tb u_riscv_top u_riscv_hazard_unit i_reg_write_w", false,-1);
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top u_riscv_hazard_unit lwstall", false,-1);
        tracep->declBus(c+256,"riscv_top_tb u_riscv_top u_mux_pcf N_MUX_IN", false,-1, 31,0);
        tracep->declBus(c+125,"riscv_top_tb u_riscv_top u_mux_pcf o_mux_data", false,-1, 31,0);
        tracep->declQuad(c+121,"riscv_top_tb u_riscv_top u_mux_pcf i_mux_concat_data", false,-1, 63,0);
        tracep->declBus(c+165,"riscv_top_tb u_riscv_top u_mux_pcf i_mux_sel", false,-1, 0,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+123+i*1,"riscv_top_tb u_riscv_top u_mux_pcf mux_input_arr", true,(i+0), 31,0);}}
        tracep->declBus(c+252,"riscv_top_tb u_riscv_top u_riscv_register REGISTER_INIT", false,-1, 31,0);
        tracep->declBus(c+85,"riscv_top_tb u_riscv_top u_riscv_register o_register_q", false,-1, 31,0);
        tracep->declBus(c+125,"riscv_top_tb u_riscv_top u_riscv_register i_register_d", false,-1, 31,0);
        tracep->declBit(c+168,"riscv_top_tb u_riscv_top u_riscv_register i_register_en", false,-1);
        tracep->declBit(c+247,"riscv_top_tb u_riscv_top u_riscv_register i_clk", false,-1);
        tracep->declBit(c+1,"riscv_top_tb u_riscv_top u_riscv_register i_rstn", false,-1);
    }
}

void Vriscv_top_tb::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void Vriscv_top_tb::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void Vriscv_top_tb::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    Vriscv_top_tb__Syms* __restrict vlSymsp = static_cast<Vriscv_top_tb__Syms*>(userp);
    Vriscv_top_tb* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlTOPp->riscv_top_tb__DOT__i_rstn));
        tracep->fullWData(oldp+2,(vlTOPp->riscv_top_tb__DOT__taskState),256);
        tracep->fullIData(oldp+10,(vlTOPp->riscv_top_tb__DOT__i),32);
        tracep->fullWData(oldp+11,(vlTOPp->riscv_top_tb__DOT__vcd_file),256);
        tracep->fullWData(oldp+19,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__FILE_TEXT_MIF),1024);
        tracep->fullWData(oldp+51,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__FILE_DATA_MIF),1024);
        tracep->fullIData(oldp+83,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_fetch__DOT__u_riscv_imem__DOT__imem_arr
                                   [(0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f)]),32);
        tracep->fullIData(oldp+84,(((IData)(4U) + vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f)),32);
        tracep->fullIData(oldp+85,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f),32);
        tracep->fullIData(oldp+86,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_d),32);
        tracep->fullCData(oldp+87,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_src_e),2);
        tracep->fullBit(oldp+88,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_src_e));
        tracep->fullCData(oldp+89,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_control_e),4);
        tracep->fullBit(oldp+90,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_jump_e));
        tracep->fullBit(oldp+91,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_branch_e));
        tracep->fullIData(oldp+92,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd1_e),32);
        tracep->fullIData(oldp+93,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd2_e),32);
        tracep->fullCData(oldp+94,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e),5);
        tracep->fullCData(oldp+95,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e),5);
        tracep->fullIData(oldp+96,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_e),32);
        tracep->fullIData(oldp+97,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_e),32);
        tracep->fullIData(oldp+98,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_e),32);
        tracep->fullBit(oldp+99,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_zero_condition_e));
        tracep->fullIData(oldp+100,((vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_e 
                                     + vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_e)),32);
        tracep->fullCData(oldp+101,((3U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),2);
        tracep->fullIData(oldp+102,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_m),32);
        tracep->fullCData(oldp+103,((3U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1)),2);
        tracep->fullIData(oldp+104,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_w),32);
        tracep->fullIData(oldp+105,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_read_data_w),32);
        tracep->fullIData(oldp+106,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_plus_4_w),32);
        tracep->fullSData(oldp+107,((0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_f)),14);
        tracep->fullQData(oldp+108,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_riscv_alu__DOT__DEBUG_ALU_OP),64);
        tracep->fullIData(oldp+110,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1),32);
        tracep->fullIData(oldp+111,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_src_e),32);
        tracep->fullIData(oldp+112,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_1),32);
        tracep->fullIData(oldp+113,((3U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_1)),32);
        tracep->fullWData(oldp+114,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellinp__u_mux_result__i_mux_concat_data),96);
        tracep->fullIData(oldp+117,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_result__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+118,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_result__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+119,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_result__DOT__mux_input_arr[2]),32);
        tracep->fullBit(oldp+120,((1U & (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_src_e))));
        tracep->fullQData(oldp+121,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellinp__u_mux_pcf__i_mux_concat_data),64);
        tracep->fullIData(oldp+123,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+124,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+125,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_mux_pcf__DOT__mux_input_arr
                                    [vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_src_e]),32);
        tracep->fullBit(oldp+126,((((~ (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_zero_condition_e)) 
                                    & (0U == vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_e)) 
                                   | ((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_zero_condition_e) 
                                      & (0U != vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_e)))));
        tracep->fullBit(oldp+127,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                      == (0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                     & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                    & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                    ? 0U : (((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                               == (0x1fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                             & (0U 
                                                != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                             ? 1U : 0U))));
        tracep->fullBit(oldp+128,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                      == (0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                     & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                    & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                    ? 0U : (((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                               == (0x1fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                             & (0U 
                                                != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                             ? 1U : 0U))));
        tracep->fullCData(oldp+129,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                        == (0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
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
                                               : 0U))),2);
        tracep->fullCData(oldp+130,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                        == (0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
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
                                               : 0U))),2);
        tracep->fullCData(oldp+131,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                        == (0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                       & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                      & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                      ? 2U : (((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e) 
                                                 == 
                                                 (0x1fU 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                               & (0U 
                                                  != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs1_e)))
                                               ? 1U
                                               : 0U))),2);
        tracep->fullCData(oldp+132,((((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                        == (0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)) 
                                       & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0) 
                                      & (0U != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                      ? 2U : (((((IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e) 
                                                 == 
                                                 (0x1fU 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)) 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0) 
                                               & (0U 
                                                  != (IData)(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rs2_e)))
                                               ? 1U
                                               : 0U))),2);
        tracep->fullIData(oldp+133,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[0]),32);
        tracep->fullIData(oldp+134,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[1]),32);
        tracep->fullIData(oldp+135,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[2]),32);
        tracep->fullIData(oldp+136,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[3]),32);
        tracep->fullIData(oldp+137,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[4]),32);
        tracep->fullIData(oldp+138,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[5]),32);
        tracep->fullIData(oldp+139,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[6]),32);
        tracep->fullIData(oldp+140,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[7]),32);
        tracep->fullIData(oldp+141,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[8]),32);
        tracep->fullIData(oldp+142,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[9]),32);
        tracep->fullIData(oldp+143,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[10]),32);
        tracep->fullIData(oldp+144,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[11]),32);
        tracep->fullIData(oldp+145,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[12]),32);
        tracep->fullIData(oldp+146,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[13]),32);
        tracep->fullIData(oldp+147,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[14]),32);
        tracep->fullIData(oldp+148,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[15]),32);
        tracep->fullIData(oldp+149,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[16]),32);
        tracep->fullIData(oldp+150,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[17]),32);
        tracep->fullIData(oldp+151,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[18]),32);
        tracep->fullIData(oldp+152,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[19]),32);
        tracep->fullIData(oldp+153,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[20]),32);
        tracep->fullIData(oldp+154,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[21]),32);
        tracep->fullIData(oldp+155,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[22]),32);
        tracep->fullIData(oldp+156,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[23]),32);
        tracep->fullIData(oldp+157,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[24]),32);
        tracep->fullIData(oldp+158,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[25]),32);
        tracep->fullIData(oldp+159,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[26]),32);
        tracep->fullIData(oldp+160,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[27]),32);
        tracep->fullIData(oldp+161,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[28]),32);
        tracep->fullIData(oldp+162,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[29]),32);
        tracep->fullIData(oldp+163,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[30]),32);
        tracep->fullIData(oldp+164,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers[31]),32);
        tracep->fullBit(oldp+165,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_src_e));
        tracep->fullIData(oldp+166,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d),32);
        tracep->fullIData(oldp+167,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_d),32);
        tracep->fullBit(oldp+168,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_hazard_unit__DOT__lwstall));
        tracep->fullCData(oldp+169,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+170,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+171,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 7U))),5);
        tracep->fullCData(oldp+172,(((3U == (0x7fU 
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
        tracep->fullBit(oldp+173,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_src_d));
        tracep->fullBit(oldp+174,((1U & (~ ((0x23U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                            | (0x63U 
                                               == (0x7fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)))))));
        tracep->fullBit(oldp+175,((0x23U == (0x7fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
        tracep->fullCData(oldp+176,((((3U == (0x7fU 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                      | (0x23U == (0x7fU 
                                                   & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)))
                                      ? ((0x4000U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                          ? ((0x2000U 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                              ? 0xfU
                                              : ((0x1000U 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U))
                                          : ((0x2000U 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                              ? 0xfU
                                              : ((0x1000U 
                                                  & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                                  ? 3U
                                                  : 1U)))
                                      : 0xfU)),4);
        tracep->fullCData(oldp+177,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_control_d),4);
        tracep->fullBit(oldp+178,((0x6fU == (0x7fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+179,((0x63U == (0x7fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
        tracep->fullIData(oldp+180,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_d),32);
        tracep->fullBit(oldp+181,(((0x63U == (0x7fU 
                                              & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                   & ((0x4000U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                       ? ((0x2000U 
                                           & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)
                                           ? (~ (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 0xcU))
                                           : (~ (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                 >> 0xcU)))
                                       : ((~ (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 0xdU)) 
                                          & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                             >> 0xcU))))));
        tracep->fullIData(oldp+182,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_w),32);
        tracep->fullCData(oldp+183,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4)),5);
        tracep->fullBit(oldp+184,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0)));
        tracep->fullBit(oldp+185,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_reg_write_e));
        tracep->fullBit(oldp+186,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_write_e));
        tracep->fullCData(oldp+187,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_byte_sel_e),4);
        tracep->fullIData(oldp+188,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd_e),32);
        tracep->fullBit(oldp+189,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_flush_e));
        tracep->fullIData(oldp+190,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_e),32);
        tracep->fullIData(oldp+191,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_write_data_e),32);
        tracep->fullBit(oldp+192,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)));
        tracep->fullBit(oldp+193,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2)));
        tracep->fullCData(oldp+194,((0xfU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3)),4);
        tracep->fullIData(oldp+195,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_m),32);
        tracep->fullIData(oldp+196,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_write_data_m),32);
        tracep->fullCData(oldp+197,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),5);
        tracep->fullCData(oldp+198,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__o_immsrc_d),3);
        tracep->fullIData(oldp+199,(((0x37U == (0x7fU 
                                                & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))
                                      ? vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_d
                                      : ((0x17U == 
                                          (0x7fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))
                                          ? (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_pc_d 
                                             + vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_extimm_d)
                                          : vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_result_w))),32);
        tracep->fullBit(oldp+200,((1U & (((0x37U == 
                                           (0x7fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))) 
                                         | vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0))));
        tracep->fullBit(oldp+201,((0x17U == (0x7fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
        tracep->fullBit(oldp+202,((0x37U == (0x7fU 
                                             & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d))));
        tracep->fullCData(oldp+203,((0x7fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d)),7);
        tracep->fullCData(oldp+204,((7U & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+205,((1U & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                         >> 0x1eU))));
        tracep->fullWData(oldp+206,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_ctrl__DOT__DEBUG_INSTR),256);
        tracep->fullIData(oldp+214,((0x1ffffffU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                                   >> 7U))),32);
        tracep->fullIData(oldp+215,((0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                              >> 7U))),32);
        tracep->fullIData(oldp+216,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__o_src_a_e),32);
        tracep->fullIData(oldp+217,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__o_src_b_e),32);
        tracep->fullWData(oldp+218,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_a__i_mux_concat_data),96);
        tracep->fullIData(oldp+221,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+222,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+223,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_a__DOT__mux_input_arr[2]),32);
        tracep->fullWData(oldp+224,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_forward_b__i_mux_concat_data),96);
        tracep->fullIData(oldp+227,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+228,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+229,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_forward_b__DOT__mux_input_arr[2]),32);
        tracep->fullQData(oldp+230,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT____Vcellinp__u_mux_alu_src_b__i_mux_concat_data),64);
        tracep->fullIData(oldp+232,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[0]),32);
        tracep->fullIData(oldp+233,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_execute__DOT__u_mux_alu_src_b__DOT__mux_input_arr[1]),32);
        tracep->fullIData(oldp+234,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0),32);
        tracep->fullIData(oldp+235,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_2),32);
        tracep->fullIData(oldp+236,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_3),32);
        tracep->fullIData(oldp+237,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6),32);
        tracep->fullIData(oldp+238,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_reg_write_e),32);
        tracep->fullIData(oldp+239,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_write_e),32);
        tracep->fullIData(oldp+240,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_mem_byte_sel_e),32);
        tracep->fullSData(oldp+241,((0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_m)),14);
        tracep->fullIData(oldp+242,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_0),32);
        tracep->fullIData(oldp+243,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_memory__o_register_q_4),32);
        tracep->fullIData(oldp+244,((1U & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_0)),32);
        tracep->fullIData(oldp+245,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT____Vcellout__u_riscv_register_execute__o_register_q_6)),32);
        tracep->fullCData(oldp+246,((0x1fU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_rd_e)),5);
        tracep->fullBit(oldp+247,(vlTOPp->riscv_top_tb__DOT__i_clk));
        tracep->fullIData(oldp+248,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                               >> 0xfU))]),32);
        tracep->fullIData(oldp+249,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_decode__DOT__u_riscv_regfile__DOT__registers
                                    [(0x1fU & (vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_instr_d 
                                               >> 0x14U))]),32);
        tracep->fullIData(oldp+250,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__dmem_arr
                                    [(0x3fffU & vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__o_alu_result_m)]),32);
        tracep->fullIData(oldp+251,(vlTOPp->riscv_top_tb__DOT__u_riscv_top__DOT__u_riscv_memory__DOT__u_riscv_dmem__DOT__i),32);
        tracep->fullIData(oldp+252,(0U),32);
        tracep->fullIData(oldp+253,(vlTOPp->riscv_top_tb__DOT__j),32);
        tracep->fullIData(oldp+254,(4U),32);
        tracep->fullIData(oldp+255,(3U),32);
        tracep->fullIData(oldp+256,(2U),32);
    }
}

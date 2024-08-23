
`ifndef		NOINC
`include	"../common/riscv_configs.v"
`include	"../singlecycle/riscv_ctrl.v"
`include	"../common/riscv_regfile.v"
`include	"../common/riscv_immext.v"
`endif

module riscv_decode
(
	output 	[1:0]			o_result_src_d,
	output 					o_alu_src_d,
	output 					o_reg_write_d,
	output 					o_mem_write_d,
	output 	[3:0]			o_mem_byte_sel_d,
	output 	[3:0]			o_alu_control_d,
	output	[`XLEN-1:0]		o_rd1_d,
	output	[`XLEN-1:0]		o_rd2_d,
	output	[`XLEN-1:0]		o_extimm_d,
	output					o_jump_d,
	output					o_branch_d,
	output					o_zero_condition,

	input		[`XLEN-1:0]		i_instr_d,
	input		[`XLEN-1:0]		i_pc_d,
	input		[`XLEN-1:0]		i_result_w,
	input						i_reg_write_w,
	input		[4:0]			i_rd_w,
	input						i_clk
);

wire	[2:0]			o_immsrc_d;

	riscv_ctrl
	u_riscv_ctrl(
	.o_ctrl_src_imm      (	o_immsrc_d       ) ,
	.o_ctrl_src_rd       (	o_result_src_d   ) ,
	.o_ctrl_src_alu_b    (	o_alu_src_d      ) ,
	.o_ctrl_reg_wr_en    (	o_reg_write_d    ) ,
	.o_ctrl_mem_wr_en    (	o_mem_write_d    ) ,
	.o_ctrl_mem_byte_sel (	o_mem_byte_sel_d ) ,
	.o_ctrl_alu_ctrl     (	o_alu_control_d  ) ,
	.o_jump_d			 (	o_jump_d		 ) ,
	.o_branch_d			 (	o_branch_d		 ) ,
	.o_aui				 (	o_aui			 ) ,
	.o_lui				 (	o_lui			 ) ,
	.o_zero_condition	 (	o_zero_condition ) ,
	.i_ctrl_opcode       (	i_instr_d[6:0]   ) ,
	.i_ctrl_funct3       (	i_instr_d[14:12] ) ,
	.i_ctrl_funct7_5b	 (	i_instr_d[30]    )
);

wire	[`XLEN-1:0]	wd3;
wire				w3en;

assign	wd3	= (o_lui)	? o_extimm_d :
			  (o_aui)	? (i_pc_d + o_extimm_d) : i_result_w;

assign	w3en = (o_lui || o_aui) ? 1'b1 : i_reg_write_w;

	riscv_regfile
	u_riscv_regfile(
	.o_regfile_rs1_data (	o_rd1_d          ) ,
	.o_regfile_rs2_data (	o_rd2_d          ) ,
	.i_regfile_rs1_addr (	i_instr_d[19:15] ) ,
	.i_regfile_rs2_addr (	i_instr_d[24:20] ) ,
	.i_regfile_rd_data  (	wd3				 ) ,
	.i_regfile_rd_addr  (	i_rd_w           ) ,
	.i_regfile_rd_wen   (	w3en			 ) ,
	.i_clk				(	i_clk            )
);

	riscv_immext
	u_riscv_immext(
		.o_imm_ext		(	o_extimm_d      ) ,
		.i_imm_instr	(	i_instr_d[31:7] ) ,
		.i_imm_src		(	o_immsrc_d      )
	);

endmodule

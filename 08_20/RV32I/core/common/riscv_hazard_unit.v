
`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_hazard_unit
(
	output 						o_stall_f,
	output 						o_stall_d,
	output 						o_flush_d,
	output 						o_flush_e,
	output 		[1:0]			o_forward_a_e,
	output 		[1:0]			o_forward_b_e,
	input		[4:0]			i_rs1_d,
	input		[4:0]			i_rs2_d,
	input		[4:0]			i_rd_e,
	input		[4:0]			i_rs2_e,
	input		[4:0]			i_rs1_e,
	input						i_pc_src_e,
	input						i_result_src_e,
	input		[4:0]			i_rd_m,
	input		[4:0]			i_rd_w,
	input						i_reg_write_m,
	input						i_reg_write_w
);

wire	lwstall;

assign o_forward_a_e	= (((i_rs1_e == i_rd_m) && i_reg_write_m) && (i_rs1_e != 0)) ? 2'b10 :
						  (((i_rs1_e == i_rd_w) && i_reg_write_w) && (i_rs1_e != 0)) ? 2'b01 : 2'b00;

assign o_forward_b_e	= (((i_rs2_e == i_rd_m) && i_reg_write_m) && (i_rs2_e != 0)) ? 2'b10 :
						  (((i_rs2_e == i_rd_w) && i_reg_write_w) && (i_rs2_e != 0)) ? 2'b01 : 2'b00;

assign lwstall	= (((i_rs1_d == i_rd_e) || (i_rs2_d == i_rd_e)) && i_result_src_e);

assign o_stall_f	= lwstall;
assign o_stall_d	= lwstall;
assign o_flush_d	= i_pc_src_e;
assign o_flush_e	= (lwstall || i_pc_src_e);

endmodule

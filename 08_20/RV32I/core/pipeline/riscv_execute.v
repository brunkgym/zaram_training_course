
`ifndef		NOINC
`include	"../common/riscv_mux.v"
`include	"../common/riscv_adder.v"
`include	"../common/riscv_alu.v"
`endif

module riscv_execute
(
	output					o_zero_e,
	output	[`XLEN-1:0]		o_alu_result_e  ,
	output	[`XLEN-1:0]		o_write_data_e  ,
	output	[`XLEN-1:0]		o_pc_target_e   ,
	input	[3:0]			i_alu_control_e ,
	input					i_alu_src_a_e     ,
	input					i_alu_src_b_e     ,
	input	[`XLEN-1:0]		i_rd1_e         ,
	input	[`XLEN-1:0]		i_rd2_e         ,
	input	[`XLEN-1:0]		i_result_w      ,
	input	[`XLEN-1:0]		i_alu_result_m  ,
	input	[`XLEN-1:0]		i_pc_e          ,
	input	[`XLEN-1:0]		i_extimm_e      ,
	input	[1:0]			i_forward_a_e   ,
	input	[1:0]			i_forward_b_e   ,
	input					i_zero_condition
);

wire	[`XLEN-1:0]	o_src_a_e;
wire	[`XLEN-1:0]	o_src_b_e;
wire	[`XLEN-1:0] o_mux_src_a;

	riscv_mux
	#(
		.N_MUX_IN			(	3	)
	)
	u_mux_forward_a(
		.o_mux_data			(o_mux_src_a								),
		.i_mux_concat_data	({i_alu_result_m, i_result_w, i_rd1_e}	),
		.i_mux_sel			(i_forward_a_e							)
	);

	riscv_mux
	#(
		.N_MUX_IN			(	2	)
	)
	u_mux_alu_src_a(
		.o_mux_data			(o_src_a_e								),
		.i_mux_concat_data	({i_pc_e, o_mux_src_a }	),
		.i_mux_sel			(i_alu_src_a_e					)
	);

	riscv_mux
	#(
		.N_MUX_IN			(	3	)
	)
	u_mux_forward_b(
		.o_mux_data			(o_write_data_e							),
		.i_mux_concat_data	({i_alu_result_m, i_result_w, i_rd2_e}	),
		.i_mux_sel			(i_forward_b_e							)
	);

	riscv_mux
	#(
		.N_MUX_IN			(	2	)
	)
	u_mux_alu_src_b(
		.o_mux_data			(o_src_b_e								),
		.i_mux_concat_data	({i_extimm_e, o_write_data_e }	),
		.i_mux_sel			(i_alu_src_b_e					)
	);

	riscv_alu
	u_riscv_alu(
	.o_alu_result 		(	o_alu_result_e				),
	.o_zero_e   		(	o_zero_e				),
	.i_alu_a      		(	o_src_a_e				),
	.i_alu_b      		(	o_src_b_e				),
	.i_alu_ctrl	  		(	i_alu_control_e			),
	.i_zero_condition	(i_zero_condition	)
);

	riscv_adder
	u_riscv_adder(
		.o_adder_sum		(	o_pc_target_e		),
		.i_adder_a			(	i_pc_e				),
		.i_adder_b			(	i_extimm_e			)
	);

endmodule

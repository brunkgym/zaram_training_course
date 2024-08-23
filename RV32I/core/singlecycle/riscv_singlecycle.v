//-------------------------------
//Define & Include
//-------------------------------
`include "../common/riscv_configs.v"
//`include "../common/adder.v"
//`include "../common/riscv_alu.v"
//`include "../common/riscv_dmem.v"
//`include "../common/riscv_imem.v"
//`include "../common/riscv_immdec.v"
//`include "../common/riscv_mux.v"
//`include "../common/riscv_regfile.v"
//`include "../common/riscv_control_unit.v"
module singlecycle
(
	input						i_clk,
	input						i_rstn
);

wire	[`XLEN-1:0]	o_alu_result;
wire	[`XLEN-1:0]	o_pc_next;
wire	[`XLEN-1:0]	o_pc_plus;
wire	[`XLEN-1:0]	o_pc_target;
wire	[1:0]		o_pc_src;

	riscv_mux 
	#(
		.N_MUX_IN	(	3	)
	)
	pc_next_mux
	(
		.o_mux_data			(	o_pc_next								),
		.i_mux_concat_data	(	{o_alu_result, o_pc_target, o_pc_plus}	),
		.i_mux_sel			(	o_pc_src								)
	);

	wire [`XLEN-1:0]	i_pc;

	riscv_register
	#(
		.REGISTER_INIT	(	0	)
	)
	u_riscv_register
	(
		.o_register_q	(	i_pc		),
		.i_register_d	(	o_pc_next	),
		.i_register_en	(	1'b1		),
		.i_clk			(	i_clk		),
		.i_rstn			(	i_rstn		)
	);

	wire	[`XLEN-1:0]	o_imem;

	riscv_imem u_riscv_imem
	(
		.o_imem_data	(	o_imem	),
		.i_imem_addr	(	i_pc	),
		.i_clk			(	i_clk	)
	);

	adder adder_pc_plus
	(
		.o_adder_out	(	o_pc_plus	),
		.i_adder_a		(	i_pc		),
		.i_adder_b		(	`XLEN'd4	)
	);

	wire	[`XLEN-1:0]	o_regfile_rs1_data;
	wire	[`XLEN-1:0]	o_regfile_rs2_data;
	wire	[`XLEN-1:0]	o_reg_rd_data;
	wire				o_reg_wr_en;

	riscv_regfile u_riscv_regfile
	(
		.o_regfile_rs1_data	(	o_regfile_rs1_data	),
		.o_regfile_rs2_data	(	o_regfile_rs2_data	),
		.i_regfile_rs1_addr	(	o_imem[19:15]		),
		.i_regfile_rs2_addr	(	o_imem[24:20]		),
		.i_regfile_rd_data	(	o_reg_rd_data		),
		.i_regfile_rd_addr	(	o_imem[11:7]		),
		.i_regfile_rd_wen	(	o_reg_wr_en			),
		.i_clk				(	i_clk				)
	);

	wire	[`XLEN-1:0]		o_imm_dec;
	wire	[2:0]			o_imm_src;

	riscv_immdec u_riscv_immdec
	(
		.o_imm_dec			(	o_imm_dec	),
		.i_imm_instr		(	o_imem		),
		.i_imm_src			(	o_imm_src	)
	);
	

	adder adder_pc_target
	(
		.o_adder_out	(	o_pc_target	),
		.i_adder_a		(	i_pc		),
		.i_adder_b		(	o_imm_dec	)
	);

	wire	o_alu_src_a;
	wire	o_alu_src_b;
	wire	[`XLEN-1:0]		o_alu_mux_a;
	wire	[`XLEN-1:0]		o_alu_mux_b;

	riscv_mux 
	#(
		.N_MUX_IN	(	2	)
	)
	src_a_mux
	(
		.o_mux_data			(	o_alu_mux_a						),
		.i_mux_concat_data	(	{i_pc, o_regfile_rs1_data}	),
		.i_mux_sel			(	o_alu_src_a						)
	);

	riscv_mux 
	#(
		.N_MUX_IN	(	2	)
	)
	src_b_mux
	(
		.o_mux_data			(	o_alu_mux_b						),
		.i_mux_concat_data	(	{o_imm_dec, o_regfile_rs2_data}	),
		.i_mux_sel			(	o_alu_src_b						)
	);

	wire	[3:0]		o_alu_control;
	wire				o_alu_zero;

	riscv_alu u_riscv_alu
	(
		.o_alu_result	(	o_alu_result		),
		.o_alu_zero		(	o_alu_zero			),
		.i_alu_a		(	o_alu_mux_a			),
		.i_alu_b		(	o_alu_mux_b			),
		.i_alu_ctrl		(	o_alu_control		)
	);

	wire	[`XLEN-1:0]	o_rd_data;
	wire	[`XLEN-1:0]	i_wr_data	= o_regfile_rs2_data;
	wire	o_mem_wr_en;
	wire	[`XLEN/8-1:0]	o_dmem_byte_sel;

	riscv_dmem u_riscv_dmem
	(
		.o_dmem_data		(	o_rd_data		),
		.i_dmem_data		(	i_wr_data		),
		.i_dmem_addr		(	o_alu_result	),
		.i_dmem_byte_sel	(	o_dmem_byte_sel	),
		.i_dmem_wr_en		(	o_mem_wr_en		),
		.i_clk				(	i_clk			)
	);

	wire	[1:0]	o_src_rd;
	riscv_mux 
	#(
		.N_MUX_IN	(	4	)
	)
	result_mux
	(
		.o_mux_data			(	o_reg_rd_data												),
		.i_mux_concat_data	(	{o_imm_dec, o_pc_plus, o_rd_data, o_alu_result}	),
		.i_mux_sel			(	o_src_rd	)
	);

	wire	[1:0]	o_result_src;

	riscv_control_unit u_riscv_control_unit
	(
	.o_pc_src        (	o_pc_src		),
	.o_result_src    (	o_result_src	),
	.o_mem_wr_en     (	o_mem_wr_en		),
	.o_alu_control   (	o_alu_control	),
	.o_alu_src_a     (	o_alu_src_a		),
	.o_alu_src_b     (	o_alu_src_b		),
	.o_imm_src       (	o_imm_src		),
	.o_reg_wr        (	o_reg_wr_en		),
	.o_dmem_byte_sel (	o_dmem_byte_sel	),
	.i_op            (	o_imem[6:0]		),
	.i_funct3        (	o_imem[14:12]	),
	.i_funct7        (	o_imem[30]		),
	.i_zero			 (	o_alu_zero		)
);
		
endmodule

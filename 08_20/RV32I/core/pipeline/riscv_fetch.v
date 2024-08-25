
`ifndef		NOINC
`include	"../common/riscv_configs.v"
`include	"../common/riscv_adder.v"
`include	"../common/riscv_mux.v"
`endif

module riscv_fetch
(
	output		[`XLEN-1:0]		o_im_rd_f,
	output		[`XLEN-1:0]		o_pc_plus_4_f,
	input		[`XLEN-1:0]		i_pc_f
);


	riscv_imem
	u_riscv_imem(
		.o_imem_data	(o_im_rd_f		),
		.i_imem_addr	(i_pc_f[`IMEM_ADDR_BIT-1:2]		)
	);

	riscv_adder
	u_riscv_adder(
		.o_adder_sum	(o_pc_plus_4_f		),
		.i_adder_a		(i_pc_f				),
		.i_adder_b		(32'd4				)
	);
endmodule

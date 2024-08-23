
`ifndef		NOINC
`include	"../common/riscv_dmem.v"
`endif

module riscv_memory
(
	output	[`XLEN-1:0]			o_read_data_m,
	input	[`XLEN-1:0]			i_alu_result_m,
	input	[`XLEN-1:0]			i_write_data_m,
	input						i_mem_write_m,
	input	[3:0]				i_mem_byte_sel_m,
	input						i_clk
);

	riscv_dmem
	u_riscv_dmem(
	.o_dmem_data     	(	o_read_data_m			),
	.i_dmem_data     	(	i_write_data_m				),
	.i_dmem_addr     	(	i_alu_result_m				),
	.i_dmem_byte_sel 	(	i_mem_byte_sel_m				),
	.i_dmem_wr_en    	(	i_mem_write_m				),
	.i_clk				(	i_clk			)
);

endmodule

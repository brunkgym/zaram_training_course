//`include "riscv_configs.v"

module adder
(
	output		[`XLEN-1 : 0]		o_adder_out,
	input		[`XLEN-1 : 0]		i_adder_a,
	input		[`XLEN-1 : 0]		i_adder_b
);

	assign	o_adder_out = i_adder_a + i_adder_b;

endmodule

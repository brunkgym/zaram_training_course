
`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_register_fetch
#(
	parameter	REGISTER_INIT	= 0
)
(	
	output reg	[`XLEN-1:0]		o_register_q_0,
	output reg	[`XLEN-1:0]		o_register_q_1,
	output reg	[`XLEN-1:0]		o_register_q_2,
	input		[`XLEN-1:0]		i_register_d_0,
	input		[`XLEN-1:0]		i_register_d_1,
	input		[`XLEN-1:0]		i_register_d_2,
	input						i_register_en,
	input						i_clk,
	input						i_clr,
	input						i_rstn
);

	always @(posedge i_clk or negedge i_rstn) begin
		if(!i_rstn || i_clr) begin
			o_register_q_0	<= REGISTER_INIT;
			o_register_q_1	<= REGISTER_INIT;
			o_register_q_2	<= REGISTER_INIT;
		end else begin
			if(i_register_en) begin
				o_register_q_0	<= i_register_d_0;
				o_register_q_1	<= i_register_d_1;
				o_register_q_2	<= i_register_d_2;
			end else begin
				o_register_q_0	<= o_register_q_0;
				o_register_q_1	<= o_register_q_1;
				o_register_q_2	<= o_register_q_2;
			end
		end
	end

endmodule


`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_register_memory
#(
	parameter	REGISTER_INIT	= 0
)
(	
	output reg	[`XLEN-1:0]		o_register_q_0,
	output reg	[`XLEN-1:0]		o_register_q_1,
	output reg	[`XLEN-1:0]		o_register_q_2,
	output reg	[`XLEN-1:0]		o_register_q_3,
	output reg	[`XLEN-1:0]		o_register_q_4,
	output reg	[`XLEN-1:0]		o_register_q_5,
	output reg	[`XLEN-1:0]		o_register_q_6,
	input		[`XLEN-1:0]		i_register_d_0,
	input		[`XLEN-1:0]		i_register_d_1,
	input		[`XLEN-1:0]		i_register_d_2,
	input		[`XLEN-1:0]		i_register_d_3,
	input		[`XLEN-1:0]		i_register_d_4,
	input		[`XLEN-1:0]		i_register_d_5,
	input		[`XLEN-1:0]		i_register_d_6,
	input						i_clk,
	input						i_rstn
);

	always @(posedge i_clk or negedge i_rstn) begin
		if(!i_rstn ) begin
			o_register_q_0	<= REGISTER_INIT;
			o_register_q_1	<= REGISTER_INIT;
			o_register_q_2	<= REGISTER_INIT;
			o_register_q_3	<= REGISTER_INIT;
			o_register_q_4	<= REGISTER_INIT;
			o_register_q_5	<= REGISTER_INIT;
			o_register_q_6	<= REGISTER_INIT;
		end else begin
				o_register_q_0	<= i_register_d_0 ;
				o_register_q_1	<= i_register_d_1 ;
				o_register_q_2	<= i_register_d_2 ;
				o_register_q_3	<= i_register_d_3 ;
				o_register_q_4	<= i_register_d_4 ;
				o_register_q_5	<= i_register_d_5 ;
				o_register_q_6	<= i_register_d_6 ;
		end
	end

endmodule

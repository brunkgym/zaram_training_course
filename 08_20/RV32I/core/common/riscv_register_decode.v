
`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_register_decode
#(
	parameter	REGISTER_INIT	= 0
)
(	
	output reg	[1:0]				o_register_q_0,
	output reg						o_register_q_1,
	output reg						o_register_q_2,
	output reg						o_register_q_3,
	output reg	[3:0]				o_register_q_4,
	output reg	[3:0]				o_register_q_5,
	output reg						o_register_q_6,
	output reg						o_register_q_7,
	output reg	[`XLEN-1:0]			o_register_q_8,
	output reg	[`XLEN-1:0]			o_register_q_9,
	output reg	[4:0]				o_register_q_10,
	output reg	[4:0]				o_register_q_11,
	output reg	[`XLEN-1:0]			o_register_q_12,
	output reg	[`XLEN-1:0]			o_register_q_13,
	output reg	[`XLEN-1:0]			o_register_q_14,
	output reg	[`XLEN-1:0]			o_register_q_15,
	output reg						o_register_q_16,
	input		[1:0]		i_register_d_0,
	input					i_register_d_1,
	input					i_register_d_2,
	input					i_register_d_3,
	input		[3:0]		i_register_d_4,
	input		[3:0]		i_register_d_5,
	input					i_register_d_6,
	input					i_register_d_7,
	input		[`XLEN-1:0]	i_register_d_8,
	input		[`XLEN-1:0]	i_register_d_9,
	input		[4:0]		i_register_d_10,
	input		[4:0]		i_register_d_11,
	input		[`XLEN-1:0]	i_register_d_12,
	input		[`XLEN-1:0]	i_register_d_13,
	input		[`XLEN-1:0]	i_register_d_14,
	input		[`XLEN-1:0]	i_register_d_15,
	input					i_register_d_16,
	input						i_clk,
	input						i_clr,
	input						i_rstn
);

	always @(posedge i_clk or negedge i_rstn) begin
		if(!i_rstn || i_clr) begin
			o_register_q_0	<= REGISTER_INIT;
			o_register_q_1	<= REGISTER_INIT;
			o_register_q_2	<= REGISTER_INIT;
			o_register_q_3	<= REGISTER_INIT;
			o_register_q_4	<= REGISTER_INIT;
			o_register_q_5	<= REGISTER_INIT;
			o_register_q_6	<= REGISTER_INIT;
			o_register_q_7	<= REGISTER_INIT;
			o_register_q_8	<= REGISTER_INIT;
			o_register_q_9	<= REGISTER_INIT;
			o_register_q_10	<= REGISTER_INIT;
			o_register_q_11	<= REGISTER_INIT;
			o_register_q_12	<= REGISTER_INIT;
			o_register_q_13	<= REGISTER_INIT;
			o_register_q_14	<= REGISTER_INIT;
			o_register_q_15	<= REGISTER_INIT;
			o_register_q_16	<= REGISTER_INIT;
		end else begin
				o_register_q_0	<= i_register_d_0 ;
				o_register_q_1	<= i_register_d_1 ;
				o_register_q_2	<= i_register_d_2 ;
				o_register_q_3	<= i_register_d_3 ;
				o_register_q_4	<= i_register_d_4 ;
				o_register_q_5	<= i_register_d_5 ;
				o_register_q_6	<= i_register_d_6 ;
				o_register_q_7	<= i_register_d_7 ;
				o_register_q_8	<= i_register_d_8 ;
				o_register_q_9	<= i_register_d_9 ;
				o_register_q_10	<= i_register_d_10;
				o_register_q_11	<= i_register_d_11;
				o_register_q_12	<= i_register_d_12;
				o_register_q_13	<= i_register_d_13;
				o_register_q_14	<= i_register_d_14;
				o_register_q_15	<= i_register_d_15;
				o_register_q_16	<= i_register_d_16;
		end
	end

endmodule


module alu
#(
	parameter	NBIT	= 32
)(
	output	reg	[NBIT-1 : 0]	o_data,
	output	reg					o_cout,
	input		[NBIT-1 : 0]	i_data_a,
	input		[NBIT-1 : 0]	i_data_b,
	input		[3:0]			i_fc,
	input						i_clk,
	input						i_rstn
);

	always @(*) begin
		if(!i_rstn) begin
			o_data	<= 0;
			o_cout	<= 0;
		end else begin
			case(i_fc)
				3'b000 : o_data <= i_data_a & i_data_b;
				3'b001 : o_data <= i_data_a | i_data_b;
				3'b010 : {o_cout, o_data} <= i_data_a + i_data_b;
				3'b011 : o_data <= 0;
				3'b100 : o_data <= i_data_a & ~i_data_b;
				3'b101 : o_data <= i_data_a | ~i_data_b;
				3'b110 : o_data <= i_data_a - ~i_data_b;
				3'b111 : o_data <= (i_data_a < i_data_b) ? 1 : 0;
				default : o_data <= 0;
			endcase
		end
	end
endmodule


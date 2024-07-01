module bin_to_gray
#(
	parameter	NBIT	= 8
)(
	output reg	[NBIT-1 : 0]	o_gray,
	input		[NBIT-1 : 0]	i_bin,
	input						i_clk,
	input						i_rstn
);

	always @(*) begin
		if(!i_rstn) begin
			o_gray <= 0;
		end else begin
			o_gray <= (i_bin >> 1) ^ i_bin;
		end
	end

endmodule


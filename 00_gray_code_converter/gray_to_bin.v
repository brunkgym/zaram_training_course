module gray_to_bin 
#(
	parameter	NBIT	= 8
)(
	output reg	[NBIT-1 : 0]	o_bin,
	input		[NBIT-1 : 0]	i_gray,
	input						i_clk,
	input						i_rstn
);

	integer i;

	always @(*) begin
		if(!i_rstn) begin
			o_bin <= 0;
		end else begin
		o_bin[NBIT-1] <= i_gray[NBIT-1];
			for(i=2;i<NBIT+1;i++) begin
				o_bin[NBIT-i] = o_bin[NBIT-i+1] ^ i_gray[NBIT-i];
			end
		end
	end

endmodule

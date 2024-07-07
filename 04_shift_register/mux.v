module mux
(
	output	reg 		o_data,
	input				i_data_a,
	input				i_data_b,
	input				i_sel,
	input				i_clk,
	input				i_rstn
);

wire o_ff;

	assign o_ff = (i_sel) ? i_data_b : i_data_a;
	always @(posedge i_clk) begin
		if(!i_rstn) begin
			o_data	= 0;
		end else begin
			o_data <= o_ff;
		end
	end
	
endmodule

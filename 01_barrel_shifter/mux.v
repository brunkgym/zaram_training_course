module mux
(
	output	reg 		o_data,
	input				i_data_a,
	input				i_data_b,
	input				i_sel,
	input				i_clk,
	input				i_rstn
);

	always @(*) begin
		if(!i_rstn) begin
			o_data	= 0;
		end else begin
			case (i_sel)
				0 : o_data = i_data_a;
				1 : o_data = i_data_b;
			endcase
		end
	end
	
endmodule

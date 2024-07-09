module fsm_mode
(
	output	reg	o_m,
	input		i_clk,
	input		i_rstn,
	input		i_p,
	input		i_r
);

reg		[1:0]	cState;
reg		[1:0]	nState;

localparam	PARADE	=	2'b10;
localparam	NORMAL	=	2'b01;

always @(posedge i_clk or i_rstn) begin
	if(!i_rstn) begin
		cState <= NORMAL;
	end else begin
		cState <= nState;
	end
end

always @(*) begin
	case(cState)
		NORMAL : begin
			o_m <= 0;
			if(i_p)
				nState <= PARADE;
			else
				nState <= NORMAL;
		end
		PARADE : begin
			o_m <= 1;
			if(i_r)
				nState <= NORMAL;
			else
				nState <= PARADE;
		end
	endcase
end

endmodule

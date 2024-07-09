
module fsm_traffic_light
(
	output	reg	[8*8-1 : 0]		o_l_a,
	output	reg	[8*8-1 : 0]		o_l_b,
	input						i_p,
	input						i_r,
	input						i_t_a,
	input						i_t_b,
	input						i_clk,
	input						i_rstn
);

wire mode;

reg		[3:0]	cnt;
reg		[2:0]	cState;
reg		[2:0]	nState;

localparam	S_0		=	3'b001;
localparam	S_1		=	3'b010;
localparam	S_2		=	3'b011;
localparam	S_3		=	3'b111;

assign	mode = (i_r) ? 0 :
			   (i_p) ? 1 : 0;

always @(posedge i_clk or negedge i_rstn) begin
	if(!i_rstn) begin
		cState	<= S_0;
		nState	<= S_0;
		cnt		<= 0;
	end else begin
		if(mode || i_t_b) begin
			cState	= S_2;
		end else begin
			if(i_t_a) begin
				cState	= S_0;
			end else begin
				cState	<= nState;
			end
		end
	end
end

always @(*) begin
	case (cState)
		S_0		: begin
				o_l_a	= "GREEN";
				o_l_b	= "RED";
				if(cnt == 9) begin
					nState = S_1;
				end else begin
					nState = S_0;
				end
		end
		S_1		: begin
				o_l_a	= "YELLOW";
				o_l_b	= "YELLOW";
				if(cnt == 2) begin
					nState = S_2;
				end else begin
					nState = S_1;
				end
		end
		S_2		: begin
				o_l_a	= "RED";
				o_l_b	= "GREEN";
				if(cnt == 9) begin
					nState = S_3;
				end else begin
					nState = S_2;
				end
		end
		S_3		: begin
				o_l_a	= "YELLOW";
				o_l_b	= "YELLOW";
				if(cnt == 2) begin
					nState = S_0;
				end else begin
					nState = S_3;
				end
		end
	endcase
end

always @(i_clk) begin
	if( cnt == 10)
		cnt = 0;
	else
	cnt = cnt + 1;
end	


endmodule

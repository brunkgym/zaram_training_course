module fsm_traffic_light
(
	output		[8*8-1 : 0]		o_l_a,
	output		[8*8-1 : 0]		o_l_b,
	input						i_p,
	input						i_r,
	input						i_t_a,
	input						i_t_b,
	input						i_clk,
	input						i_rstn
);

wire		mode;
reg	[1:0]	state;
wire		state_0;
wire		state_1;
wire		state_2;
wire		state_3;

assign	mode	=	(i_r)	? 0 :
					(i_p)	? 1 : 0;
assign	state_0	=	(state == 0) ? 1 : 0;
assign	state_1	=	(state == 1) ? 1 : 0;
assign	state_2	=	(state == 2) ? 1 : 0;
assign	state_3	=	(state == 3) ? 1 : 0;

assign	o_l_a	=	(state_0)	?	"GREEN"		:
					(state_1)	?	"YELLOW"	:
					(state_2)	?	"RED"		:
					(state_3)	?	"YELLOW"	:	"GREEN";

assign	o_l_b	=	(state_0)	?	"RED"		:
					(state_1)	?	"YELLOW"	:
					(state_2)	?	"GREEN"		:
					(state_3)	?	"YELLOW"	:	"RED";

always @(posedge i_clk or negedge i_rstn) begin
	if(!i_rstn) begin
		state	= 0;
	end else begin
		if (mode) begin
			state	<= 2;
		end else begin
			if(state_0 & i_t_a) begin
				state	<=	0;
			end else begin
				if(state_2 & i_t_b) begin
					state	<=	2;
				end else begin
					state	<=	state + 1;
				end
			end
		end
	end
end

endmodule


	

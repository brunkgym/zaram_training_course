`include "mux.v"
module shift_register
#(
	parameter NBIT	=	8
)(
	output						o_s,
	output		[NBIT-1 : 0]	o_q,
	input		[NBIT-1 : 0]	i_d,
	input						i_s,
	input						i_sel,
	input						i_clk,
	input						i_rstn
);

mux u_mux_0
(
	.o_data   	(	o_q[0]	),
	.i_data_a 	(	i_s		),
	.i_data_b 	(	i_d[0]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_1
(
	.o_data   	(	o_q[1]	),
	.i_data_a 	(	o_q[0]	),
	.i_data_b 	(	i_d[1]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_2
(
	.o_data   	(	o_q[2]	),
	.i_data_a 	(	o_q[1]	),
	.i_data_b 	(	i_d[2]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_3
(
	.o_data   	(	o_q[3]	),
	.i_data_a 	(	o_q[2]	),
	.i_data_b 	(	i_d[3]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_4
(
	.o_data   	(	o_q[4]	),
	.i_data_a 	(	o_q[3]	),
	.i_data_b 	(	i_d[4]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_5
(
	.o_data   	(	o_q[5]	),
	.i_data_a 	(	o_q[4]	),
	.i_data_b 	(	i_d[5]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_6
(
	.o_data   	(	o_q[6]	),
	.i_data_a 	(	o_q[5]	),
	.i_data_b 	(	i_d[6]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_7
(
	.o_data   	(	o_q[7]	),
	.i_data_a 	(	o_q[6]	),
	.i_data_b 	(	i_d[7]	),
	.i_sel    	(	i_sel	),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

assign o_s = o_q[7];

endmodule


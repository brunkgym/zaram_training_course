
`include "mux.v"
module barrel_shifter
#(
	parameter NBIT		= 8
)(
	output		[NBIT-1 : 0]	o_y,
	input		[NBIT-1 : 0]	i_a,
	input		[2:0]			i_sel,
	input						i_clk,
	input						i_rstn
);

	wire		[NBIT-1 : 0]	r4;
	wire		[NBIT-1 : 0]	r2;

//-------------------------------
//Rotate 4bit
//-------------------------------
mux u_mux_r4_0
(
	.o_data   	(	r4[0]	),
	.i_data_a 	(	i_a[0]	),
	.i_data_b 	(	i_a[4]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_1
(
	.o_data   	(	r4[1]	),
	.i_data_a 	(	i_a[1]	),
	.i_data_b 	(	i_a[5]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_2
(
	.o_data   	(	r4[2]	),
	.i_data_a 	(	i_a[2]	),
	.i_data_b 	(	i_a[6]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_3
(
	.o_data   	(	r4[3]	),
	.i_data_a 	(	i_a[3]	),
	.i_data_b 	(	i_a[7]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_4
(
	.o_data   	(	r4[4]	),
	.i_data_a 	(	i_a[4]	),
	.i_data_b 	(	i_a[0]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_5
(
	.o_data   	(	r4[5]	),
	.i_data_a 	(	i_a[5]	),
	.i_data_b 	(	i_a[1]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_6
(
	.o_data   	(	r4[6]	),
	.i_data_a 	(	i_a[6]	),
	.i_data_b 	(	i_a[2]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r4_7
(
	.o_data   	(	r4[7]	),
	.i_data_a 	(	i_a[7]	),
	.i_data_b 	(	i_a[3]	),
	.i_sel    	(	i_sel[2]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

//-------------------------------
//Rotate 2bit
//-------------------------------
mux u_mux_r2_0
(
	.o_data   	(	r2[0]	),
	.i_data_a 	(	r4[0]	),
	.i_data_b 	(	r4[2]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_1
(
	.o_data   	(	r2[1]	),
	.i_data_a 	(	r4[1]	),
	.i_data_b 	(	r4[3]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_2
(
	.o_data   	(	r2[2]	),
	.i_data_a 	(	r4[2]	),
	.i_data_b 	(	r4[4]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_3
(
	.o_data   	(	r2[3]	),
	.i_data_a 	(	r4[3]	),
	.i_data_b 	(	r4[5]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_4
(
	.o_data   	(	r2[4]	),
	.i_data_a 	(	r4[4]	),
	.i_data_b 	(	r4[6]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_5
(
	.o_data   	(	r2[5]	),
	.i_data_a 	(	r4[5]	),
	.i_data_b 	(	r4[7]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_6
(
	.o_data   	(	r2[6]	),
	.i_data_a 	(	r4[6]	),
	.i_data_b 	(	r4[0]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r2_7
(
	.o_data   	(	r2[7]	),
	.i_data_a 	(	r4[7]	),
	.i_data_b 	(	r4[1]	),
	.i_sel    	(	i_sel[1]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

//-------------------------------
//Rotate 1bit
//-------------------------------
mux u_mux_r1_0
(
	.o_data   	(	o_y[0]	),
	.i_data_a 	(	r2[0]	),
	.i_data_b 	(	r2[1]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_1
(
	.o_data   	(	o_y[1]	),
	.i_data_a 	(	r2[1]	),
	.i_data_b 	(	r2[2]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_2
(
	.o_data   	(	o_y[2]	),
	.i_data_a 	(	r2[2]	),
	.i_data_b 	(	r2[3]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_3
(
	.o_data   	(	o_y[3]	),
	.i_data_a 	(	r2[3]	),
	.i_data_b 	(	r2[4]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_4
(
	.o_data   	(	o_y[4]	),
	.i_data_a 	(	r2[4]	),
	.i_data_b 	(	r2[5]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_5
(
	.o_data   	(	o_y[5]	),
	.i_data_a 	(	r2[5]	),
	.i_data_b 	(	r2[6]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_6
(
	.o_data   	(	o_y[6]	),
	.i_data_a 	(	r2[6]	),
	.i_data_b 	(	r2[7]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);

mux u_mux_r1_7
(
	.o_data   	(	o_y[7]	),
	.i_data_a 	(	r2[7]	),
	.i_data_b 	(	r2[0]	),
	.i_sel    	(	i_sel[0]),
	.i_clk    	(	i_clk	),
	.i_rstn   	(	i_rstn	)
);


endmodule

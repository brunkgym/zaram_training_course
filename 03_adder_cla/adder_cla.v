`include "fa_4bit.v"
module adder_cla
#(
	parameter NBIT	=	32
)(
	output		[NBIT-1:0]	o_s,
	output					o_c,
	input		[NBIT-1:0]	i_a,
	input		[NBIT-1:0]	i_b,
	input					i_c
);

wire o_c_0;
wire o_c_1;
wire o_c_2;
wire o_c_3;
wire o_c_4;
wire o_c_5;
wire o_c_6;

fa_4bit u_fa_4bit_0
(
	.o_s	(	o_s[3:0]),
	.o_c	(	o_c_0	),
	.i_a	(	i_a[3:0]),
	.i_b	(	i_b[3:0]),
	.i_c	(	i_c		)
);

fa_4bit u_fa_4bit_1
(
	.o_s	(	o_s[7:4]),
	.o_c	(	o_c_1	),
	.i_a	(	i_a[7:4]	),
	.i_b	(	i_b[7:4]	),
	.i_c	(	o_c_0		)
);

fa_4bit u_fa_4bit_2
(
	.o_s	(	o_s[11:8]),
	.o_c	(	o_c_2	),
	.i_a	(	i_a[11:8]		),
	.i_b	(	i_b[11:8]		),
	.i_c	(	o_c_1		)
);

fa_4bit u_fa_4bit_3 (
	.o_s	(	o_s[15:12]),
	.o_c	(	o_c_3	),
	.i_a	(	i_a[15:12]),
	.i_b	(	i_b[15:12]),
	.i_c	(	o_c_2	)
);

fa_4bit u_fa_4bit_4 (
	.o_s	(	o_s[19:16]),
	.o_c	(	o_c_4	),
	.i_a	(	i_a[19:16]),
	.i_b	(	i_b[19:16]),
	.i_c	(	o_c_3	)
);

fa_4bit u_fa_4bit_5 (
	.o_s	(	o_s[23:20]),
	.o_c	(	o_c_5	),
	.i_a	(	i_a[23:20]),
	.i_b	(	i_b[23:20]),
	.i_c	(	o_c_4	)
);

fa_4bit u_fa_4bit_6 (
	.o_s	(	o_s[27:24]),
	.o_c	(	o_c_6	),
	.i_a	(	i_a[27:24]),
	.i_b	(	i_b[27:24]),
	.i_c	(	o_c_5	)
);

fa_4bit u_fa_4bit_7 (
	.o_s	(	o_s[31:28]),
	.o_c	(	o_c	),
	.i_a	(	i_a[31:28]),
	.i_b	(	i_b[31:28]),
	.i_c	(	o_c_6	)
);

endmodule

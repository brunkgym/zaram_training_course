module fa_4bit
(
	output		 [3:0]	o_s,
	output				o_c,
	input		[3:0]	i_a,
	input		[3:0]	i_b,
	input				i_c
);

wire [3:0]	p;
wire [3:0]	g;
wire [3:0]	c;
wire [3:0]	ff_p;
wire [3:0]	ff_g;

assign p[0] = i_a[0] ^ i_b[0];
assign p[1] = i_a[1] ^ i_b[1];
assign p[2] = i_a[2] ^ i_b[2];
assign p[3] = i_a[3] ^ i_b[3];

assign g[0] = i_a[0] & i_b[0];
assign g[1] = i_a[1] & i_b[1];
assign g[2] = i_a[2] & i_b[2];
assign g[3] = i_a[3] & i_b[3];

assign ff_g = g[3] | (p[3] & (g[2] | (p[2] & (g[1] | (p[1] & g[0])))));
assign ff_p = p[3] & p[2] & p[1] & p[0];
assign o_c = g | (p & i_c);

assign o_s = i_a + i_b + i_c;
endmodule

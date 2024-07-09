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
wire [2:0]	ff_c;

assign p[0] = i_a[0] ^ i_b[0];
assign p[1] = i_a[1] ^ i_b[1];
assign p[2] = i_a[2] ^ i_b[2];
assign p[3] = i_a[3] ^ i_b[3];

assign g[0] = i_a[0] & i_b[0];
assign g[1] = i_a[1] & i_b[1];
assign g[2] = i_a[2] & i_b[2];
assign g[3] = i_a[3] & i_b[3];

assign ff_c[0] = g[0] | (p[0] & i_c);
assign ff_c[1] = g[1] | (p[1] & ff_c[0]);
assign ff_c[2] = g[2] | (p[2] & ff_c[1]);
assign o_c = g[3] | (p[3] & ff_c[2]);

assign o_s[0] = i_a[0] ^ i_b[0] ^ i_c;
assign o_s[1] = i_a[1] ^ i_b[1] ^ ff_c[0];
assign o_s[2] = i_a[2] ^ i_b[2] ^ ff_c[1];
assign o_s[3] = i_a[3] ^ i_b[3] ^ ff_c[2];

endmodule

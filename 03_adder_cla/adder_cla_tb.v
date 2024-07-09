//-------------------------------
//Define & Include
//-------------------------------
`define NBIT		32
`define	SIMCYCLE	20
`define	CLKFREQ		100
`define NVEC		20
`include "adder_cla.v"

module adder_cla_tb;

//-------------------------------
//Signal Declarations: wire
//-------------------------------

	wire		[`NBIT-1:0]	o_s ;
	wire					o_c ;
//-------------------------------
//Signal Declarations: reg 
//-------------------------------
	reg		[`NBIT-1:0]	i_a;
	reg		[`NBIT-1:0]	i_b;
	reg					i_c;
	reg					i_clk;

//-------------------------------
//CLK Generate
//-------------------------------
always #(500/`CLKFREQ) i_clk = ~i_clk;

//-------------------------------
//Module Instance
//-------------------------------

adder_cla u_adder_cla
(
	.o_s	(	o_s	),
	.o_c	(	o_c	),
	.i_a	(	i_a	),
	.i_b	(	i_b	),
	.i_c	(	i_c	)
);

// --------------------------------------------------
//	Test Vector Configuration
// --------------------------------------------------
	reg		[`NBIT-1:0]	vo_s[0:`NVEC-1];
	reg						vo_c[0:`NVEC-1];
	reg		[`NBIT-1:0]	vi_a[0:`NVEC-1];
	reg		[`NBIT-1:0]	vi_b[0:`NVEC-1];
	reg						vi_c[0:`NVEC-1];

	initial begin
		$readmemb("./vec/o_s.vec",			vo_s);
		$readmemb("./vec/o_c.vec",			vo_c);
		$readmemb("./vec/i_a.vec",			vi_a);
		$readmemb("./vec/i_b.vec",			vi_b);
		$readmemb("./vec/i_c.vec",			vi_c);
	end
//-------------------------------
//Tasks
//-------------------------------
integer err	= 0;
task vecInsert;
		input	[$clog2(`NVEC)-1:0]	i;
		begin
			i_a				= vi_a[i];
			i_b				= vi_b[i];
			i_c				= vi_c[i];
		end
	endtask

	task vecVerify;
		input	[$clog2(`NVEC)-1:0]	i;
		begin
			#(0.1*1000/`CLKFREQ);
			if (o_s				!= vo_s[i]) begin $display("[Idx: %3d] Mismatched o_s", i); end
			if (o_c				!= vo_c[i]) begin $display("[Idx: %3d] Mismatched o_c", i); end
			if ((o_s != vo_s[i]) || (o_c != vo_c[i])) begin err++; end
			#(0.9*1000/`CLKFREQ);
		end
	endtask

task init;
	begin
		i_a		= 0;
		i_b		= 0;
		i_c 	= 0;
        i_clk	= 0;

		repeat(10) 	
		@(posedge i_clk);
	end
endtask

//-------------------------------
//Test Start
//-------------------------------
integer		i;
	initial begin
		init();
		for (i=0; i<`SIMCYCLE; i++) begin
			vecInsert(i);
			vecVerify(i);
		end
		#(1000/`CLKFREQ);
		$finish;
	end

//-------------------------------
//Dump VCD
//-------------------------------
reg [8*32-1:0]	vcd_file;
	initial begin
		if ($value$plusargs("vcd_file=%s", vcd_file)) begin
			$dumpfile(vcd_file);
			$dumpvars;
		end else begin
			$dumpfile("adder_cla_tb.vcd");
			$dumpvars;
		end
	end
endmodule

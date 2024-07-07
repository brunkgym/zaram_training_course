//-------------------------------
//Define & Include
//-------------------------------
`define NBIT		32
`define	SIMCYCLE	20
`define	CLKFREQ		100
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

//-------------------------------
//Tasks
//-------------------------------
task init;
	begin
		i_a	= 0;
		i_b	= 0;
		i_c = 0;
        i_clk 		= 0;

		repeat(10) 	
		@(posedge i_clk);
	end
endtask

//-------------------------------
//Test Start
//-------------------------------
integer i;
	initial begin
		init();
		for(i=0;i<`SIMCYCLE;i++) begin
			i_a = $urandom;
			i_b = $urandom;
			i_c = $urandom;
			@(posedge i_clk);
		end
		#100;
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

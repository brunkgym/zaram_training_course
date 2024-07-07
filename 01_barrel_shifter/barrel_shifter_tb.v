//-------------------------------
//Define & Include
//-------------------------------
`define NBIT		8
`define	SIMCYCLE	8
`define	CLKFREQ		100
`include "barrel_shifter.v"

module barrel_shifter_tb;

//-------------------------------
//Signal Declarations: wire
//-------------------------------

	wire	[`NBIT-1 : 0]	o_y;
//-------------------------------
//Signal Declarations: reg 
//-------------------------------

	reg		[`NBIT-1 : 0]	i_a;
	reg		[2:0]			i_sel;
	reg						i_clk;
	reg						i_rstn;

//-------------------------------
//CLK Generate
//-------------------------------
always #(500/`CLKFREQ) i_clk = ~i_clk;

//-------------------------------
//Module Instance
//-------------------------------

barrel_shifter u_barrel_shifter
(
	.o_y    		(	o_y   	),
	.i_a    		(	i_a   	),
	.i_sel  		(	i_sel 	),
	.i_clk  		(	i_clk 	),
	.i_rstn 		(	i_rstn	)
);

//-------------------------------
//Tasks
//-------------------------------
task init;
	begin
		i_a	= 0;
		i_sel = 0;
        i_clk 		= 0;
        i_rstn		= 1;
			
		@(posedge i_clk);
		i_rstn	= 0;

		repeat(20) begin
			@(posedge i_clk);
		end
		
        i_rstn	= 1;

	end
endtask

//-------------------------------
//Test Start
//-------------------------------
integer i;
	initial begin
		init();
		for(i=0;i<`SIMCYCLE;i++) begin
			i_a = 8'h56;
			i_sel = i;
			@(posedge i_clk);
		end
		for(i=0;i<`SIMCYCLE;i++) begin
			i_a = 8'h56;
			i_sel = i;
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
			$dumpfile("barrel_shifter_tb.vcd");
			$dumpvars;
		end
	end
endmodule


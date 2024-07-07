//-------------------------------
//Define & Include
//-------------------------------
`define NBIT		8
`define	SIMCYCLE	20
`define	CLKFREQ		100
`include "shift_register.v"

module shift_register_tb;

//-------------------------------
//Signal Declarations: wire
//-------------------------------

	wire						o_s;
	wire		[`NBIT-1 : 0]	o_q;
//-------------------------------
//Signal Declarations: reg 
//-------------------------------

	reg		[`NBIT-1 : 0]	i_d;
	reg						i_s;
	reg						i_sel;
	reg						i_clk;
	reg						i_rstn;
//-------------------------------
//CLK Generate
//-------------------------------
always #(500/`CLKFREQ) i_clk = ~i_clk;

//-------------------------------
//Module Instance
//-------------------------------

shift_register u_shift_register
(
	.o_s   (	o_s   	) ,
	.o_q   (	o_q   	) ,
	.i_d   (	i_d   	) ,
	.i_s   (	i_s   	) ,
	.i_sel (	i_sel 	) ,
	.i_clk (	i_clk 	) ,
	.i_rstn(	i_rstn	)
);

//-------------------------------
//Tasks
//-------------------------------
task init;
	begin
		i_d	= 0;
		i_s	= 0;
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
integer j;
	initial begin
		init();
		for(i=0;i<`SIMCYCLE;i++) begin
			i_d = $urandom;
			i_s = $urandom;
			i_sel = 0;
			@(posedge i_clk);
		end
			i_d = $urandom;
			i_s = $urandom;
			i_sel = 1;
			@(posedge i_clk);
		
		for(i=0;i<`SIMCYCLE;i++) begin
			i_d = $urandom;
			i_s = $urandom;
			i_sel = 0;
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
			$dumpfile("shift_register_tb.vcd");
			$dumpvars;
		end
	end
endmodule

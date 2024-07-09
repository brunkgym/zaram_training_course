//-------------------------------
//Define & Include
//-------------------------------
`define	SIMCYCLE	8
`define	CLKFREQ		100
`include "fsm_traffic_light.v"

module fsm_tb;

//-------------------------------
//Signal Declarations: wire
//-------------------------------

	wire	[8*8-1 : 0]		o_l_a;
	wire	[8*8-1 : 0]		o_l_b;
	reg						i_p;
	reg						i_r;
	reg						i_t_a;
	reg						i_t_b;
	reg						i_clk;
	reg						i_rstn;

//-------------------------------
//CLK Generate
//-------------------------------
always #(500/`CLKFREQ) i_clk = ~i_clk;

//-------------------------------
//Module Instance
//-------------------------------

fsm_traffic_light u_fsm_traffic_light
(
	.o_l_a 		(	o_l_a 		),
	.o_l_b 		(	o_l_b 		),
	.i_p   		(	i_p   		),
	.i_r   		(	i_r   		),
	.i_t_a 		(	i_t_a 		),
	.i_t_b 		(	i_t_b 		),
	.i_clk 		(	i_clk 		),
	.i_rstn     (	i_rstn	 	)
);
//-------------------------------
//Tasks
//-------------------------------
task init;
	begin
		i_p	= 0;
		i_r	= 0;
		i_t_a= 0;
		i_t_b= 0;
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
			repeat(100)
			@(posedge i_clk);
			i_p = 1;
			repeat(200)
			@(posedge i_clk);
			i_r = 1;
			repeat(100)
			@(posedge i_clk);
			i_t_a = 1;
			repeat(100)
			@(posedge i_clk);
			i_t_a = 0;
			i_t_b = 1;
			repeat(100)
			@(posedge i_clk);
			i_t_b = 0;
			repeat(100)
			@(posedge i_clk);
			for(i=0;i<`SIMCYCLE;i++) begin
				i_p		=	$urandom;
				i_r		=	$urandom;
				#(10000/`CLKFREQ);
			end			
			for(i=0;i<`SIMCYCLE;i++) begin
				i_t_a	=	$urandom;
				i_t_b	=	$urandom;
				#(10000/`CLKFREQ);
			end			
			for(i=0;i<`SIMCYCLE;i++) begin
				i_p		=	$urandom;
				i_r		=	$urandom;
				i_t_a	=	$urandom;
				i_t_b	=	$urandom;
				#(10000/`CLKFREQ);
			end			
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
			$dumpfile("fsm_tb.vcd");
			$dumpvars;
		end
	end
endmodule


`define	CLKFREQ		100
`define	SIMCYCLE	30
`define NBIT		8
`include "bin_to_gray.v"
`include "gray_to_bin.v"

module bgb_tb;

	wire	[`NBIT-1 : 0]	o_gray;
	wire	[`NBIT-1 : 0]	o_bin;
	reg		[`NBIT-1 : 0]	i_bin;
	reg						i_clk;
	reg						i_rstn;

always #(500/`CLKFREQ) i_clk = ~i_clk;

bin_to_gray u_bin_to_gray
(
	.o_gray 		(	o_gray		),
	.i_bin  		(	i_bin 		),
	.i_clk  		(	i_clk 		),
	.i_rstn 		(	i_rstn		)
);

gray_to_bin u_gray_to_bin
(
	.o_bin 			(	o_bin 		),
	.i_gray			(	o_gray		), 
	.i_clk 			(	i_clk 		),
	.i_rstn			(	i_rstn		)
);

task init;
	begin
        i_bin 	= 0;
        i_clk 	= 0;
        i_rstn	= 1;
			
		@(posedge i_clk);
		i_rstn	= 0;

		repeat(20) begin
			@(posedge i_clk);
		end
		
        i_rstn	= 1;

	end
endtask

integer i;

	initial begin
		init();
		for(i=0;i<`SIMCYCLE;i++) begin
		i_bin = $urandom;
		@(posedge i_clk);
		end
		i_bin = 8'b0000_1010;
		@(posedge i_clk);
		i_bin = 8'b0000_0110;
		@(posedge i_clk);
		i_bin = 8'b0000_0111;
		@(posedge i_clk);
		i_bin = 8'b0000_0110;
		@(posedge i_clk);
		i_bin = 8'b0000_0101;
		@(posedge i_clk);
		#(10000/`CLKFREQ);
		$finish;
	end

reg [8*32-1:0]	vcd_file;
	initial begin
		if ($value$plusargs("vcd_file=%s", vcd_file)) begin
			$dumpfile(vcd_file);
			$dumpvars;
		end else begin
			$dumpfile("bgb_tb.vcd");
			$dumpvars;
		end
	end
endmodule


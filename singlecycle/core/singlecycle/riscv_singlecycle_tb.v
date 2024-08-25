`define CLKFREQ		100
`define	SIMCYCLE	`NVEC
`define	NVEC		100
`define IMEM_INIT
`define IMEM_INIT_FILE		"/home/les/project_0/RV32I/core/singlecycle/riscv_program.mif"

`include "../common/riscv_configs.v"
`include "./riscv_singlecycle.v"
`include "../common/riscv_mux.v"
`include "../common/riscv_register.v"
`include "../common/riscv_imem.v"
`include "../common/adder.v"
`include "../common/riscv_regfile.v"
`include "../common/riscv_immdec.v"
`include "../common/riscv_alu.v"
`include "../common/riscv_dmem.v"
`include "../common/riscv_control_unit.v"

module riscv_singlecycle_tb;
	reg		i_clk;
	reg		i_rstn;

	singlecycle u_singlecycle
	(
		.i_clk	(	i_clk	),
		.i_rstn	(	i_rstn	)
	);

	always	#(500/`CLKFREQ)		i_clk = ~i_clk;

	reg		[8*32-1:0]	taskState;
integer					err = 0;

task init;
	begin
		taskState		= "INIT";
		i_clk			= 0;
		i_rstn			= 0;
	end
endtask

task resetNCycle;
	input	[9:0]	i;
	begin
		taskState		= "Reset";
		i_rstn	= 1'b0;
		#(i*1000/`CLKFREQ);
		i_rstn	= 1'b1;
	end
endtask

	integer		i,j;
	initial begin
		init();
		resetNCycle(4);

		for (i=0; i<`SIMCYCLE; i++) begin
			#(1000/`CLKFREQ);
		end
		#(1000/`CLKFREQ);
		$finish;
	end
		
	reg[8*32-1:0]	vcd_file;
	initial begin
		if ($value$plusargs("vcd_file=%s", vcd_file)) begin
			$dumpfile(vcd_file);
			$dumpvars;
		/*	for (i=0; i<2**(`DMEM_ADDR_BIT-2)-1; i++) begin
				$dumpvars(0, u_riscv_dmem.dmem_arr[i]);
			end
			for (i=0; i<32; i++) begin
				$dumpvars(0, u_riscv_regfile.registers[i]);
			end
			*/
		end else begin
			$dumpfile("riscv_singlecycle_tb.vcd");
			$dumpvars;
		end
	end

endmodule

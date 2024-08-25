// ==================================================
//	[ VLSISYS Lab. ]
//	* Author		: Woong Choi (woongchoi@sm.ac.kr)
//	* Filename		: riscv_dmem.v
//	* Description	: Data Memory
// ==================================================

`ifndef		NOINC
`include	"riscv_configs.v"
`endif

module riscv_dmem
(	
	output	reg	[         `XLEN-1:0]	o_dmem_data,
	input		[         `XLEN-1:0]	i_dmem_data,
	input		[`DMEM_ADDR_BIT-3:0]	i_dmem_addr,
	input		[1:0]					i_dmem_byte_addr,
	input		[       `XLEN/8-1:0]	i_dmem_byte_sel,
	input								i_dmem_wr_en,
	input								i_unsigned,
	input								i_clk
);

	reg			[`XLEN-1:0]	dmem_arr[0:2**(`DMEM_ADDR_BIT-2)-1];

`ifdef	DMEM_INIT
	reg	[8*128-1:0] FILE_DATA_MIF;
	initial	begin
		$value$plusargs("data_mif=%s", FILE_DATA_MIF);
		$readmemh(FILE_DATA_MIF, dmem_arr);
	end
`endif

	//	Memory Read (output is not switching during write)
	//assign		o_dmem_data = dmem_arr[i_dmem_addr];

	wire	[`XLEN-1:0]		dmem_data_;
	assign	dmem_data_	= dmem_arr[i_dmem_addr] >> (8*i_dmem_byte_addr);

	always @(*) begin
		case (i_unsigned)
			0	: case ( i_dmem_byte_sel)
					4'b0001	: o_dmem_data		=	{{24{dmem_data_[7]}}, dmem_data_[7:0]};
					4'b0011	: o_dmem_data		=	{{16{dmem_data_[15]}}, dmem_data_[15:0]};
					4'b1111	: o_dmem_data		=	{						 dmem_data_[31:0]};
					default	: o_dmem_data		=	32'dx;
				endcase
			1	: case ( i_dmem_byte_sel)
					4'b0001	: o_dmem_data		=	{{24{                         1'b0}},	dmem_data_[ 7:0]};
					4'b0011	: o_dmem_data		=	{{16{                         1'b0}},	dmem_data_[15:0]};
					default	: o_dmem_data		=	32'dx;
				endcase
		endcase
	end


	//	Memory Write (to support sb, sh, sw)
	//		- i_dmem_byte_sel = sb: 4'b0001, sh: 4'b0011, sw: 4'b1111

	integer		i;
	always @(posedge i_clk) begin
		if (i_dmem_wr_en) begin
			case (i_dmem_byte_sel)
				4'b0001	:	dmem_arr[i_dmem_addr][i_dmem_byte_addr*8+:8] <= i_dmem_data[7:0];
				4'b0011	:	dmem_arr[i_dmem_addr][i_dmem_byte_addr[1]*16+:16] <= i_dmem_data[15:0];
				default	:	dmem_arr[i_dmem_addr] <= i_dmem_data;
			endcase
		end else begin
			dmem_arr[i_dmem_addr] <= dmem_arr[i_dmem_addr];
		end
	end

endmodule

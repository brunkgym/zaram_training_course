//`include "riscv_configs.v"

module riscv_extend
(
	output	reg	[`XLEN-1:0]		o_imm_ext,
	input		[`XLEN-1:0]	i_imm_ext,
	input		[1:0]			i_imm_ext_src
);
	
	always @(*) begin
		case (i_imm_ext_src)
			`I_TYPE		:	o_imm_ext = {{20{i_imm_ext[31]}}, i_imm_ext[31:20]};
			`S_TYPE		:	o_imm_ext = {{20{i_imm_ext[31]}}, i_imm_ext[31:25], i_imm_ext[11:7]};
			`B_TYPE		:	o_imm_ext = {{20{i_imm_ext[31]}}, i_imm_ext[7], i_imm_ext[30:25], i_imm_ext[11:8], 1'b0};
		endcase
	end
	`ifdef DEBUG
		reg			[8*8-1:0]		DEBUG_EXT_SRC;
		always @(*) begin
			case (i_imm_ext_src)
				`I_TYPE		:	DEBUG_EXT_SRC	= "I_TYPE";
				`S_TYPE		:	DEBUG_EXT_SRC	= "S_TYPE";
				`B_TYPE		:	DEBUG_EXT_SRC	= "B_TYPE";
			endcase
		end
	`endif
endmodule

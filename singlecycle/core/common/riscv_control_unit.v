//`include "riscv_configs.v"
module riscv_control_unit
(
	output	reg	[1:0]			o_pc_src,
	output	reg	[1:0]			o_result_src,
	output						o_mem_wr_en,
	output	reg	[3:0]			o_alu_control,
	output						o_alu_src_a,
	output						o_alu_src_b,
	output	reg	[2:0]			o_imm_src,
	output						o_reg_wr,
	output	reg	[`XLEN/8-1:0]	o_dmem_byte_sel,
	input		[6:0]			i_op,
	input		[2:0]			i_funct3,
	input						i_funct7,
	input						i_zero
);

reg		take_branch;

always @(*) begin
	if (i_op == `B_TYPE_OP) begin
		case (i_funct3)
			`FUNCT3_B_BEQ	:	take_branch = i_zero;
			`FUNCT3_B_BNE	:	take_branch = !i_zero;
			`FUNCT3_B_BLT	:	take_branch = !i_zero;
			`FUNCT3_B_BGE	:	take_branch = i_zero;
			`FUNCT3_B_BLTU	:	take_branch = !i_zero;
			`FUNCT3_B_BGEU	:	take_branch = i_zero;
			default			:	take_branch = 1'b0;
		endcase
	end else begin
		take_branch = 1'b0;
	end
end

always @(*) begin
	case (i_op)
		`B_TYPE_OP  	:	o_pc_src	= (take_branch) ? 2'h1 : 2'h0;
		`I_TYPE_OP_J	:	o_pc_src	= 2'h2;
		`J_TYPE_OP		:	o_pc_src	= 2'h1;
		default			:	o_pc_src	= 2'h0;
	endcase
end

assign	o_alu_src_a	=	(i_op == `R_TYPE_OP)   ? 0 :
						(i_op == `I_TYPE_OP)   ? 0 :
						(i_op == `I_TYPE_OP_L) ? 0 :
						(i_op == `I_TYPE_OP_J) ? 0 :
						(i_op == `S_TYPE_OP)   ? 0 :
						(i_op == `B_TYPE_OP)   ? 0 : 1;

assign	o_alu_src_b	=	(i_op == `R_TYPE_OP)	? 0 :
						(i_op == `I_TYPE_OP)	? 1 :
						(i_op == `I_TYPE_OP_L) 	? 1 :
						(i_op == `I_TYPE_OP_J) 	? 1 :
						(i_op == `S_TYPE_OP) 	? 0 :
						(i_op == `B_TYPE_OP) 	? 0 : 1;

assign	o_reg_wr	=	(i_op == `R_TYPE_OP)	? 1 :
						(i_op == `I_TYPE_OP)	? 1 :
						(i_op == `I_TYPE_OP_L)	? 1 :
						(i_op == `I_TYPE_OP_J)	? 1 :
						(i_op == `U_TYPE_OP)	? 1 : 0;

assign	o_mem_wr_en	=	(i_op == `S_TYPE_OP)	? 1 : 0;


always @(*) begin
	case (i_op)
		`R_TYPE_OP		:	o_imm_src	= `SRC_IMM_R;
		`I_TYPE_OP,	
		`I_TYPE_OP_L,
		`I_TYPE_OP_J	:	o_imm_src	= `SRC_IMM_I;
		`S_TYPE_OP		:	o_imm_src	= `SRC_IMM_S;
		`B_TYPE_OP		:	o_imm_src	= `SRC_IMM_B;
		`U_TYPE_OP		:	o_imm_src	= `SRC_IMM_U;
		`J_TYPE_OP		:	o_imm_src	= `SRC_IMM_J;
	endcase
end

always @(*) begin
		case(i_op)
			`R_TYPE_OP	:	begin
								case (i_funct3) 
									`FUNCT3_R_ADD_SUB	:	begin
																case (i_funct7)
																`FUNCT7_R_ADD	:	o_alu_control	= `ALU_CTRL_ADD;
																`FUNCT7_R_SUB	:	o_alu_control	= `ALU_CTRL_SUB;
																endcase
															end
									`FUNCT3_R_XOR 		:	o_alu_control	= `ALU_CTRL_XOR;
									`FUNCT3_R_OR  		:	o_alu_control	= `ALU_CTRL_OR;
									`FUNCT3_R_AND 		:	o_alu_control	= `ALU_CTRL_AND;
									`FUNCT3_R_SLL 		:	o_alu_control	= `ALU_CTRL_SLL;
									`FUNCT3_R_SRL_SRA	:	o_alu_control	= (i_funct7 == `FUNCT7_R_SRA) ? `ALU_CTRL_SRA : `ALU_CTRL_SRL;
									`FUNCT3_R_SLT 		:	o_alu_control	= `ALU_CTRL_SLT;
									`FUNCT3_R_SLTU		:	o_alu_control	= `ALU_CTRL_SLTU;
								endcase
							end
			`I_TYPE_OP		:	begin
									case (i_funct3)
										`FUNCT3_I_ADD		:	o_alu_control	= `ALU_CTRL_ADD;
										`FUNCT3_I_XOR		:	o_alu_control	= `ALU_CTRL_XOR;
										`FUNCT3_I_OR		:	o_alu_control	= `ALU_CTRL_OR;
										`FUNCT3_I_AND		:	o_alu_control	= `ALU_CTRL_AND;
										`FUNCT3_I_SLL		:	o_alu_control	= `ALU_CTRL_SLL;
										`FUNCT3_I_SRL_SRA	:	o_alu_control	= (i_funct7 == `FUNCT7_I_SRA) ? `ALU_CTRL_SRA : `ALU_CTRL_SRL;
										`FUNCT3_I_SLT		:	o_alu_control	= `ALU_CTRL_SLT;
										`FUNCT3_I_SLTU		:	o_alu_control	= `ALU_CTRL_SLTU;
									endcase
								end
			`I_TYPE_OP_L,
			`S_TYPE_OP		:	o_alu_control	= `ALU_CTRL_ADD;
			`B_TYPE_OP		:	begin 
									case(i_funct3)
										`FUNCT3_B_BEQ,
										`FUNCT3_B_BNE	:	o_alu_control	= `ALU_CTRL_SUB;
										`FUNCT3_B_BLT,
										`FUNCT3_B_BGE	:	o_alu_control	= `ALU_CTRL_SLT;
										`FUNCT3_B_BLTU,
										`FUNCT3_B_BGEU	:	o_alu_control	= `ALU_CTRL_SLTU;
									endcase
								end
		endcase
end

always @(*) begin
	case (i_op)
		`I_TYPE_OP_L	:	begin 
								case (i_funct3)
									`FUNCT3_I_L_LB,
									`FUNCT3_I_L_LBU	: o_dmem_byte_sel	= 4'b0001;
									`FUNCT3_I_L_LH,
									`FUNCT3_I_L_LHU	: o_dmem_byte_sel	= 4'b0011;
									`FUNCT3_I_L_LW	: o_dmem_byte_sel	= 4'b1111;
									`FUNCT3_I_L_LB	: o_dmem_byte_sel	= 4'b0001;
								endcase
							end

		`S_TYPE_OP		: 	begin 
								case (i_funct3)
									`FUNCT3_S_BYTE	: o_dmem_byte_sel	= 4'b0001;
									`FUNCT3_S_HALF	: o_dmem_byte_sel	= 4'b0011;
									`FUNCT3_S_WORD	: o_dmem_byte_sel	= 4'b1111;
								endcase
							end
	endcase
end

always @(*) begin
	case (i_op)
		`I_TYPE_OP_L	:	o_result_src	= 2'b01;
		`I_TYPE_OP_J,
		`J_TYPE_OP		:	o_result_src	= 2'b10;
		default			:	o_result_src	= 2'b11;
	endcase
end

endmodule

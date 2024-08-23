// ------------------------------
//	RISC-V Data Bit & Memory Specification
// ------------------------------
`define	XLEN				32
`define DMEM_ADDR_BIT		16
`define IMEM_ADDR_BIT		16


`define DMEM_INIT
`define DMEM_INIT_FILE		"riscv_dmem.mif"
`define IMEM_INIT
`define IMEM_INIT_FILE		"riscv_imem.mif"

// ------------------------------
// Immidiate Source	
// ------------------------------
`define SRC_IMM_R		3'b000
`define SRC_IMM_I		3'b001
`define SRC_IMM_S		3'b010
`define SRC_IMM_B		3'b011
`define SRC_IMM_U		3'b100
`define SRC_IMM_J		3'b101

`define	I_TYPE			2'b00
`define	S_TYPE			2'b01
`define	B_TYPE			2'b10

// ------------------------------
// Control Unit Sorce	
// ------------------------------

// opcode
`define R_TYPE_OP			7'b011_0011
`define I_TYPE_OP			7'b001_0011
`define I_TYPE_OP_L			7'b000_0011
`define I_TYPE_OP_J			7'b110_0111
`define S_TYPE_OP			7'b010_0011
`define B_TYPE_OP			7'b110_0011
`define J_TYPE_OP			7'b110_1111
`define U_TYPE_OP			7'b011_0111
//funct3
`define FUNCT3_R_ADD_SUB			3'd0
`define FUNCT3_R_XOR				3'd4
`define FUNCT3_R_OR					3'd6
`define FUNCT3_R_AND				3'd7
`define FUNCT3_R_SLL				3'd1
`define FUNCT3_R_SRL_SRA			3'd5
`define FUNCT3_R_SLT				3'd2
`define FUNCT3_R_SLTU				3'd3

`define FUNCT3_I_ADD			3'd0
`define FUNCT3_I_XOR				3'd4
`define FUNCT3_I_OR					3'd6
`define FUNCT3_I_AND				3'd7
`define FUNCT3_I_SLL				3'd1
`define FUNCT3_I_SRL_SRA			3'd5
`define FUNCT3_I_SLT				3'd2
`define FUNCT3_I_SLTU				3'd3

`define FUNCT3_I_L_LB				3'd0
`define FUNCT3_I_L_LH				3'd1
`define FUNCT3_I_L_LW				3'd2
`define FUNCT3_I_L_LBU				3'd4
`define FUNCT3_I_L_LHU				3'd5

`define FUNCT3_S_BYTE					3'd0
`define FUNCT3_S_HALF					3'd1
`define FUNCT3_S_WORD					3'd2

`define FUNCT3_B_BEQ				3'd0
`define FUNCT3_B_BNE				3'd1
`define FUNCT3_B_BLT				3'd4
`define FUNCT3_B_BGE				3'd5
`define FUNCT3_B_BLTU				3'd6
`define FUNCT3_B_BGEU				3'd7

`define FUNCT3_I_JALR				3'd0

// funct7
`define	FUNCT7_R_ADD				0
`define FUNCT7_R_SUB				1
`define	FUNCT7_R_SRA				1

`define	FUNCT7_I_SRA				1

//	ALU
`define	ALU_CTRL_ADD				4'b0000
`define	ALU_CTRL_SUB				4'b1000
`define	ALU_CTRL_XOR				4'b0100
`define	ALU_CTRL_OR					4'b0110
`define	ALU_CTRL_AND				4'b0111
`define	ALU_CTRL_SLL				4'b0001
`define	ALU_CTRL_SRL				4'b0101
`define	ALU_CTRL_SRA				4'b1101
`define	ALU_CTRL_SLT				4'b0010
`define	ALU_CTRL_SLTU				4'b0011


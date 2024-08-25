
`ifndef		NOINC
`include	"../common/riscv_configs.v"
`include	"../pipeline/riscv_fetch.v"
`include	"../common/riscv_register_fetch.v"
`include	"../pipeline/riscv_decode.v"
`include	"../common/riscv_register_decode.v"
`include	"../pipeline/riscv_execute.v"
`include	"../common/riscv_register_execute.v"
`include	"../pipeline/riscv_memory.v"
`include	"../common/riscv_register_memory.v"
`include	"../common/riscv_hazard_unit.v"
`include	"../common/riscv_register.v"
`include	"../common/riscv_mux.v"
`endif
module riscv_top
#(
	parameter	REGISTER_INIT	= 0
)
(
	output	[`XLEN-1:0]		o_im_rd_f        ,
	output	[`XLEN-1:0] 	o_pc_f           ,
	output	[`XLEN-1:0]		o_alu_result_m   ,
	output					o_mem_write_m    ,
	output	[3:0]			o_mem_byte_sel_m ,
	output	[`XLEN-1:0]		o_write_data_m   ,
	output	[`XLEN-1:0]		o_read_data_m    ,

	input					i_clk,
	input					i_rstn
);

wire	[1:0]		o_pc_src_e;
wire	[`XLEN-1:0]	o_pc_plus_4_f;
wire	[`XLEN-1:0] o_pc_f_;



	riscv_fetch
	u_riscv_fetch(
		.o_im_rd_f				( o_im_rd_f				),
		.o_pc_plus_4_f			( o_pc_plus_4_f			),
		.i_pc_f					( o_pc_f				)
	);

wire	[`XLEN-1:0]		o_instr_d	 	;	
wire	[`XLEN-1:0]		o_pc_d	   	 	;	
wire	[`XLEN-1:0]		o_pc_plus_4_d	;	
wire					o_stall_d		;	
wire					o_flush_d		;	





	riscv_register_fetch
	#(
		.REGISTER_INIT			(REGISTER_INIT			)
	)
	u_riscv_register_fetch(
	.o_register_q_0		(	o_instr_d	 			),
	.o_register_q_1		(	o_pc_d	   	 			),
	.o_register_q_2		(	o_pc_plus_4_d			),
	.i_register_d_0		(	o_im_rd_f	 			),
	.i_register_d_1		(	o_pc_f	   				),
	.i_register_d_2		(	o_pc_plus_4_f			),
	.i_register_en		(	o_stall_d				),
	.i_clk				(	i_clk					),
	.i_clr				(	o_flush_d				),
	.i_rstn				(	i_rstn					)
);

wire	[4:0]			rs1_d	= o_instr_d[19:15];
wire	[4:0]			rs2_d	= o_instr_d[24:20];
wire	[4:0]			rd_d	= o_instr_d[11:7];
wire	[1:0]			o_result_src_d    ;
wire					o_alu_src_d       ;
wire					o_reg_write_d     ;
wire					o_mem_write_d     ;
wire	[3:0]			o_mem_byte_sel_d  ;
wire	[3:0]			o_alu_control_d   ;
wire					o_jalr_d		  ;
wire					o_jump_d		  ;
wire					o_branch_d		  ;
wire	[`XLEN-1:0]		o_rd1_d           ;
wire	[`XLEN-1:0]		o_rd2_d           ;
wire	[`XLEN-1:0]		o_extimm_d        ;
wire					o_zero_condition_d;
wire	[`XLEN-1:0]		o_result_w	;	
wire	[4:0]			o_rd_w		;	
wire					o_reg_write_w	;

	riscv_decode
	u_riscv_decode(
	.o_result_src_d   (		o_result_src_d                    ),
	.o_alu_src_a_d      (		o_alu_src_a_d                       ),
	.o_alu_src_b_d      (		o_alu_src_b_d                       ),
	.o_reg_write_d    (		o_reg_write_d                     ),
	.o_mem_write_d    (		o_mem_write_d                     ),
	.o_mem_byte_sel_d (		o_mem_byte_sel_d                  ),
	.o_alu_control_d  (		o_alu_control_d                   ),
	.o_jalr_d		  (		o_jalr_d                          ),
	.o_jump_d		  (		o_jump_d                          ),
	.o_branch_d		  (		o_branch_d                        ),
	.o_rd1_d          (		o_rd1_d                           ),
	.o_rd2_d          (		o_rd2_d                           ),
	.o_extimm_d       (		o_extimm_d                        ),
	.o_zero_condition (		o_zero_condition_d                ),

	.i_instr_d        (		o_instr_d                         ),
	.i_pc_d           (		o_pc_d                            ),
	.i_result_w       (		o_result_w                        ),
	.i_reg_write_w	  (		o_reg_write_w                     ),
	.i_rd_w			  (		o_rd_w                            ),
	.i_clk			  (		i_clk							)
);

wire	[1:0]			o_result_src_e  	;
wire					o_alu_src_a_e     	;
wire					o_alu_src_b_e     	;
wire					o_reg_write_e   	;
wire					o_mem_write_e   	;
wire	[3:0]			o_mem_byte_sel_e	;
wire	[3:0]			o_alu_control_e 	;
wire					o_jump_e			;
wire					o_branch_e			;
wire	[`XLEN-1:0]		o_rd1_e         	;
wire	[`XLEN-1:0]		o_rd2_e         	;
wire	[4:0]			o_rs1_e         	;
wire	[4:0]			o_rs2_e         	;
wire	[4:0]			o_rd_e          	;
wire	[`XLEN-1:0]		o_extimm_e      	;
wire	[`XLEN-1:0]		o_pc_plus_4_e		;
wire	[`XLEN-1:0]		o_pc_e				;
wire					o_zero_condition_e	;
wire					o_flush_e			;
wire					o_jalr_e			;




	riscv_register_decode
	#(
		.REGISTER_INIT			(REGISTER_INIT			)
	)
	u_riscv_register_decode(
	.o_register_q_0  	(	o_result_src_e  				),
	.o_register_q_1  	(	o_alu_src_a_e     				),
	.o_register_q_2  	(	o_alu_src_b_e     				),
	.o_register_q_3  	(	o_reg_write_e   				),
	.o_register_q_4  	(	o_mem_write_e   				),
	.o_register_q_5  	(	o_mem_byte_sel_e				),
	.o_register_q_6  	(	o_alu_control_e 				),
	.o_register_q_7  	(	o_jump_e						),
	.o_register_q_8  	(	o_branch_e						),
	.o_register_q_9  	(	o_rd1_e         				),
	.o_register_q_10  	(	o_rd2_e         				),
	.o_register_q_11 	(	o_rs1_e         				),
	.o_register_q_12 	(	o_rs2_e         				),
	.o_register_q_13 	(	o_rd_e          				),
	.o_register_q_14 	(	o_extimm_e      				),
	.o_register_q_15 	(	o_pc_plus_4_e					),
	.o_register_q_16 	(	o_pc_e							),
	.o_register_q_17 	(	o_zero_condition_e				),
	.o_register_q_18 	(	o_jalr_e						),
	.i_register_d_0  	(	o_result_src_d  				),
	.i_register_d_1  	(	o_alu_src_a_d     				),
	.i_register_d_2  	(	o_alu_src_b_d     				),
	.i_register_d_3  	(	o_reg_write_d   				),
	.i_register_d_4  	(	o_mem_write_d   				),
	.i_register_d_5  	(	o_mem_byte_sel_d				),
	.i_register_d_6  	(	o_alu_control_d 				),
	.i_register_d_7  	(	o_jump_d						),
	.i_register_d_8  	(	o_branch_d						),
	.i_register_d_9  	(	o_rd1_d         				),
	.i_register_d_10  	(	o_rd2_d         				),
	.i_register_d_11 	(	rs1_d         				),
	.i_register_d_12 	(	rs2_d         				),
	.i_register_d_13 	(	rd_d          				),
	.i_register_d_14 	(	o_extimm_d      				),
	.i_register_d_15 	(	o_pc_plus_4_d					),
	.i_register_d_16 	(	o_pc_d							),
	.i_register_d_17 	(	o_zero_condition_d				),
	.i_register_d_18 	(	o_jalr_d						),
	.i_clk           	(	i_clk				),
	.i_clr           	(	o_flush_e				),
	.i_rstn				(	i_rstn							)
);

wire				o_zero_e;
wire	[`XLEN-1:0]	o_alu_result_e;	
wire	[`XLEN-1:0]	o_write_data_e;	
wire	[`XLEN-1:0]	o_pc_target_e ;	
wire	[1:0]		o_forward_a_e;	
wire	[1:0]		o_forward_b_e;	

assign	o_pc_src_e	= (o_jalr_e) ? 2'd3 :
					  (o_jump_e | ( o_branch_e & o_zero_e)) ? 2'd1 : 2'd0;
					  
	
	riscv_execute
	u_riscv_execute(
	.o_zero_e        (	o_zero_e      					),
	.o_alu_result_e  (	o_alu_result_e					),
	.o_write_data_e  (	o_write_data_e					),
	.o_pc_target_e   (	o_pc_target_e 					),
	.i_alu_control_e (	o_alu_control_e					),
	.i_alu_src_a_e     (	o_alu_src_a_e					),
	.i_alu_src_b_e     (	o_alu_src_b_e					),
	.i_rd1_e         (	o_rd1_e					),
	.i_rd2_e         (	o_rd2_e					),
	.i_result_w      (	o_result_w					),
	.i_alu_result_m  (	o_alu_result_m					),
	.i_pc_e          (	o_pc_e					),
	.i_extimm_e      (	o_extimm_e					),
	.i_forward_a_e   (	o_forward_a_e					),
	.i_forward_b_e   (	o_forward_b_e					),
	.i_zero_condition(	o_zero_condition_e				)
);

wire			o_reg_write_m	;	
wire	[1:0]		o_result_src_m	;	
wire	[4:0]		o_rd_m			;	
wire	[`XLEN-1:0]		o_pc_plus_4_m	;	
wire	[`XLEN-1:0]		o_extimm_m;

	riscv_register_execute
	#(
		.REGISTER_INIT			(REGISTER_INIT			)
	)
	u_riscv_register_execute(
	.o_register_q_0 	(	o_reg_write_m					),
	.o_register_q_1 	(	o_result_src_m					),
	.o_register_q_2 	(	o_mem_write_m					),
	.o_register_q_3 	(	o_mem_byte_sel_m				),
	.o_register_q_4 	(	o_alu_result_m					),
	.o_register_q_5 	(	o_write_data_m					),
	.o_register_q_6 	(	o_rd_m					),
	.o_register_q_7 	(	o_pc_plus_4_m					),
	.o_register_q_8 	(	o_extimm_m					),
	.i_register_d_0 	(	o_reg_write_e					),
	.i_register_d_1 	(	o_result_src_e					),
	.i_register_d_2 	(	o_mem_write_e					),
	.i_register_d_3 	(	o_mem_byte_sel_e				),
	.i_register_d_4 	(	o_alu_result_e					),
	.i_register_d_5 	(	o_write_data_e					),
	.i_register_d_6 	(	o_rd_e					),
	.i_register_d_7 	(	o_pc_plus_4_e					),
	.i_register_d_8 	(	o_extimm_e					),
	.i_clk          	(	i_clk					),
	.i_rstn				(	i_rstn					)
);


	riscv_memory
	u_riscv_memory(
	.o_read_data_m    	(	o_read_data_m			),
	.i_alu_result_m   	(	o_alu_result_m				),
	.i_write_data_m   	(	o_write_data_m				),
	.i_mem_write_m    	(	o_mem_write_m				),
	.i_mem_byte_sel_m 	(	o_mem_byte_sel_m				),
	.i_clk				(	i_clk						)
);

wire	[1:0]		o_result_src_w	;
wire	[`XLEN-1:0]		o_alu_result_w	;
wire	[`XLEN-1:0]		o_read_data_w	;
wire	[`XLEN-1:0]		o_pc_plus_4_w	;
wire	[`XLEN-1:0]		o_extimm_w		;

	riscv_register_memory
	#(
		.REGISTER_INIT			(REGISTER_INIT			)
	)
	u_riscv_register_memory(
	.o_register_q_0 	(	o_reg_write_w				),
	.o_register_q_1 	(	o_result_src_w				),
	.o_register_q_2 	(	o_alu_result_w				),
	.o_register_q_3 	(	o_read_data_w				),
	.o_register_q_4 	(	o_rd_w				),
	.o_register_q_5 	(	o_pc_plus_4_w				),
	.o_register_q_6 	(	o_extimm_w				),
	.i_register_d_0 	(	o_reg_write_m				),
	.i_register_d_1 	(	o_result_src_m				),
	.i_register_d_2 	(	o_alu_result_m				),
	.i_register_d_3 	(	o_read_data_m				),
	.i_register_d_4 	(	o_rd_m						),
	.i_register_d_5 	(	o_pc_plus_4_m				),
	.i_register_d_6 	(	o_extimm_m				),
	.i_clk          	(	i_clk				),
	.i_rstn				(	i_rstn						)
);

	riscv_mux
	#(
		.N_MUX_IN			(	4	)
	)
	u_mux_result(
		.o_mux_data			(	o_result_w		),
		.i_mux_concat_data	(	{o_extimm_w, o_pc_plus_4_w, o_read_data_w, o_alu_result_w}	),
		.i_mux_sel			(	o_result_src_w	)
	);

wire					o_stall_f;

	riscv_hazard_unit
	u_riscv_hazard_unit(
	.o_stall_f      	(	o_stall_f             ),
	.o_stall_d      	(	o_stall_d             ),
	.o_flush_d      	(	o_flush_d             ),
	.o_flush_e      	(	o_flush_e             ),
	.o_forward_a_e  	(	o_forward_a_e         ),
	.o_forward_b_e  	(	o_forward_b_e         ),
	.i_rs1_d        	(	rs1_d                 ),
	.i_rs2_d        	(	rs2_d                 ),
	.i_rd_e         	(	o_rd_e                ),
	.i_rs2_e        	(	o_rs2_e               ),
	.i_rs1_e        	(	o_rs1_e               ),
	.i_pc_src_e     	(	o_pc_src_e[0]            ),
	.i_result_src_e 	(	o_result_src_e[0]     ),
	.i_rd_m         	(	o_rd_m                ),
	.i_rd_w         	(	o_rd_w                ),
	.i_reg_write_m  	(	o_reg_write_m         ),
	.i_reg_write_w		(	o_reg_write_w		)
);

	riscv_mux
	#(
		.N_MUX_IN		(	4	)
	)
	u_mux_pcf(
		.o_mux_data				(	o_pc_f_),
		.i_mux_concat_data		({o_alu_result_e, 32'h0, o_pc_target_e, o_pc_plus_4_f}),
		.i_mux_sel				(	o_pc_src_e		)
	);

	riscv_register
	#(
		.REGISTER_INIT		(	REGISTER_INIT	)
	)
	u_riscv_register(
	.o_register_q  		(	o_pc_f			),
	.i_register_d  		(	o_pc_f_			),
	.i_register_en 		(	o_stall_f			),
	.i_clk         		(	i_clk			),
	.i_rstn				(	i_rstn			)
);

endmodule

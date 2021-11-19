#ifndef CONTROLLER_H // if HASHTABLE_H is not defined 
#define CONTROLLER_H // then define it here.
#ifdef __cplusplus //check if using a C++ compiler
extern "C" { // if true ^ then use C naming rules for C++ compilation
#endif


    bool    take_branch;
    bool    want_stall;
    bool    pc_write_enable;
    bool    no_stall;
    bool    jump_start;
    bool    inject_bubble;
    bool    regfile_write_enable;
    bool    alu_operand_a_select;
    bool    alu_operand_b_select;
    bool    data_mem_read_enable;
    bool    bodata_mem_write_enable;
    uint8_t next_pc_select;  // 2 Bit
    uint8_t branch_status;   // 2-Bit
    uint8_t alu_op_type;     // 2-Bit
    uint8_t reg_writeback_select; // 3 bit
    uint8_t inst_opcode;     // 7-Bit

#ifdef __cplusplus // if true exit the extern c block
}
#endif
#endif

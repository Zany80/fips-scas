#ifndef MATCH_H
#define MATCH_H
#include "instructions.h"

typedef struct {
    char key;
    char *value_provided;
} immediate_ref_t;

typedef struct {
    size_t shift;
    operand_t *op;
} operand_ref_t;

typedef struct {
    instruction_t *instruction;
    list_t/*operand_ref_t*/ *operands;
    list_t/*immediate_ref_t*/ *immediate_values;
} instruction_match_t;

instruction_match_t *match_instruction(instruction_set_t *set, const char *str);

#endif

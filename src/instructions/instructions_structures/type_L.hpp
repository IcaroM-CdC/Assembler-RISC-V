#include <string>
#ifndef type_L
#define type_L

typedef struct L_instruction L_instruction;

struct L_instruction {

    std::string operation;
    std::string destination_register;
    std::string pointer_register;
    std::string jump_immediate;

};

#endif
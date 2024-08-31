Assume the following variables have already been loaded from memory into registers:

int x = 20;  // loaded into register x19

int y = 5;   // loaded into register x20

int z = 1;   // loaded into register x21


Write the RISC-V assembly instructions to implement the following operations. Use only the add/sub operands.
a = x - y;   // assume register x22 has been assigned to store the value of a

b = z + x;   // assume register x23 has been assigned to store the value of b

sub x22, x19, x20  // a = x - y
add x23, x21, x19  // b = z + x

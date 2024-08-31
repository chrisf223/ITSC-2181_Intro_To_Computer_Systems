Assume the following variables have already been loaded from memory into registers:
int x = 20;  // loaded into register x19
int y = 4;   // loaded into register x20
int z = 1;   // loaded into register x21


Write the RISC-V assembly instructions to implement the following operations. Use only the addi operand.
a = x - 5;   // assume register x22 has been assigned to store the value of a
b = y + 6;   // assume register x23 has been assigned to store the value of b
c = z + 15;  // assume register x24 has been assigned to store the value of c
d = y - 5;   // assume register x25 has been assigned to store the value of d

Write the RISC-V assembly instructions to implement the following operations. Use only the sll/slli operands.
a = x * 2;   // assume register x22 has been assigned to store the value of a
b = y * 8;   // assume register x23 has been assigned to store the value of b
c = z * 16;  // assume register x24 has been assigned to store the value of c

Write the RISC-V assembly instructions to implement the following operations. Use only the and/or/xor/not operands.
a. Extract (or isolate) the first four bits stored in x, store the result in x22
b. Combine all of the bits in x and y, store the result in x23
c. Invert all the digits stored in z, store the result in x24


2.

addi x22, x19, -5
addi x23, x20, 6
addi x24, x21, 15
addi x25, x20, -5

3.

slli x22, x19, 1   
slli x23, x20, 3   
slli x24, x21, 4   


4.

andi x22, x19, 0xf
or x23, x19, x20    
xori x24, x21, -1  

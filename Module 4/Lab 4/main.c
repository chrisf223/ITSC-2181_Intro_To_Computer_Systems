//Write a C program that does the following:
//Takes a decimal value as an input 1 (user enters number at console)
//Takes another decimal value as an input 2 (user enters number at console)
//Prints out the binary values of inputs 1 & 2
//Does Bitwise AND, OR, XOR operation between the two inputs
//Prints out the output for all the operations in binary

#include <stdio.h>

void convertToBinary(int x);

int main(void) {
  int inpOne, inpTwo;
  printf("Enter an integer value: ");
  scanf("%d",&inpOne);
  printf("Enter another integer value: ");
  scanf("%d",&inpTwo);
  
  printf("%d in binary is: ",inpOne);
  convertToBinary(inpOne);
  printf("%d in binary is: ",inpTwo);
  convertToBinary(inpTwo);
  
  int andConversion = inpOne & inpTwo;
  int orConversion = inpOne | inpTwo;
  int xorConversion = inpOne ^ inpTwo;
  printf("Bitwise AND of %d and %d is: ",inpOne,inpTwo);
  convertToBinary(andConversion);
  printf("Bitwise OR of %d and %d is: ",inpOne,inpTwo);
  convertToBinary(orConversion);
  printf("Bitwise XOR of %d and %d is: ",inpOne,inpTwo);
  convertToBinary(xorConversion);

}

void convertToBinary(int x) {
  int binaryNumber[32];
  int size = 0;

  for (;x > 0;size++) {
    binaryNumber[size] = x%2;
    x /=2;
  }
  for (int j = size-1; j >= 0; j--)
    printf("%d", binaryNumber[j]);
  printf("\n");
}
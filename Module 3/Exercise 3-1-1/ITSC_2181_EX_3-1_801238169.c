// Using the scanf function, write a program that does the following: Reads two characters one after the other, one floating point number and one whole number from standard input. Use two character variables, do not use strings or arrays. All the input is entered by the user in one line, separated by spaces. Outputs the input read, in separate lines.

#include <stdio.h>

int main(void)
{
  int myWhole;
  float myFloat;
  printf("Enter a float, a space, and a whole number: \n");
  scanf("%f %d",&myFloat,&myWhole);
  printf("%f\n",myFloat);
  printf("%d\n",myWhole);
  
  return 0;
}
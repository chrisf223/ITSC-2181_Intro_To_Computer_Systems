// Provide the code to read a series of integers from the console and add them as they are entered (a running sum). The program ends when the user types -1. You need to use a while loop.

#include <stdio.h>

int main(void)
{
  int input;
  int sum = 0;
  printf("Enter an integer to add it to the sum. Enter -1 to end the calculation.");
  
  while (!(input == -1)) {
    printf("\nCurrent Sum: %d\nPlease Enter the Next Number: ",sum);
    scanf("%d",&input);
    if (input == -1) {
      printf("Final Sum: %d\n",sum);
      break;
    }
    else {
      sum = sum + input; 
    }
  }
  return 0;
}
// Copy and paste the code below and make sure you can compile and run it in linux.

#include <stdio.h>

int main(void) {
  int num1, num2;
  int retval;

  printf("Enter a number: ");
  retval = scanf("%d", &num1);
  printf("Enter another number: ");
  retval = scanf("%d", &num2);
  printf ("%d + %d = %d\n", num1, num2, (num1 + num2));

  return 0;
}
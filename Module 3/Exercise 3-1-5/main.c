// Write a for loop that prints the first 20 even numbers, in ascending order. Write a for loop that prints the odd numbers between 50 and 20, in descending order.

#include <stdio.h>

int main(void)
{
  //Part 1
  printf("First 20 Even Numbers: ");
  for (int x = 1,evenCount = 0; evenCount < 20; x++) {
    if (x%2 == 0) {
      printf("%d,",x);
      evenCount++;
    }
  }
  printf("\nOdd Numbers From 50 to 20: ");
  //Part 2
  for (int x = 50; x >= 20; x--) {
    if (!(x%2 == 0)) {
      printf("%d,",x);
    }
  }
  return 0;
}
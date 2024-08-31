#include <stdio.h>
#include <stdlib.h> 

int accumulateInts();
int randomAverage();

int main(void) {
  int x = accumulateInts();
}

int accumulateInts() {
  int accumulate = 0;
  for (int i = 1; i <= 100; i++) {
    accumulate += i;
  }
  printf("The sum of all the ints from 1 to 100 is: %d\n",accumulate);
  return accumulate;
}

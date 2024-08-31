#include <stdio.h>
#include <stdlib.h> 

int randomAverage();

int main(void) {
  int x = randomAverage();
}

int randomAverage() {
  int elementArray[100];
  for (int i = 0; i < 100; i++) {
    elementArray[i] = rand() % 101;
  }
  int sum = 0;
  for (int j = 0; j < 100; j++) {
    sum += elementArray[j];
  }
  int average = sum/100;
  printf("The average is: %d\n",average);
  return average; 
}
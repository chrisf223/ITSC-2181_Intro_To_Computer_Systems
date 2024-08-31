#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int A[100];
  int max = 0;
  for (int i = 0; i < 100; i++) {
    A[i] = rand();
    printf("%d\n",A[i]);
  }
  for (int i = 0; i < 100; i++) {
    if (A[i] > max) {
      max = A[i];
    }
  }
  printf("max:%d\n",max);
}
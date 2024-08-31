// 1. Declare and initialize a 1-D array with 12 int elements.
// 1A. Set the values of the 1st, 3rd, and 7th elements to 1, 3, and 7 respectively.
// 1B. Set the value of the remaining elements to zero (0).
// 2. Write a for loop that displays the contents of the array that you declared in the previous step.
// 3. Write a for loop that adds the contents of the same array and displays the result. For example, if the contents of the array are {1, 2, 3}, the output should be 6.
#include <stdio.h> 

int main(void) 
{
  int elements[] = {1,0,3,0,0,0,7,0,0,0,0,0};

  for (int i =0; i < 12; i++) {
    printf("%d,",elements[i]);
  }
  
  int sum = 0;
  for (int i =0; i < 12; i++) {
    sum = sum + elements[i];
  }
  printf("\nThe sum of the elements of the array is: %d\n",sum);

  return 0;
}
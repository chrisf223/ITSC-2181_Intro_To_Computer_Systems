// Write a small program that does the following:
// 1. Declares an array big enough to store five (5) elements of type float.
// 2. Uses a for loop to read the numbers from the console (user input).
// 3. Uses another for loop to add the numbers (sum) and calculate their average.
// 4. Displays the result of the sum and the average.

#include <stdio.h> 

int main(void) 
{
  float elements[5];
  int elementNumber = 1;
  for (int i =0; i < 5; i++) {
    printf("Enter element %d: ",elementNumber);
    scanf("%f",&elements[i]);
    elementNumber++;
  }
  
  float sum;
  for (int i =0; i < 5; i++) {
    sum = sum + elements[i];
  }  
  float mean = sum/5; 
  printf("The sum of the 5 elements is: %f\n",sum);
  printf("The average of the 5 elements is: %f\n",mean);
  return 0;
}
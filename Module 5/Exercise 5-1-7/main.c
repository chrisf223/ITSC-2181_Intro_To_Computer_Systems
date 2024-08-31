//Write the code to dynamically allocate memory for an array named stock_prices with 50 elements, each of type float.
//Assign values to the first five elements in the array.
//Pick any five values from the Yahoo Finance page.
//Write a loop that sets the rest of the stock values to zero.
//Implement a loop that does the following:
//Traverses the entire array from beginning to end.
//Sums the contents of the array, i.e., calculates the cumulative sum.
//Display the value of the sum and the average price of the stocks.
//Free the memory used by the stock_prices array.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  //Part 1
  float *stock_prices = (float*) malloc(50 * sizeof(float));
  *(stock_prices) = 3.595;
  *(stock_prices+1) = 201.95;
  *(stock_prices+2) = 11.23;
  *(stock_prices+3) = 26.32;
  *(stock_prices+4) = 24.93;
  for (int i = 5; i < 50; i++){
    *(stock_prices+i) = 0.0;
  }

  //Part 2
  float sum = 0;
  for (int i = 0; i <50; i++) {
    sum += *(stock_prices + i);
  }
  float average = sum/50;
  printf("Sum: %f: \nAverage: %f\n",sum,average);

  //Part 3
  free(stock_prices);
}
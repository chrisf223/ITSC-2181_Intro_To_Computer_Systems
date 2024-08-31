//Write the code to dynamically allocate memory for an array named stock_prices with 500 elements, each of type float.
//Assign some value to the first five element in the array.
//Free the memory used by the stock_prices array.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  float *stock_prices = malloc(500 * sizeof(float));
  if (stock_prices == NULL) {
    printf("Out of memory error\n");
  }
  else {
    stock_prices[0] = 1.7;
    stock_prices[1] = 3.6;
    stock_prices[2] = 5.4;
    stock_prices[3] = 9.7;
    stock_prices[4] = 1.2;

    free(stock_prices);

  }
}
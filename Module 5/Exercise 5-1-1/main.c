//Part 1
//Declare a variable to store integer data.
//Declare a pointer to integer data.
//Using the pointer, set the value of the variable to 100.
//Using the pointer, display (print) the value of the variable on the console.
//Part 2
//Declare a variable to store floating point data.
//Declare a pointer to floating point data.
//Using the pointer, set the value of the variable to 3.1416
//Using the pointer, display (print) the value of the variable on the console.

#include <stdio.h>

int main(void) {
  int idata, *p;
  p = &idata;
  *p = 100;
  printf("%d\n",*p);

  float fdata, *q; 
  q = &fdata;
  *q = 3.1416;
  printf("%f\n",*q);

}
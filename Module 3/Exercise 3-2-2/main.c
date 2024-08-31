// Part A: Write the code for a function named cube_volume. The function takes one parameter, the side (or edge) of a cube, and calculates the volume of a cube. Assume that all values are of type float. 
//Part B: Provide the code that would be used in main() to use the function (call it or invoke it) and display the result that it returns. 

#include <stdio.h> 

float cube_volume(float side);

int main(void) 
{
  float side = 5.7;
  float volume = cube_volume(side);
  printf("Side: %f\n",side);
  printf("Product: %f\n",volume);
}

float cube_volume(float side) 
{
  return side * side * side;
}
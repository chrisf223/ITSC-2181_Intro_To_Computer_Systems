#include <stdio.h>

int main(void)
{
  float radius,height,volume;
  float pi = 3.14159;
  
  printf("Enter the Radius: ");
  scanf("%f",&radius);
  printf("Enter the Height: ");
  scanf("%f",&height);

  volume = pi * height * radius * radius;
  printf("Volume: %f\n",volume);

  return 0;
}
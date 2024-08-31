//Provide the code to read (parse) an integer and floating point number from a string, such as:
//char string[] = "123 3.14";
//Provide the code to create a string with the format "The number is xxxxx\n", where xxxxx is a number.
//Note: Your code needs to use the sscanf and sprintf functions.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  // Part 1
  char string[] = "123 3.14";
  int integer;
  float floatingPoint;

  sscanf(string, "%d %f", &integer, &floatingPoint);
  printf("Parsed integer: %d\n", integer);
  printf("Parsed floating point number: %.2f\n", floatingPoint);

  // Part 2
  int number = 12345;
  char formattedString[50];
  sprintf(formattedString, "The number is %d\n", number);
  printf("%s", formattedString);
}

// Declare a string (array of char) with the initial value "UNC Charlotte".
// Display the characters in the string, one at a time and on a separate line.

#include <stdio.h> 

int main(void) 
{
  char array[] = "UNC Charlotte";
  
  for (int i = 0; array[i] != '\0'; i++) {
      printf("%c\n", array[i]);
  }
  
  return 0;
}
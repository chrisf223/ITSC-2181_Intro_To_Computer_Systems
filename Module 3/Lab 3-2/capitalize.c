#include <stdio.h> 
#include <ctype.h>

char capitalize(char string[]);

char capitalize(char string[]){
  int size = sizeof(string)/sizeof(string[0]);

  for (int i = 0; i < size-1; i++) {
    if (isalpha(string[i]) != 0) {
      string[i] = toupper(string[i]);
    }
  }
  return string;

}

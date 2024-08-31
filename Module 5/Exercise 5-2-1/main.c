//Write the code to do the following:
//Print the length of the following strings:Your full name."The University of North Carolina at Charlotte"
//Write the code to concatenate two strings and print the result.
//Write the code to compare two strings and copy the contents of the lesser string to the greater string.
//Write the code to find how many times the character '?' occurs in a string.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  // Part 1
  char myName[22] = "DeCristo Franceschini";
  char charlotteName[49] = "The University of North Carolina at Charlotte";
  int str1Length = strlen(myName);
  int str2Length = strlen(charlotteName);
  printf("Length of first string: %d\nLength of second string: %d\n",str1Length,str2Length);

  //Part 2
  char stringOne[50] = "I love ";
  char stringTwo[50] = "cats";
  strcat(stringOne,stringTwo);
  printf("%s\n",stringOne);

  //Part 3
  char firstString[50] = "abcde";
  char secondString[50] = "abcd";
  if (strlen(firstString) >= strlen(secondString)) {
    strcat(firstString,secondString);
    printf("The first string is bigger, the concacated string is: %s\n", firstString);
  }
  else {
    strcat(secondString,firstString);
    printf("The second string is bigger, the concacated string is: %s\n", secondString);
  }

  //Part 4
  char question[50] = "?bsdbk?sadg??ajs?a;";
  int counter = 0;
  for (int i = 0; i < strlen(question);i++) {
    if (question[i] == '?') {
      counter++;
    }
  }
  printf("A ? occurs %d times\n",counter);
}
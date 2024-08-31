// Write and test a program that asks the user to enter a numeric grade. Assume that the grade is an int that represents the score obtained in an assignment. The program uses if-else logic to print a message indicating the letter grade that corresponds to the score. 

#include <stdio.h>

int main(void) {
  int scnr;
  int grade;
  printf("Please enter the numeric grade: ");
  scnr = scanf("%d", &grade);

  if (grade <= 59)
    printf("The letter grade is an F");
  else if (grade <= 69)
    printf("The letter grade is a D");
  else if (grade <= 79)
    printf("The letter grade is a C");
  else if (grade <= 89)
    printf("The letter grade is a B");
  else if (grade <= 100)
    printf("The letter grade is a A");
  else
    printf("invalid number");
  return 0;
}
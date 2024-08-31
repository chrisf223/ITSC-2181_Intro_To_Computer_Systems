#include <stdio.h>

int main(void)
{
  int income,dependents;
  float tax,taxCredit;
  
  printf("Enter Income: ");
  scanf("%d",&income);
  
  if (income <= 9275) {
    tax = (float)income * .12;
  }
  else if (income <= 37650) {
    tax = (float)income * .17;
  }
  else if (income <= 91150) {
    tax = (float)income * .27;
  }
  else if (income <= 190150) {
    tax = (float)income * .30;
  }
  else if (income > 190150) {
    tax = (float)income * .35;
  }
  printf("Tax Due: $%0.2f\n", tax);

  printf("Enter the Number of Dependents (0 for none): ");
  scanf("%d",&dependents);
  if (dependents > 0 && dependents <= 5) {
    taxCredit = 450.0 * (float)dependents; 
  }
  else if (dependents > 5) {
    taxCredit = 450.0 * 5.0;
  }
  else {
    taxCredit = 0.0;
  }
  printf("Tax Credit: $%0.2f\n", taxCredit);
  tax = tax - taxCredit;
  printf("Adjusted Tax: $%0.2f\n", tax);

  return 0;
}
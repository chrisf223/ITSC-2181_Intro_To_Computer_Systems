#include <stdio.h>

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones);

int main(void) {
  int input = 0,twenties,tens,fives,ones,*tWenties,*tEns,*fIves,*oNes;
  tWenties = &twenties;
  tEns = &tens;
  fIves = &fives;
  oNes = &ones;
  
  printf("Enter dollar amount to pay: ");
  scanf("%d",&input);
  calc_bills(input,tWenties,tEns,fIves,oNes);
}

void calc_bills(int dollar_amount, int *twenties, int *tens, int *fives, int *ones) {
  *twenties = dollar_amount/20;
  *tens = 0;
  *fives = 0;
  *ones = dollar_amount%5;
  if (!(dollar_amount%20 == 0)) {
    *tens = (dollar_amount%20)/10;
  }
  if (!(dollar_amount%10 == 0)) {
    *fives = (dollar_amount%10)/5;
  }
  printf("\nYou need:\n\t$20 bills: %d\n\t$10 bills: %d\n\t$5 bills: %d\n\t$1 bills: %d\n",*twenties,*tens,*fives,*ones);
  
}

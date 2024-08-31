#include <stdio.h> 

int main(void) 
{
  int day = 1;
  int maxTemp = 0;
  int temp;
  printf("You will be asked to enter the daily high temperature for 10 consecutive days.\n");
  for (int i = 1; i <= 10; i++) {
    printf("Enter a high temperature(Day %d): ",i);
    scanf("%d",&temp);
    if (temp >= maxTemp) {
      maxTemp = temp; 
      day = i;
    }
  
  }
  printf("The highest recorded temperature in the 10 day period was: %d degrees\nLast recorded on: day %d\n",maxTemp,day);

}
#include <stdio.h>

int main(void)
{
  int firstTemp,secondTemp,thirdTemp;
  
  printf("You will be asked to enter the daily high temperature for 3 consecutive days.\nEnter a high temperature: ");
  scanf("%d",&firstTemp);
  printf("Enter a high temperature: ");
  scanf("%d",&secondTemp);
  printf("Enter a high temperature: ");
  scanf("%d",&thirdTemp);

  if (firstTemp >= secondTemp && firstTemp >= thirdTemp) {
    printf("The highest recorded temperature in the 3 day period was: %d degrees\nRecorded on Day #1\n",firstTemp);
  }
  else if (secondTemp >= thirdTemp) {
    printf("The highest recorded temperature in the 3 day period was: %d degrees\nRecorded on Day #2\n",secondTemp);
    }
  else {
    printf("The highest recorded temperature in the 3 day period was: %d degrees\nRecorded on Day #3\n",thirdTemp);
    }
  
  return 0;
}
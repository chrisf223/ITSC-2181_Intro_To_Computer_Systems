//Provide the code to produce the output shown below. You need to use a for loop. 
//x=0
//x=1
//x=2
//x=3
//x=4
//x=5
//x=6
//x=7
//x=8
//x=9

#include <stdio.h>

int main(void)
{
  for (int x=0; x<=9;x++){
    printf("x = %d\n",x);
  }

  int i;
  while (i<=9){
    printf("x = %d\n",i);
    i++;
  }

  return 0;
}
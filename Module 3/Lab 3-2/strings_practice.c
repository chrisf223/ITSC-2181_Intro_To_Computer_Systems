#include "capitalize.c"

int main(void) 
{
  char the_str[] = "test";
  capitalize(the_str);
  printf("%s\n", the_str);
  char the_str2[] = "This 5IS a4 tesTbhddawAA!";
  capitalize(the_str2);
  printf("%s\n", the_str2);
}

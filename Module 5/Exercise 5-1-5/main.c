//Given the following struct:
//Dynamically allocate the memory for one (1) struct person, as defined above. Assign the struct person your attributes (or make some up).
//You need to use dynamic memory allocation for the person's name field of the struct as well.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
   char *name;
   int age;
   int height; //in inches
   char eye_color;
} st;

int main(void) {
  struct person * ptr_data = malloc(sizeof(struct person));

  if (ptr_data == NULL) {
    printf("Out of memory error\n");
  }

  else {
    strcpy((*ptr_data).name, "Chris");
    (*ptr_data).age = 21;
    (*ptr_data).height = 70;
    (*ptr_data).eye_color = 'g';
  }
  return 0;
}
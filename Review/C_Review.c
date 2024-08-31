#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int x = 5;
  // declaring a pointer (*ptr) to the adress of a variable (&x)
  int *ptr = &x; 
  // *ptr returns the value of the variable it points to (5)
  // ptr returns the address of the variable it points to (address of x)
  // &ptr returns the address of the pointer variable (address of ptr)

  
  int size = 50;
  // malloc allocates based on bites
  // multiply the number of variables you want by the size of an int
  // malloc also must be casted to a pointer of the variable type
  int *array = (int*)malloc(size * sizeof(int));
  // print an error if the array memory was not allocated properly
  if (array == NULL) {
    printf("Error: Out of memory");
    return -1; 
  }

  // pointer arithmentic 
  // these are equivalent statements (second is pointer arithmetic)
  int index = 1;
  array[index] = 20;
  // accessing an element with pointer arithmetic
  *(array + index) = 20;
  
  // accessing the array
  for (int i = 0; i < size; i++) {
    array[i] = i;
  }
  // accessing an array with pointer arithmetic
  for(int *pointer = array; pointer < array + size; ptr ++) {
    // ....
  }
  // clears array from memory (do this at the end any time malloc is used)
  free(array);

  // example of using malloc to copy strings
  char* text = "This is a string";
  char* new_text = "This is a different string"; 
  char *copy = (char*)malloc(strlen(new_text) + 1);
  strcpy(copy, new_text);
  free(copy);

  //allocating memory to structs
  struct box {
  int x;
  int y;
  int z;
  };
  struct box *point = (struct box*)malloc(sizeof(struct box));
  // accessing struct elements with pointers
  point->x = 50;
  
}

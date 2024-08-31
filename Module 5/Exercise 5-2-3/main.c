//Write a function that given two pointers to box structs, does the following:
//Updates the box with the greater volume to position (0, 0, 0) and color of "green".
//Use the same box struct from the previous exercises.
//If both boxes have equal volume, update the second box.
//The function has a return type of void, i.e., it does not return anything.
//Note: You must use pointers in your code.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct box {
  int itemnum;
  char color[20];
  int height;
  int width;
  int depth;
  float x;
  float y;
  float z;
};

void compareBoxes(struct box *bOx1,struct box *bOx2);

int main(void) {

  struct box box1 = {1,"red",7,5,4,1.1,2.3,4.6};
  struct box box2 = {0,"blue",4,3,9,4.2,2.7,6.6};
  struct box *bOx1 = &box1;
  struct box *bOx2 = &box2;
  compareBoxes(bOx1,bOx2);

}

void compareBoxes(struct box *bOx1,struct box *bOx2) {
  int volume1 = bOx1->height * bOx1->depth * bOx1->width;
  int volume2 = bOx2->height * bOx2->depth * bOx2->width;

  if (volume1 > volume2) {
    bOx1->x = 0.0;
    bOx1->y = 0.0;
    bOx1->z = 0.0;
    bOx1->color[0] = 'g';
    bOx1->color[1] = 'r';
    bOx1->color[2] = 'e';
    bOx1->color[3] = 'e';
    bOx1->color[4] = 'n';
    for (int i = 5;i < strlen(bOx1->color);i++){
      bOx1->color[i] = '\0';
    }
  }
  
}
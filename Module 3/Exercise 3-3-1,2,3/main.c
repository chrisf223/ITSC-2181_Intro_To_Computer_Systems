//Create a struct named box, which is used to represent a volume in 3-dimensional space. The struct has the following members:
//itemnum (int)
//color (char * or char[20])
//height (int)
//width (int)
//depth (int)
//x     (float)
//y     (float)
//z     (float) 


//Write a statement to declare and initialize a variable that uses the box struct with the following values:
//3 for itemnum
//"red" for color
//3 for height
//2 for width
//5 for depth
//(10.21, 20.62, 35.72) for the x, y, z coordinates of the box's position


//Write a printf statement that shows the values stored in the box struct. For the values used in step 2 above, the output would be:
//Item: 3, Color: red, Position: (10.21, 20.62, 35.72)
//Height: 3, Width: 2, Depth: 5

#include <stdio.h> 
#include <string.h> 

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

struct box biggerBox(struct box box1, struct box box2);

int main(void) 
{
  struct box boxOne = {
    .itemnum = 3,
    .color = "red",
    .height = 3,
    .width = 2,
    .depth = 5,
    .x = 10.21,
    .y = 20.62,
    .z = 35.72
  };

  printf("Item: %d, Color: %s, Position: (%.2f, %.2f, %.2f)\nHeight: %d, Width: %d, Depth: %d\n",boxOne.itemnum,boxOne.color,boxOne.x,boxOne.y,boxOne.y,boxOne.height,boxOne.width,boxOne.depth);

//Write the code to declare an array of 100 elements of type box struct. Use the struct from the previous exercise.
//Write the code to initialize values for a box at indexes 0 and 1. Pick any values that make sense. See the previous exercises for examples. Leave the rest of the array elements uninitialized.

  struct box boxArray[100]; 
  boxArray[0].x = 10.2;
  boxArray[0].y = 9.1;
  boxArray[0].z = 4.62;
  boxArray[0].itemnum = 1;
  boxArray[0].depth = 5;
  boxArray[0].height = 17;
  boxArray[0].width = 7; 
  strcpy(boxArray[0].color, "purple");
  boxArray[1].x = 10.7;
  boxArray[1].y = 5.16;
  boxArray[1].z = 9.72;
  boxArray[1].itemnum = 4;
  boxArray[1].depth = 2;
  boxArray[1].height = 11;
  boxArray[1].width = 6; 
  strcpy(boxArray[1].color, "orange");
}
//Write a function that when given two boxes (i.e., box struct) returns the one with the greater volume
//Use the struct from the previous exercises.
//To calculate the volume, use the standard formula: volume = height * width * depth
//The function also modifies the position and color of the biggest box. The returned box will have a position of (0, 0, 0) and the color will be set to "green".
//If both boxes have the same volume, make the modifications and return the second box.

struct box biggerBox(struct box box1,struct box box2) {
  int volume1 = box1.height * box1.width * box1.depth;
  int volume2 = box2.height * box2.width * box2.depth;
  if (volume1 > volume2){
    box1.x = 0;
    box1.y = 0;
    box1.z = 0;
    strcpy(box1.color, "green"); 
    return box1;
  }
  else {
    box2.x = 0;
    box2.y = 0;
    box2.z = 0;
    strcpy(box2.color, "green"); 
    return box2;
  }
}

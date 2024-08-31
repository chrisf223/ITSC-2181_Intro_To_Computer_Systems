// The following table shows telephone area codes in the state of Georgia along with the largest city in each area:
//  Area Code 	Major City
//  229 		Albany 
//  404 		Atlanta 
//  470 		Atlanta 
//  478 		Macon 
//  678 		Atlanta 
//  706 		Columbus 
//  762 		Columbus 
//  770 		Atlanta 
//  912 		Savannah
// Write a switch statement whose controlling expression is the variable area_code. If the value of area code is in the table, the switch statement will print the corresponding city name. Otherwise, the switch statement will display the message “Invalid Area Code".
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
  int area_code;

  switch(area_code) {
    case 229: 
      printf("Albany");
      break;
    case 404: case 470: case 678: case 770: 
      printf("Atlanta");
      break;
    case 478:
      printf("Macon");
      break;
    case 706: case 762:
      printf("Columbus");
      break;
    case 912:
      printf("Savannah");
      break;
    default: 
      printf("Invalid Area Code");
      break;
  }
}

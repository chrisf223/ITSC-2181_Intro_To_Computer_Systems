#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float parse_data(char string[]);
void pretty_print(char item[], int total, float cost);

FILE *infile;
int totalItems = 0;
float totalPrice = 0.0;

int main(int argc, char *argv[]) {
  FILE *infile;

  if (argc < 2) {
    printf("Error: Missing File");
  }
  
  infile = fopen(argv[1], "r");
  if (infile == NULL) {
      printf("Unable to open the input file\n");
  }

  char buffer[100];


  while (fgets(buffer,100,infile) != NULL) {
    parse_data(buffer);
  }

  printf("-----------------------------------------------------\n");
  printf("Total Items: %d  Total Cost: $ %.2f\n",totalItems,totalPrice);

  fclose(infile);
}

float parse_data(char string[]) {
  char name[20];
  int items;
  float price,subtotal;
  
  sscanf(string,"%s %d %f",name,&items,&price);
  subtotal = items * price;

  totalPrice = totalPrice + subtotal;
  totalItems = totalItems + items; 
  pretty_print(name,items,price);
  return subtotal;
}

void pretty_print(char item[], int total, float cost) {
  float subtotal = total * cost; 
  printf("Item: %-9s  Quantity: %-4d  Item Price: $ %-5.2f  Subtotal: $ %-4.2f \n",item,total,cost,subtotal);
}
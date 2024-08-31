/*
   This program reads user input from the console 
   and uses it to display formatted output.
*/

#include <stdio.h>

#define STR_LENGTH 100

int main( void ) {
   // Char arrays to store the input
   char first_name[STR_LENGTH];
   char last_name[STR_LENGTH];
   int age;

   // Prompt user input.
   printf("Enter the customer's first name: ");
   scanf("%s", first_name);

   printf("Enter the customer's last name: ");
   scanf("%s", last_name);

   printf("Enter the customer's age: ");
   scanf("%d", &age);


   // Produce the output
   printf("\nThe customer is named: %s %s\n", first_name, last_name);
   printf("They are %d years old.\n", age);
   printf("Good bye!");
   
   // A newline char at the end of the output.
   putchar( '\n' );

   return 0;
}
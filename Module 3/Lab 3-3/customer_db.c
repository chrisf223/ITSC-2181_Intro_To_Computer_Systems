#include <stdio.h>

struct customer {
char firstName[20];
char middleName[20];
char lastName[20];
char phone[16];
float balance;
};

void show_customer(struct customer cust);
void show_database(struct customer cust_db[], int size);

int main(void) {
  struct customer customerList[20];
  int customerNumber = 0;
  
  while (customerNumber < 20) {
    struct customer newCustomer = {};
    char customerInput[20];
    
    printf("\nPlease enter the next customer record.\n  :X  Exits the program\n  :S  Shows the contents of the database\nFirst Name: ");
    scanf("%s",newCustomer.firstName);
    
    if (newCustomer.firstName[0] == 'X') {
      break;
    }
    else if (newCustomer.firstName[0] == 'S') {
      show_database(customerList, customerNumber);
    }
    else {
      printf("Middle Name: ");
      scanf("%s",newCustomer.middleName);
      printf("Last Name: ");
      scanf("%s",newCustomer.lastName);
      printf("Phone Number: ");
      scanf("%s",newCustomer.phone);
      printf("Balance Due: ");
      scanf("%f",&newCustomer.balance);
      customerList[customerNumber+1] = newCustomer;
    }
    if (customerNumber == 19){
      char cusInput[20]; 
      printf("Maximum Number of Customers Reached!\n  :S  Show the final contents of the database\n");
      scanf("%s",cusInput);
      if (cusInput[0] == 'S') {
        show_database(customerList, customerNumber);
    }
  }
    customerNumber++;
  }
  printf("Goodbye!\n");
}

void show_customer(struct customer cust) {
  printf("Customer: %s %s %s\nPhone Number: %s, Balance: $%.2f\n", cust.firstName,cust.middleName,cust.lastName,cust.phone,cust.balance);
}
void show_database(struct customer cust_db[], int size) {
  printf("Customer List:\n--------------\n");
  for (int x = 0; x < size; x++) {
    show_customer(cust_db[x+1]);
    printf("\n--------------\n");
  }
}
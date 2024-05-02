#include <stdio.h>

// Enum to represent different states of the ATM
enum ATMState
{
IDLE,
CARD_INSERTED,
PIN_ENTRY,
OPTIONS_MENU
};

int main() {
enum ATMState currentState = IDLE;
int cardNumber;
int pin;
int choice;

printf("Welcome to the ATM!\n");

while (1) {
switch (currentState) {
case IDLE:
printf("\nPlease insert your card: ");
scanf("%d", &cardNumber);
currentState = CARD_INSERTED;
break;

case CARD_INSERTED:
printf("Please enter your PIN: ");
scanf("%d", &pin);
currentState = PIN_ENTRY;
break;

case PIN_ENTRY:

currentState = OPTIONS_MENU;
break;

case OPTIONS_MENU:
printf("\nOptions Menu:\n");
printf("1. Check Balance\n");
printf("2. Cash Withdrawal\n");
printf("3. Exit\n");
printf("Please choose an option: ");
scanf("%d", &choice);

switch (choice) {
case 1:
printf("Checking account balance...\n");

printf("Your account balance is: $1500.00\n");
break;
case 2:
printf("Enter the amount to withdraw: ");
double amount;
scanf("%lf", &amount);

printf("Withdrawing $%.2f from your account...\n", amount);
printf("Withdrawal successful!\n");
break;
case 3:
printf("Thank you for using the ATM. Goodbye!\n");
return 0;
default:
printf("Invalid option!\n");
break;
}
break;

default:
printf("Invalid state!\n");
return 1;
}
}

return 0;
}

//#include <stdio.h>
//#include<stdio.h>
//
//int main(int argc, char *argv[])
//{
//    int a ;
//    printf("\nNumber of arguments:%d", argc);
//    printf("\nThe argument[1] is: %d\n",argv[1]);
//    return 0;
//}
//
//


#include <stdio.h>
#include <stdlib.h>
enum states
{
    IDLE_STATE,
    CARD_INSERTED_STATE,
    PIN_ENTRY_STATE,
    OPTION_STATE,
    OPERATION_STATE
};
int main(int argc, char *argv[])
{

    if (argc != 2)
        {
        printf("Error: No card inserted.\n");
        return 1;
        }

    int card_number = atoi(argv[1]);

    enum states state = IDLE_STATE;
    while (1)
        {
        switch (state)
        {
            case IDLE_STATE:
                if (card_number | (1<<1) == card_number)
                 {
                    state = CARD_INSERTED_STATE;
                 }
                else
                 {
                    printf("Error: Invalid card number.\n");
                    return 1;
                 }
                break;
            case CARD_INSERTED_STATE:
                printf("Enter your PIN: ");
                char pin[4];
                scanf("%s", pin);
                if (strcmp(pin, "1234") == 0)
                    {
                    state = PIN_ENTRY_STATE;
                    }
                else
                    {
                    printf("Error: Invalid PIN.\n");
                    return 1;
                    }
                break;
            case PIN_ENTRY_STATE:
                printf("Select an option:\n");
                printf("1. Check balance\n");
                printf("2. Withdraw cash\n");
                printf("3. Deposit cash\n");
                printf("4. Transfer money\n");
                printf("5. Exit\n");
                int option;
                scanf("%d", &option);
                if (option < 1 || option > 5)
                    {
                    printf("Error: Invalid option.\n");
                    return 1;
                    }
                switch (option)
                {
                    case 1:
                        printf("Balance -- Rs.10,0000\n");
                        state = OPERATION_STATE;
                        break;
                    case 2:
                        printf("Withdrawing cash...\n");
                        state = OPERATION_STATE;
                        break;
                    case 3:
                        printf("Depositing cash...\n");
                        state = OPERATION_STATE;
                        break;
                    case 4:
                        printf("Transferring money...\n");
                        state = OPERATION_STATE;
                        break;
                         case 5:
                        printf("Exiting...\n");
                        return 0;
                        break;
                }
                break;
                case OPTION_STATE:
                        printf("Enter the amount to transfer: ");
                        int amount;
                        scanf("%d", &amount);
                        if (amount <= 0)
                            {
                            printf("Error: Invalid amount.\n");
                            return 1;
                            }
                        printf("Transferring %d...\n", amount);
                        state = OPERATION_STATE;
                        break;
                case OPERATION_STATE:
                        printf("Select an action:\n");
                        printf("1. Insert card\n");
                        printf("2. Exit\n");
                         int action;
                scanf("%d", &action);
                if (action < 1 || action > 2)
                    {
                    printf("Error: Invalid action.\n");
                    return 1;
                    }
                switch (action)
                {
                    case 1:
                        printf("Inserting card...\n");
                        state = IDLE_STATE;
                        break;
                    case 2:
                        printf("Exiting...\n");
                        return 0;
                        break;
                }
                break;
        }
    }
    return 0;
}


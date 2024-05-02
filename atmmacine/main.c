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
                card_number = card_number & (1<<1);

                if (card_number == (1<<1))
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
                    return 1;
                    }
                break;
            case PIN_ENTRY_STATE:
                printf("Select an option:\n");
                printf("1. Check balance\n");
                printf("2. Withdraw cash\n");
                printf("3. Exit\n");
                int option;
                scanf("%d", &option);
                if (option < 1 || option > 3)
                    {
                    printf("Error: Invalid option\n");
                    return 1;
                    }
                switch (option)
                {
                    case 1:
                        printf("Balance = Rs.15000\n");
                        state = PIN_ENTRY_STATE;
                        break;
                    case 2:
                        printf("Withdrawing cash...\n");
                        state = OPTION_STATE;
                        break;
                    case 3:
                        printf("Exit\n");
                        return 0;
                        break;
                }
                break;
                case OPTION_STATE:
                        printf("Enter the amount to withdraw: ");
                        int amount;
                        scanf("%d", &amount);
                        if (amount <= 0)
                            {
                            printf("Error: Invalid amount\n");
                            return 1;
                            }
                        printf("Amount withdrawn %d\n", amount);
                        state = OPERATION_STATE;
                        break;
                case OPERATION_STATE:
                        printf("Select an action:\n");
                        printf("1. Want to know more\n");
                        printf("2. Collect cash\n");
                         int action;
                scanf("%d", &action);
                if (action < 1 || action > 3)
                    {
                    printf("Error: Invalid action\n");
                    return 1;
                    }
                switch (action)
                {
                    case 1:
                        printf("choose any option\n");
                        state = PIN_ENTRY_STATE;
                        break;
                    case 2:
                        printf("Exit\n");
                        return 0;
                        break;
                }
                break;
        }
    }
    return 0;
}


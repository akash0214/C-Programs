#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 200

typedef struct
{
    int account_number;
    char name[50];
    double balance;
} Customer;

void printLowBalanceCustomers(Customer customers[], int count)
{
    printf("Customers with balance below Rs. 1000:\n");
    for (int i = 0; i < count; i++)
    {
        if (customers[i].balance < 1000)
        {
            printf("Account Number: %d, Name: %s\n", customers[i].account_number, customers[i].name);
        }
    }
}

void handleTransaction(Customer customers[], int count, int account_number, double amount, int code)
{
    for (int i = 0; i < count; i++)
    {
        if (customers[i].account_number == account_number)
        {
            if (code == 1)
            { // Deposit
                customers[i].balance += amount;
                printf("Deposit successful. New balance: Rs. %.2f\n", customers[i].balance);
            }
            else if (code == 0)
            { // Withdrawal
                if (customers[i].balance - amount < 1000)
                {
                    printf("The balance is insufficient for the specified withdrawal. Current balance: Rs. %.2f\n", customers[i].balance);
                }
                else
                {
                    customers[i].balance -= amount;
                    printf("Withdrawal successful. New balance: Rs. %.2f\n", customers[i].balance);
                }
            }
            else
            {
                printf("Invalid transaction code.\n");
            }
            return;
        }
    }
    printf("Account number %d not found.\n", account_number);
}

int main()
{
    Customer customers[MAX_CUSTOMERS];
    int count;

    printf("Enter the number of customers: ");
    scanf("%d", &count);

    for (int i = 0; i < count; i++)
    {
        printf("Enter details for customer %d\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &customers[i].account_number);
        printf("Name: ");
        scanf(" %[^\n]%*c", customers[i].name);
        printf("Balance: ");
        scanf("%lf", &customers[i].balance);
    }

    int choice;
    do
    {
        printf("\nMenu:\n");
        printf("1. Print customers with balance below Rs. 1000\n");
        printf("2. Handle a transaction (withdrawal or deposit)\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printLowBalanceCustomers(customers, count);
            break;
        case 2:
        {
            int account_number, code;
            double amount;
            printf("Enter account number: ");
            scanf("%d", &account_number);
            printf("Enter amount: ");
            scanf("%lf", &amount);
            printf("Enter code (1 for deposit, 0 for withdrawal): ");
            scanf("%d", &code);
            handleTransaction(customers, count, account_number, amount, code);
            break;
        }
        case 3:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice. Try again.\n");
        }
    } while (choice != 3);

    return 0;
}

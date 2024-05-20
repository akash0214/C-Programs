#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidCreditCard(const char *cardNumber);

int main()
{
    char cardNumber[17]; // storing the 16-digit credit card number and null terminator

    printf("Enter a 16-digit credit card number: ");
    scanf("%16s", cardNumber);

    if (strlen(cardNumber) != 16)
    {
        printf("Invalid input length. Please enter exactly 16 digits.\n");
        return 1;
    }

    if (isValidCreditCard(cardNumber))
    {
        printf("The credit card number is valid.\n");
    }
    else
    {
        printf("The credit card number is invalid.\n");
    }

    return 0;
}

int isValidCreditCard(const char *cardNumber)
{
    int sum = 0;
    int len = strlen(cardNumber);

    for (int i = 0; i < len; i++)
    {
        if (!isdigit(cardNumber[i]))
        {
            printf("Invalid character in credit card number. Only digits are allowed.\n");
            return 0;
        }

        int digit = cardNumber[len - 1 - i] - '0';

        if (i % 2 == 1)
        { 
            digit *= 2;
            if (digit > 9)
            {
                digit -= 9;
            }
        }

        sum += digit;
    }

    return sum % 10 == 0;
}

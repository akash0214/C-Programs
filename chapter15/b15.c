#include <stdio.h>
#include <string.h>

int main()
{
    char isbn[11]; // to store the 10-digit ISBN including the null terminator
    int sum = 0;

    printf("Enter a 10-digit ISBN number: ");
    scanf("%10s", isbn);

    // Validating the input length
    if (strlen(isbn) != 10)
    {
        printf("Invalid ISBN length. Please enter exactly 10 digits.\n");
        return 1;
    }

    // Calculating the checksum
    for (int i = 0; i < 10; i++)
    {
        int digit;

        if (isbn[i] == 'X' || isbn[i] == 'x')
        {
            digit = 10; // 'X' is treated as 10 in ISBN
        }
        else if (isbn[i] >= '0' && isbn[i] <= '9')
        {
            digit = isbn[i] - '0'; // Convert character to integer
        }
        else
        {
            printf("Invalid character in ISBN. Only digits and 'X' are allowed.\n");
            return 1;
        }

        sum += (10 - i) * digit;
    }

    // Checking if the sum is a multiple of 11
    if (sum % 11 == 0)
    {
        printf("The ISBN number is correct.\n");
    }
    else
    {
        printf("The ISBN number is incorrect.\n");
    }

    return 0;
}

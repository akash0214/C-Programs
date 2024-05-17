#include <stdio.h>

// Non-recursive function to find the binary equivalent
void binaryEquivalentNonRecursive(int n)
{
    int binary[32];
    int index = 0;

    while (n > 0)
    {
        binary[index] = n % 2;
        n = n / 2;
        index++;
    }

    printf("Binary equivalent (non-recursive): ");
    if (index == 0)
    {
        printf("0"); // Special case for input 0
    }
    else
    {
        for (int i = index - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
    }
    printf("\n");
}

// Recursive function to find the binary equivalent
void binaryEquivalentRecursive(int n)
{
    if (n == 0)
    {
        return;
    }

    binaryEquivalentRecursive(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int num;
    int choice;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    printf("Enter 0 for non-recursive method, 1 for recursive method: ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        binaryEquivalentNonRecursive(num);
    }
    else if (choice == 1)
    {
        printf("Binary equivalent (recursive): ");
        if (num == 0)
        {
            printf("0"); // Special case for input 0
        }
        else
        {
            binaryEquivalentRecursive(num);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid choice. Please enter 0 or 1.\n");
    }

    return 0;
}

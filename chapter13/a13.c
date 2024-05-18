#include <stdio.h>

int main()
{
    int numbers[25];
    int positive_count = 0, negative_count = 0, even_count = 0, odd_count = 0;

    // enter 25 numbers from the user
    printf("Enter 25 numbers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &numbers[i]);
    }

    //count positive, negative, even, and odd
    for (int i = 0; i < 25; i++)
    {
        if (numbers[i] > 0)
        {
            positive_count++;
        }
        else if (numbers[i] < 0)
        {
            negative_count++;
        }

        if (numbers[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    // Output the results
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Even numbers: %d\n", even_count);
    printf("Odd numbers: %d\n", odd_count);

    return 0;
}

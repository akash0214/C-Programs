#include <stdio.h>

void primeFactors(int n)
{
    printf("Prime factors of %d are: ", n);

    // Print the number of 2s that divide n
    while (n % 2 == 0)
    {
        printf("%d ", 2);
        n = n / 2;
    }

    for (int i = 3; i <= n / 2; i = i + 2)
    {
        // While i divides n, print i and divide n
        while (n % i == 0)
        {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is a prime greater than 2, print it
    if (n > 2)
    {
        printf("%d ", n);
    }
}

int main()
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0)
    {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    primeFactors(num);

    return 0;
}

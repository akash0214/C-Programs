#include <stdio.h>

// Recursive function to find the sum of first n natural numbers
int sumOfNaturalNumbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sumOfNaturalNumbers(n - 1);
    }
}

int main()
{
    int n = 25;
    int sum = sumOfNaturalNumbers(n);

    printf("The sum of the first %d natural numbers is: %d\n", n, sum);

    return 0;
}

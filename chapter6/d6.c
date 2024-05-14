#include <stdio.h>
#include <math.h>

double series_sum(double x, int terms)
{
    double sum = (x - 1) / x; // First term
    double term = 1;          // Value of the current term
    double numerator = x - 1; // Numerator of the current term

    for (int n = 2; n <= terms; ++n)
    {
        term *= numerator / (2 * x);
        sum += term;
    }

    return sum;
}

int main()
{
    double x;

    // Input the value of x from the user
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculate the sum of the first seven terms
    double sum = series_sum(x, 7);

    // Print the result
    printf("Sum of the first seven terms of the series: %.6f\n", sum);

    return 0;
}

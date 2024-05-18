#include <stdio.h>
#include "interest.h"

int main()
{
    double principal, rate, time;

    // Input the principal, rate, and time
    printf("Enter Principal amount: ");
    scanf("%lf", &principal);
    printf("Enter Annual Interest Rate (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter Time period (in years): ");
    scanf("%lf", &time);

    // Calculate Simple Interest and Amount using the macros
    double simple_interest = SIMPLE_INTEREST(principal, rate, time);
    double total_amount = AMOUNT(principal, rate, time);

    // Print the results
    printf("Simple Interest: %.2lf\n", simple_interest);
    printf("Total Amount: %.2lf\n", total_amount);

    return 0;
}

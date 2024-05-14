#include <stdio.h>
#include <math.h>

int main() {
    int sets = 10;
    double p, r, q, n, a;

    for (int i = 1; i <= sets; ++i) {
        printf("Set %d\n", i);
        printf("Enter principal (p): ");
        scanf("%lf", &p);

        printf("Enter annual rate (r) in percentage: ");
        scanf("%lf", &r);

        printf("Enter compounding frequency (q): ");
        scanf("%lf", &q);

        printf("Enter number of years (n): ");
        scanf("%lf", &n);

        r /= 100; // Convert percentage to decimal

        // Calculate amount
        a = p * pow(1 + r / q, n * q);

        printf("Amount after compounding: %.2f\n\n", a);
    }

    return 0;
}

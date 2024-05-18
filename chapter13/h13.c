#include <stdio.h>
#include <math.h>

int main() {
    double x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    double y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    int n = sizeof(x) / sizeof(x[0]);

    double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, sum_y2 = 0;

    for (int i = 0; i < n; i++) {
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
        sum_y2 += y[i] * y[i];
    }

    double numerator = (n * sum_xy) - (sum_x * sum_y);
    double denominator = sqrt((n * sum_x2 - sum_x * sum_x) * (n * sum_y2 - sum_y * sum_y));

    double r = numerator / denominator;

    printf("The correlation coefficient r is: %.4f\n", r);

    return 0;
}

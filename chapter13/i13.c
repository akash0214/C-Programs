#include <stdio.h>
#include <math.h>

#define NUM_POINTS 10

int main()
{
    double x[NUM_POINTS], y[NUM_POINTS];
    double total_distance = 0.0;

    // Input coordinates
    printf("Enter the coordinates (x y) of %d points:\n", NUM_POINTS);
    for (int i = 0; i < NUM_POINTS; i++)
    {
        printf("Point %d: ", i + 1);
        scanf("%lf %lf", &x[i], &y[i]);
    }

    // Calculate distances between consecutive points
    for (int i = 0; i < NUM_POINTS - 1; i++)
    {
        double dx = x[i + 1] - x[i];
        double dy = y[i + 1] - y[i];
        total_distance += sqrt(dx * dx + dy * dy);
    }

    // Calculate distance from last point back to the first point
    double dx = x[NUM_POINTS - 1] - x[0];
    double dy = y[NUM_POINTS - 1] - y[0];
    total_distance += sqrt(dx * dx + dy * dy);

    printf("The total distance is: %.2f\n", total_distance);

    return 0;
}

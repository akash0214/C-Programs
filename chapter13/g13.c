#include <stdio.h>
#include <math.h>

#define NUM_PLOTS 6

typedef struct
{
    double a;
    double b;
    double angle;
} Plot;

double calculateArea(double a, double b, double angle)
{
    return 0.5 * a * b * sin(angle);
}

int main()
{
    Plot plots[NUM_PLOTS] = {
        {137.4, 80.9, 0.78},
        {155.2, 92.62, 0.89},
        {149.3, 97.93, 1.35},
        {160.0, 100.25, 0.90},
        {155.6, 68.95, 1.25},
        {149.7, 120.0, 1.75}};

    double areas[NUM_PLOTS];
    double maxArea = 0.0;
    int maxPlotIndex = 0;

    for (int i = 0; i < NUM_PLOTS; i++)
    {
        areas[i] = calculateArea(plots[i].a, plots[i].b, plots[i].angle);
        printf("Area of plot %d: %.2f\n", i + 1, areas[i]);

        if (areas[i] > maxArea)
        {
            maxArea = areas[i];
            maxPlotIndex = i;
        }
    }

    printf("The plot with the largest area is plot %d with an area of %.2f\n", maxPlotIndex + 1, maxArea);

    return 0;
}

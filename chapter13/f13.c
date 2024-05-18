#include <stdio.h>
#include <math.h>

#define SIZE 15

void calculateMeanAndStdDev(int arr[], int size, double *mean, double *stdDev)
{
    double sum = 0.0, varianceSum = 0.0;

    // Calculating mean
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    *mean = sum / size;

    // Calculating variance
    for (int i = 0; i < size; i++)
    {
        varianceSum += pow(arr[i] - *mean, 2);
    }
    *stdDev = sqrt(varianceSum / size);
}

int main()
{
    int arr[SIZE] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    double mean, stdDev;

    calculateMeanAndStdDev(arr, SIZE, &mean, &stdDev);

    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", stdDev);

    return 0;
}

#include <stdio.h>

// Function to circularly shift the values of x, y, z to the right
void circularShiftRight(int *x, int *y, int *z)
{
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}

int main()
{
    int a, b, c;

    // Input values for a, b, c
    printf("Enter values for a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Print original values
    printf("Original values: a = %d, b = %d, c = %d\n", a, b, c);

    // Call the function to circularly shift the values
    circularShiftRight(&a, &b, &c);

    // Print shifted values
    printf("After circular shift: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

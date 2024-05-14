#include <stdio.h>

int main()
{
    int rows = 4;  // Number of rows in the pyramid
    int count = 1; // Initial value for counting

    // Outer loop for rows
    for (int i = 1; i <= rows; ++i)
    {
        // Inner loop for spaces
        for (int j = 1; j <= rows - i; ++j)
        {
            printf("   "); // Print three spaces for each row
        }

        // Inner loop for numbers
        for (int k = 1; k <= i; ++k)
        {
            printf("%3d  ", count++); // Print the current count and increment
        }

        printf("\n"); // Move to the next line after each row
    }

    return 0;
}

#include <stdio.h>

int main()
{
    printf("Pythagorean triplets with side lengths equal to or less than 30:\n");

    for (int a = 1; a <= 30; ++a)
    {
        for (int b = a; b <= 30; ++b)
        {
            int c_squared = a * a + b * b;
            int c = 0;

            // Checking if c is an integer
            for (c = 1; c * c < c_squared; ++c)
            {
                // Do nothing
            }

            // If c is an integer and less than or equal to 30, print the triplet
            if (c * c == c_squared && c <= 30)
            {
                printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }

    return 0;
}

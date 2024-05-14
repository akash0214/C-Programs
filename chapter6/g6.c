#include <stdio.h>
#include <math.h>

int main()
{
    int limit;

    printf("Enter the limit to search for Ramanujan numbers: ");
    scanf("%d", &limit);

    printf("Ramanujan numbers up to %d:\n", limit);

    for (int a = 1; a <= cbrt(limit); ++a)
    {
        int a3 = a * a * a;
        for (int b = a; b <= cbrt(limit - a3); ++b)
        {
            int b3 = b * b * b;
            for (int c = a + 1; c <= cbrt(limit); ++c)
            {
                int c3 = c * c * c;
                int d = c;
                while (d <= cbrt(limit - c3))
                {
                    int d3 = d * d * d;
                    int sum = a3 + b3;
                    if (sum == c3 + d3 && sum <= limit)
                    {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum, a, b, c, d);
                    }
                    ++d;
                }
            }
        }
    }

    return 0;
}

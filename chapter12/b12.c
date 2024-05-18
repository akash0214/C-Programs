#include <stdio.h>

#define MEAN(x, y) (((x) + (y)) / 2.0)
#define ABS(x) ((x) < 0 ? -(x) : (x))
#define TO_LOWER(c) ((c) >= 'A' && (c) <= 'Z' ? ((c) + ('a' - 'A')) : (c))
#define MAX_OF_THREE(a, b, c) ((a) > (b) ? ((a) > (c) ? (a) : (c)) : ((b) > (c) ? (b) : (c)))

int main()
{
    int x = 10, y = 20;
    printf("Mean of %d and %d: %.2f\n", x, y, MEAN(x, y));

    int z = -15;
    printf("Absolute value of %d: %d\n", z, ABS(z));

    char ch = 'G';
    printf("Lowercase of %c: %c\n", ch, TO_LOWER(ch));

    int a = 5, b = 12, c = 9;
    printf("Biggest of %d, %d, and %d: %d\n", a, b, c, MAX_OF_THREE(a, b, c));

    return 0;
}

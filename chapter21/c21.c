#include <stdbool.h>

bool checkbits(unsigned int x, int p, int n)
{
    unsigned int bitmask = (1u << n) - 1u << (p - n + 1);

    return (x & bitmask) == bitmask;
}

int main()
{
    unsigned int x = 0b11110010;
    int p = 4;
    int n = 3;

    if (checkbits(x, p, n))
    {
        printf("All %d bits starting from position %d are turned on.\n", n, p);
    }
    else
    {
        printf("Not all %d bits starting from position %d are turned on.\n", n, p);
    }

    return 0;
}

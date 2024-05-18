#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main()
{
    int a = 5;
    int b = 10;
    printf("SQUARE(a) = %d\n", SQUARE(a));
    printf("MAX(a, b) = %d\n", MAX(a, b));
    return 0;
}
// gcc -E a12.c -o a12.i    we will run this to get the preprocessed code to a file

#include <stdio.h>

int main()
{
    int threed[3][2][3] = {
        {{1, 2, 3},
         {4, 5, 6}},
        {{7, 8, 9},
         {10, 11, 12}},
        {{13, 14, 15},
         {16, 17, 18}}};

    // Referring to the first element
    int firstElement = threed[0][0][0];
    // Referring to the last element
    int lastElement = threed[2][1][2];

    printf("First element: %d\n", firstElement);
    printf("Last element: %d\n", lastElement);

    return 0;
}

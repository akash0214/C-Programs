#include <stdio.h>

int main()
{
    int arr[25];
    int *ptr;
    int smallest;

    // enter 25 integers
    printf("Enter 25 integers:\n");
    for (int i = 0; i < 25; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;
    smallest = *ptr;

    for (int i = 1; i < 25; i++)
    {
        if (*(ptr + i) < smallest)
        {
            smallest = *(ptr + i);
        }
    }

    // Print the smallest number
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}

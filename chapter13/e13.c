#include <stdio.h>

void modify(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 3;
    }
}
int main()
{
    int arr[10];

    // enter the 10 elements
    printf("Enter the elements of array: ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    modify(arr, 10);
    // printing the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        // moving elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[25] = {12, 11, 13, 5, 6, 7, 19, 18, 21, 2, 3, 4, 10, 9, 8, 20, 14, 15, 16, 17, 1, 25, 24, 23, 22};
    int n = 25;

    printf("Original array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, n);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

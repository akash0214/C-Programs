#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;

    // enter the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // check if the size is valid
    if (n <= 0)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    // enter the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // checking the condition arr[i] = arr[n - i - 1]
    bool conditionMet = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            conditionMet = false;
            break;
        }
    }

    // showing the result
    if (conditionMet)
    {
        printf("The array satisfies the condition.\n");
    }
    else
    {
        printf("The array does not satisfy the condition.\n");
    }

    return 0;
}

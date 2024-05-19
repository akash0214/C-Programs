#include <stdio.h>

#define ROWS 4
#define COLS 5

void shiftLeftByTwo(int arr[], int size)
{
    int temp1 = arr[0];
    int temp2 = arr[1];

    for (int i = 0; i < size - 2; i++)
    {
        arr[i] = arr[i + 2];
    }

    arr[size - 2] = temp1;
    arr[size - 1] = temp2;
}

void printMatrix(int matrix[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matrix[ROWS][COLS] = {
        {15, 30, 28, 19, 61},
        {3, 6, 9, 12, 15},
        {5, 10, 15, 20, 25},
        {2, 4, 6, 8, 10}};

    printf("Original Matrix:\n");
    printMatrix(matrix);

    for (int i = 0; i < ROWS; i++)
    {
        shiftLeftByTwo(matrix[i], COLS);
    }

    printf("\nMatrix after shifting each row left by two positions:\n");
    printMatrix(matrix);

    return 0;
}

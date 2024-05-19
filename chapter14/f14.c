#include <stdio.h>

#define SIZE 6

void printMatrix(int matrix[SIZE][SIZE]);

int main()
{
    int matrix1[SIZE][SIZE] = {
        {1, 2, 3, 4, 5, 6},
        {6, 5, 4, 3, 2, 1},
        {1, 1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2, 2},
        {3, 3, 3, 3, 3, 3},
        {4, 4, 4, 4, 4, 4}};

    int matrix2[SIZE][SIZE] = {
        {6, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 6},
        {6, 6, 6, 6, 6, 6},
        {5, 5, 5, 5, 5, 5},
        {4, 4, 4, 4, 4, 4},
        {3, 3, 3, 3, 3, 3}};

    int result[SIZE][SIZE];

    // adding the matrices
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Resultant Matrix:\n");
    printMatrix(result);

    return 0;
}

void printMatrix(int matrix[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

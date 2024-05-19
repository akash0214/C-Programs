#include <stdio.h>
#include <stdbool.h>

#define SIZE 3 // taking size as 3 for now

bool isSymmetric(int matrix[SIZE][SIZE], int size);

int main()
{
    int matrix[SIZE][SIZE] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}};

    if (isSymmetric(matrix, SIZE))
    {
        printf("The matrix is symmetric.\n");
    }
    else
    {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

bool isSymmetric(int matrix[SIZE][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (matrix[i][j] != matrix[j][i])
            {
                return false;
            }
        }
    }
    return true;
}

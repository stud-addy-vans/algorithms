#include <stdio.h>

#define MAX_SIZE 5

void multiply(int matrix_a[][MAX_SIZE], int matrix_b[][MAX_SIZE],
              int matrix_c[][MAX_SIZE], int row_a, int col_a, int row_b,
              int col_b)
{
    if (col_a != row_b)
    {
        printf("Invalid matrices\n");
        return;
    }

    for (int i = 0; i < row_a; i++)
    {
        for (int j = 0; j < col_b; j++)
        {
            matrix_c[i][j] = 0;
            for (int k = 0; k < col_a; k++)
            {
                matrix_c[i][j] += matrix_a[i][k] * matrix_b[k][j];
            }
        }
    }
}

void display(int matrix[][MAX_SIZE], int row, int col)
{
    printf("Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        printf("| ");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("|\n");
    }
}

int main()
{
    int matrix_a[MAX_SIZE][MAX_SIZE] = {{1, 1}, {2, 2}};
    int matrix_b[MAX_SIZE][MAX_SIZE] = {{1, 1}, {2, 2}};
    int matrix_c[MAX_SIZE][MAX_SIZE];

    int row_a = 2;
    int col_a = 2;

    int row_b = 2;
    int col_b = 2;

    multiply(matrix_a, matrix_b, matrix_c, row_a, col_a, row_b, col_b);

    display(matrix_c, row_a, col_b);

    return 0;
}
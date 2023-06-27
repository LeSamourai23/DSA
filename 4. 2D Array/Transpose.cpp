#include <iostream>
#include <stdio.h>
#include <conio.h>

#define N 4

void Transpose(int arr[N][N])
{
    int newArr[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            newArr[i][j] = arr[j][i];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", newArr[i][j]);
        }

        printf("\n");
    }
}

int main()
{
    system("cls");

    int A[N][N] = {{1, 1, 1, 1},
                   {2, 2, 2, 2},
                   {3, 3, 3, 3},
                   {4, 4, 4, 4}};

    Transpose(A);

    return 0;
}
#include <iostream>
#include <stdio.h>
#include <conio.h>

#define m 4
#define n 4

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void ReverseMatrix(int arr[m][n])
{
    int i, j;

    for (i = 0; i < m; i++)
    {
        int start = 0;
        int end = n - 1;

        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);

            start++;
            end--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}

int main()
{
    system("cls");

    int arr[m][n] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};

    ReverseMatrix(arr);

    return 0;
}
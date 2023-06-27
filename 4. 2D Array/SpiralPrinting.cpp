#include <iostream>
#include <stdio.h>
#include <conio.h>

#define R 4
#define C 4

void SpiralPrint(int arr[R][C], int m, int n)
{
    int i, k = 0, l = 0;

    /* k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
        {
            std::cout << arr[k][i] << " ";
        }
        k++;

        for (i = k; i < k; i++)
        {
            std::cout << arr[i][n - 1] << " ";
        }
        n--;

        if (k < m)
        {
            for (i = n - 1; i >= l; i--)
            {
                std::cout << arr[m - 1][i] << " ";
            }
            m--;
        }

        if (l < n)
        {
            for (i = m - 1; i >= k; i--)
            {
                std::cout << arr[i][l] << " ";
            }
            l++;
        }
    }
}

int main()
{
    system("cls");

    int arr[R][C] = {{1, 2, 3, 4},
                   {5, 6, 7, 8},
                   {9, 10, 11, 12},
                   {13, 14, 15, 16}};
    
    SpiralPrint(arr, R, C);

    return 0;
}
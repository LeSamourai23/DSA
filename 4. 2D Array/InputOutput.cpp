#include <iostream>
#include <stdio.h>
#include <conio.h>

int main()
{
    system("cls");

    int m, n;
    int i, j;
    std::cout << "Enter values for m and n: " << std::endl;
    std::cin >> m >> n;

    int arr[m][n];

    std::cout << "2D Array Input:" << std::endl;

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cout << "\ns[" << i << "][" << j << "]=  ";
            std::cin >> arr[i][j];
        }
    }

    std::cout << "\nThe 2-D Array is:\n";

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            std::cout << "\t" << arr[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
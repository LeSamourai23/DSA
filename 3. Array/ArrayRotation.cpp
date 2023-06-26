#include <iostream>
#include <stdio.h>
#include <conio.h>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void RotateArray(int arr[], int n, int r)
{
    int temp[n];

    int k = 0;

    for (int i = r; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < r; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    system("cls");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    RotateArray(arr, n, 3);

    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
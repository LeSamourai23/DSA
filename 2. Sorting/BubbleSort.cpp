#include <iostream>
#include <stdio.h>
#include <conio.h>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void BubbleSort(int arr[], int n)
{
    bool swapped;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[j], arr[i]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

int main()
{
    system("cls");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    BubbleSort(arr, n);

    for (int i = 0; i <= n-1; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
#include <iostream>
#include <stdio.h>
#include <conio.h>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];

    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);

    return (i + 1);
}

void QuickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}

int main()
{
    system("cls");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, n-1);

    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
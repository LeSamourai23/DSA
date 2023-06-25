#include <iostream>
#include <stdio.h>
#include <conio.h>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

int SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {

        int min_flag=i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_flag])
            {
                min_flag=j;
            }
        }

        if(min_flag!=i)
        {
            swap(arr[min_flag], arr[i]);
        }
    }
}

int main()
{
    system("cls");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    SelectionSort(arr, n);

    for (int i = 0; i <= n-1; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
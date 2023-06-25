#include <iostream>
#include <stdio.h>
#include <conio.h>

int InsertionSort(int arr[], int n)
{
    int flag;

    for (int i = 1; i < n; i++)
    {
        flag = arr[i];

        int j = i-1;

        while(j>=0 && arr[j]>flag)
        {
            arr[j+1]= arr[j];
            j--;
        }

        arr[j+1]= flag;
    }
}

int main()
{
    system("cls");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);

    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
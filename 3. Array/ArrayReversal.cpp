#include <iostream>
#include <stdio.h>
#include <conio.h>

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

void ReverseArray(int arr[], int n)
{
    int l=0;
    int r= n-1;

    while(l<r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

int main()
{
    system("cls");

    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    ReverseArray(arr, n);

    for (int i = 0; i <= n - 1; i++)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}
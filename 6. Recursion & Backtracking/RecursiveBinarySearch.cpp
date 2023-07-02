#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <algorithm>

int BinarySearch(int arr[], int l, int r, int key)
{
    if(l==r)
    {
        std::cout<<"Empty Array";
        return 0;
    }

    int m= l+(r-l)/2;

    if(arr[m]==key)
    {
        std::cout<<"Key found at index "<<m<<" after sorting";
        return 0;
    }

    if(arr[m]<key)
    {
        BinarySearch(arr, m, r, key);
    }
    else
    {
        BinarySearch(arr, l, m, key);
    }
}

int main()
{
    system("cls");

    int arr[]= {7, 4, 6, 9, 13, 24, 11, 1};

    std::sort(std::begin(arr), std::end(arr));

    int n = sizeof(arr) / sizeof(arr[0]);

    BinarySearch(arr, 0, n-1, 13);

    return 0;
}
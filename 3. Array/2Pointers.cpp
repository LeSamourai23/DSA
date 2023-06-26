// This is the program for finding if the given 2sum exists in an array using 2 Pointer technique
#include <iostream>
#include <stdio.h>
#include <conio.h>

int TwoSum(int arr[], int n, int x)
{
    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            return 1;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return 0;
}

int main()
{
    system("cls");

    int arr[] = {2, 3, 5, 8, 9, 10, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = TwoSum(arr, n, 11);

    if (res == 1)
    {
        std::cout << "Sum exists";
    }
    else
    {
        std::cout << "Sum does not exist";
    }

    return 0;
}
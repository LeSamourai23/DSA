#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <climits>

int MaxContSum(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currentSum = 0;

    int start = 0;
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];

        if (currentSum > maxSum)
        {
            maxSum = currentSum;
            end = i;
        }

        if (currentSum < 0)
        {
            currentSum = 0;
            start = i + 1;
        }
    }

    for (int i = start; i <= end; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout<<std::endl;

    return maxSum;
}

int main()
{
    system("cls");

    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3 };
    int n = sizeof(arr) / sizeof(arr[0]);

    int res = MaxContSum(arr, n);

    std::cout<<res;

    return 0;
}
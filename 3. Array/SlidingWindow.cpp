//This is the implementation of maximum sum in an array using the sliding window technique
#include <iostream>
#include <stdio.h>
#include <conio.h>

int max(int &a, int &b)
{
    if(a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int maxSum(int arr[], int n, int k)
{
    if(n<k)
    {
        std::cout<<"Window size invalid"<<std::endl;
        return -1;
    }

    int maxSum=0;

    for(int i=0; i<k; i++)
    {
        maxSum+=arr[i];
    }

    int windowSum= maxSum;

    for(int i=k; i<n; i++)
    {
        windowSum += arr[i]-arr[i-k];
        maxSum= max(maxSum, windowSum);
    }

    return maxSum;
}

int main()
{
    system("cls");

    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout<<maxSum(arr, n, 4);

    return 0;
}
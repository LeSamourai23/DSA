#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int BinarySearch(int a, int arr[], int l, int r)
{
    int m = l + (r - l) / 2;

    while (l <= r)
    {
        if (arr[m] == a)
        {
            return m;
        }
        else if (arr[m] < a)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    return -1;
}

int main()
{
    system("cls");

    int faveNumbers[] = {7, 33, 134, 990, 2900};

    int size = sizeof(faveNumbers)/sizeof(faveNumbers[0]);

    int a = 33;
    
    int result = BinarySearch(a, faveNumbers, 0, size-1);

    std::cout<<result;

    if(result== -1)
    {
        std::cout<<"Number not found";
    }
    else
    {
        std::cout<<"Number found at index: "<<result;
    }


    return 0;
}
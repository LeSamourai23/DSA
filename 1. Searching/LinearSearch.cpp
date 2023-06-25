#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int LinearSearch(int a, int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        if (a == arr[i])
        {
            return i;
        }
    }
}

int main()
{

    system("cls");

    int faveNumbers[] = {7, 33, 13, 9, 29};

    int size = sizeof(faveNumbers)/sizeof(faveNumbers[0]);

    int a = 33;

    int result = LinearSearch(a, faveNumbers, size);

    if(result== 5)
    {
        std::cout<<"Number not found";
    }
    else
    {
        std::cout<<"Number found at index: "<<result;
    }

    return 0;
}
#include<iostream>
#include<conio.h>

void swap(int a, int b)
{
    a = a^b;
    b = a^b;
    a = a^b;

    std::cout<<"a = "<<a<<" and "<<"b = "<<b;
}

int main()
{
    system("cls");

    int a = 5;
    int b = 4;

    swap(a, b);

    return 0;
}
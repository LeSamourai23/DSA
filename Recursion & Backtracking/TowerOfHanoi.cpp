#include <iostream>
#include <conio.h>
#include <stdio.h>

void ToH(int n, char from, char to, char mid)
{
    if(n==0)
    {
        return;
    }

    ToH(n-1, from, mid, to);
    std::cout<<"Disc "<<n<<" from rod "<<from<<" to rod "<<to<<std::endl;
    ToH(n-1, mid, to, from);
}

int main()
{
    system("cls");

    int n=3;

    ToH(n, 'A', 'C', 'B');

    return 0;
}

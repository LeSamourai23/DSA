#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

int Palindrome(std::string S)
{
    int n = S.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (S[i] != S[n - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    std::string str = "helpleh";

    int res = Palindrome(str);

    if (res == 1)
    {
        std::cout << "The string is a palindrome";
    }
    else
    {
        std::cout<< "The string is not a palindrome";
    }

    return 0;
}
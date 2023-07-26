#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <cctype>

int Palindrome(std::string S)
{
    int n = S.length();

    std::string modStr;

    for (char c : S)
    {
        if (std::isalnum(c))
        {
            modStr += std::tolower(c);
        }
    }

    n = modStr.length(); 

    for (int i = 0; i < n / 2; i++)
    {
        if (modStr[i] != modStr[n - i - 1])
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    std::string str = "0P";

    int res = Palindrome(str);

    if (res == 1)
    {
        std::cout << "The string is a palindrome";
    }
    else
    {
        std::cout << "The string is not a palindrome";
    }

    return 0;
}
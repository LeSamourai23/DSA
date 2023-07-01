// Can be done with bettwe time complexity using dynamic programming.
// This Program has a time complexity of O[N^3]
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

void printString(std::string str, int start, int end)
{
    for (int i = start; i < end; i++)
    {
        std::cout << str[i];
    }
}

int longestPalindrome(std::string S)
{
    int start = 0;
    int maxLength = 1;

    for (int i = 0  ; i < S.length(); i++)
    {
        for (int j = i; j < S.length(); j++)
        {
            int flag = 1;

            for (int k = 0; k < (j - i + 1) / 2; k++)
            {
                if (S[i + k] != S[j - k])
                {
                    flag = 0;
                }
            }

            if (flag && (j - i + 1) > maxLength)
            {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }

    printString(S, start, start + maxLength);

    return maxLength;
}

int main()
{
    std::string str = "forgeeksskeegfor";
    std::cout << "\nLength is: " << longestPalindrome(str);
    return 0;
}
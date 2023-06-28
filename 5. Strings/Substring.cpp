#include <iostream>
#include <string.h>

int main()
{
    system("cls");

    std::string s1 = "Hello";

    std::string s2 = s1.substr(2, 3); //(index, number of letters required after the index)

    std::cout << s2;

    return 0;
}
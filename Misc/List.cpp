#include <iostream>
#include <string>
#include <list>

using namespace std;

int main()
{
    list<string> tennisGear { "Racquet", "Tennis Balls", "All Court Shoes", "Strings", "Apparel"};
    list<string> cricketGear { "Bat", "Cricket Ball", "Stumps", "Shoes", "Helmet", "Pads", "Apparel"};
    list<string> footballGear {"Football", "Shoes"};

    for(auto i: tennisGear)
    {
        cout <<i<<", ";
    }
    
    return 0;
}
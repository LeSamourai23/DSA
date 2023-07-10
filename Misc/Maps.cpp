#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    //maps order elements by key (alphabetically or numerically) in ascending order
    //to have them unordered, use "unorderered_map" and include it as well
    map<string, string> myDictionary;
    
    myDictionary.insert(pair<string, string>("apple", "der Apfel"));
    myDictionary.insert(pair<string, string>("banana", "die Banane"));
    myDictionary.insert(pair<string, string>("orange", "die Orange, die Apfelsine"));
    myDictionary.insert(pair<string, string>("strawberry", "die Erdbeere"));

    //myDictionary["strawberry"]= "change the value"

    for(auto pair: myDictionary)
    {
        cout<<pair.first<<" - "<<pair.second<<endl;
    }

    cout<<myDictionary.size()<<endl;
    
    return 0;
}
// Map : It is a data structure where data are stored in a key and value format
#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Syntax ---> map <datatype, datatype> a;
    map<int, string> a;

    // Insertion way - 1
    a[1] = "The";
    a[2] = "End";
    a[3] = "Of";
    a[4] = "C++";

    // Printing the map
    for (const auto &pair : a)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // // Insertion way - 2
    a.insert(make_pair(10, "Abhishek"));
    a.insert(make_pair(11, "Nayak"));

    // Printing the map
    for (const auto &pair : a)
    {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Cout Method shows true or false
    cout << "Key Number 11 is there or not : " << a.count(11) << endl;

    // Clear Method in Map
    // a.clear();

    // At method in Map
    cout << "At Index 1 the element is : " << a.at(1) << endl;

    // Get the size of the Map
    cout << "The size of the map is : " << a.size() << endl;
}
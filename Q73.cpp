#include <iostream>
#include <set>
using namespace std;

int main()
{

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);

    // Print the set
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Erase the elements inside the set
    s.erase(s.begin(), s.end());

    // Print the set
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    s.insert(51);
    s.insert(25);
    s.insert(25);
    s.insert(51);
    s.insert(62);
    s.insert(62);

    // Shows the element is present in the set or not
    cout << "51 is present in the set : " << s.count(51) << endl;

    // Get the size of the set
    cout << "The size of the set is : " << s.size() << endl;

    // Print the set
    for (int i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    // Clear the set
    s.clear();
}
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    // Push the data to the list backside
    l.push_back(23); //[23]
    l.push_back(2);  // [23, 2]
    l.push_back(3);  // [23, 2, 3]

    // Push the data to the list frontside
    l.push_front(565); // [565, 23, 2, 3]
    l.push_front(65);  // [65, 565, 23, 2, 3]
    l.push_front(15);  // [15, 65, 565, 23, 2, 3]

    // Printing the List
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // Earse or Remove the elements in the List
    // l.clear();

    // Remove the element from the backside of the list
    l.pop_back();

    // Printing the List
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // Remove the element from the frontside of the list
    l.pop_front();

    // Printing the List
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    // Get the size of the list
    cout << "The size of the list is : " << l.size() << endl;

    // Initialise the list with some value at starting
    list<int> n(5, 100);

    // Printing the List
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    // Copy one list elements to anather list
    list<int> test(n);

    // Printing the List
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    // Check front of the list
    cout << "The front element of the list is : " << l.front() << endl;

    // Check back of the list
    cout << "The back element of the list is : " << l.back() << endl;

    // Check List is empty or not
    cout << "List l is  empty or not : " << l.empty() << endl;
}

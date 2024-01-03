#include <iostream>
using namespace std;

// IF ELSE CONDITION -> Compares every time
// Switch cases have a number and based on that number the respective case will be executed

int main()
{
    int num;
    cout << "Please Enter a Choice: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "First Case" << endl;
        break;

    case 2:
        cout << "Second Case" << endl;
        break;

    case 3:
        cout << "Third Case" << endl;
        break;

    default:
        cout << "Default Case" << endl;
        break;
    }
}
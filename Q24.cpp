#include <iostream>
using namespace std;

int main()
{
    int num = 2;
    char ch = 'A';

    switch (num)
    {

    case 1:
        switch (ch)
        {
        case 'A':
            cout << "A is User Input";
            break;

        case 'B':
            cout << "B is User Input";
            break;

        case 'C':
            cout << "C is User Input";
            break;
        default:
            cout << "Unknown Character entered by user";
            break;
        }
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
#include <iostream>
using namespace std;

// WAP to print a char is lowercase or uppercase , char input should be taken by the user
int main()
{
    char ch;
    cout << "Please Enter a Character : ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "Lowercase Letter" << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "Uppercase Letter" << endl;
    }
}
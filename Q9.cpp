// Write a program to print fibonacci series from 1 to n. and N should be given by the user

#include <iostream>
using namespace std;

int main()
{
    int num, a = 0, b = 1, c, i = 1;
    cout << "Please Enter Last Range : ";
    cin >> num;

    while (i <= num)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}


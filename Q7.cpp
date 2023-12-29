#include <iostream>
using namespace std;

// FOR LOOP
int main()
{

    int num, fact = 1;
    cout << "Please Enter a Number : ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of Number " << num << " is " << fact << endl;
}

// 1 * 2 * 3 * 4 * 5
// fact = 1 * 1
// fact = 1 * 2
// fact = 2 * 3
// fact = 6 * 4
// fact = 24* 5
#include <iostream> //Preprocessor
using namespace std;

int main()
{

    // int, float, char , double, bool,     void, wchar_t,   --> DataTypes
    // 4     4      1       8     1          0      2         --> size in byte [1 byte 8 bits]
    // 100   4.4    c  67.444  true/false nothing   c         --> Example

    int num = 2345;
    double num2 = 23.53098765;

    int intSize = sizeof(num);
    cout << "The Size of Int is " << intSize << endl;

    int doubleSize = sizeof(num2);
    cout << "The Size of Double is " << doubleSize << endl;

    // IF ELSE CONDITION
    int a = 18;
    if (a >= 18)
    {
        cout << "You are allowed to drive car";
    }
    else
    {
        cout << "You cant' drive car";
    }

    // NESTED IF ELSE CONDITION
    char ch = 'a';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        cout << endl
             << "Vowel";
    }
    else if (ch == '@' || ch == '*' || ch == '$')
    {
        cout << endl
             << "Special Character";
    }
    else
    {
        cout << endl
             << "Consonant";
    }
}
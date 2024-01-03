#include <iostream>
using namespace std;

// void, bool, int, char, double, float [return types of functions]
// Functions are used to solve the repeatation works || declare once use N number of times
// NOTE : Function name can be different than the way it is behaving in actual reality

void printNums()
{
    cout << "1";
    cout << "2";
    cout << "3";
    cout << "4";
    cout << endl;
}

int addition(int a, int b)
{
    cout << a + b << endl;
    return a + b;
}

bool checkEvenOddHandler(int num)
{
    if (num % 2 == 0)
        return true;
    else
        return false;
}

int main()
{
    printNums();
    int val = addition(8, 8);
    cout << checkEvenOddHandler(val);
}


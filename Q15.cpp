#include <iostream>
using namespace std;

int main()
{
    int age, speed;
    double height;

    cout << "Enter your Age: ";
    cin >> age;
    cout << "Enter your Height: ";
    cin >> height;
    cout << "Enter your Speed: ";
    cin >> speed;

    if (age >= 20 || height >= 5.5)
    {
        cout << "Your are allowed to join Army";
    }
    else if (age < 20 && height < 5.5 && speed >= 500)
    {
        cout << "Not fully prepared to join Army";
    }
    else if (age < 20 || height < 5.5 || speed >= 500)
    {
        cout << "I am printed";
    }
    else if (age < 20 || height < 5.5 && speed >= 500)
    {
        cout << "I am executed";
    }
}

// age = 17 height = 5.6
// age = 17 height = 5.4

// true || true = true
// true || false = true
// false || true = true
// false || false = false

// true && true = true
// false && false = false
// true && false = false
// false && true = false

// In and operation if all the conditions are true then it is true else false
// In or operation if any one of the condition is true then it is true

// HOMEWORK Questions
// 1. Print pattern
// 3 2 1
// 3 2 1
// 3 2 1

// 2. Print pattern
// *
// * *
// * * *
// * * * *

// 3. Print pattern
// 1
// 2 2
// 3 3 3
// 4 4 4 4

// 4. Print pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

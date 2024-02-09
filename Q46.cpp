// Constructors
// Constructors are special kind of function which are called every time when a object of that class is initialised.
// Constructors name should be always equals to the class name
// There are three types of constructors
// Default constructors
// Paremetrized Constructors
// Copy constructors

// Code
#include <iostream>
using namespace std;

class house
{

private:
    int a;

protected:
    int test;

public:
    string roomType;
    int floors;
    int members;
    bool swimmingpool;

    // house()
    // {
    //     cout << "Constructor Called" << endl;
    //     roomType = "Kitchen";
    //     floors = 2;
    //     members = 5;
    //     swimmingpool = false;
    // }

    house(); // Initialise constructor function

    void display()
    {
        cout << "House Room Types " << roomType << endl;
        cout << "House Floors " << floors << endl;
        cout << "No. of Members " << members << endl;
        if (swimmingpool)
        {
            cout << "Swimming pool available" << endl;
        }
        else
        {
            cout << "Swimming pool not available" << endl;
        }
        cout << "Value of a is : " << a << endl;
        cout << "Value of test is : " << test << endl;
    }
};

// Declaration of Constructor Outside the class
house::house()
{
    cout << "Constructor Called" << endl;
    roomType = "Kitchen";
    floors = 2;
    members = 5;
    swimmingpool = false;
    a = 622;
    test = 100;
}

int main()
{
    house h;
    h.display();
}
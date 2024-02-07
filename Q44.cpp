#include <iostream>
using namespace std;

class person
{
    // Inner Datatypes
    char name[20];
    int rollNumber;
    int age;
    char address[30];

    // Inner Functions : Treated as a Private Functions
    void test()
    {
        cout << "Testing Inner Functions" << endl;
    }

    // Public Classes are allowed to accessible by the objects
public:
    void getDetails()
    {
        cout << "Abhishek";
    }
};

int main()
{
    person p1;       // Object Creation
    p1.getDetails(); // Using Inner Functions
}
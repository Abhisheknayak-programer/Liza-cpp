#include <iostream>
using namespace std;

class Person
{
public:
    int age;

    void updateAge(int a)
    {
        age = a;
    }

    void printData()
    {
        cout << "Age of Person is : " << age << endl;
    }
};

int main()
{
    Person Liza;
    Liza.updateAge(19);
    Liza.printData();

    Person LizaCopy(Liza);
    LizaCopy.printData();
}
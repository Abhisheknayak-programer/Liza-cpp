// Inheritance is the concept of OOPs in which new classes are derived from existing classes in order to reuse the properties of classes defined earlier.

// Syntax of Inheritance
// class Shape
// {
// name
// }

// class Triangle : Shape
// {
// name, typeofTri
// }

#include <iostream>
using namespace std;

class Shape
{

protected:
    int data = 100;

public:
    string name = "shape";

    void updateName(string n)
    {
        name = n;
    }

    void printShapeName()
    {
        cout << "Name of the Shape is : " << name << endl;
    }
};

class Square : Shape
{
public:
    void print()
    {
        updateName("Square");
        printShapeName();
        cout << "Data is " << data;
    }
};

int main()
{
    Shape test;
    test.updateName("test");
    test.printShapeName();

    Square s;
    s.print();
}
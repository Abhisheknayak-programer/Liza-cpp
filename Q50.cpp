// Access Modifiers are used to implement aspects of OOPS known as Data Hiding
// There are 3 types of access modifiers
// 1. Public
// 2. Protected
// 3. Private

#include <iostream>
using namespace std;

class circle
{
private:
    int data = 20;

protected:
    int test = 50;

public:
    double radius;
    double area;

    void computeArea(double r)
    {
        radius = r;
        area = 3.14 * r * r;
    }

    void printPrivateVarData()
    {
        cout << "Data is : " << data << endl;
    }

    void printProtectedVarData()
    {
        cout << "Data is : " << test << endl;
    }
};

int main()
{
    circle c1;
    c1.computeArea(10.2);
    cout << "Radius is : " << c1.radius << endl;
    cout << "Area of the circle is : " << c1.area << endl;
    c1.printPrivateVarData();
    c1.printProtectedVarData();
}
#include <iostream>
using namespace std;

class ABC;

class XYZ
{
    int x;

public:
    void updateData(int a)
    {
        x = a;
    }
    friend void max(XYZ, ABC);
};

class ABC
{
    int y;

public:
    void updateData(int a)
    {
        y = a;
    }
    friend void max(XYZ, ABC);
};

void max(XYZ t1, ABC t2)
{
    if (t1.x > t2.y)
    {
        cout << "The value of XYZ : " << t1.x;
    }
    else
    {
        cout << "The value of ABC : " << t2.y;
    }
}

int main()
{
    ABC abc;
    XYZ xyz;
    abc.updateData(3535);
    xyz.updateData(2024);

    max(xyz, abc);
}
#include <iostream>
using namespace std;

class base;

class anatherClass
{
public:
    void memberFunc(base &obj);
};

class base
{
private:
    int pvtVar;

protected:
    int protectedVar;

public:
    base()
    {
        pvtVar = 20;
        protectedVar = 40;
    }

    friend void anatherClass::memberFunc(base &);
};

void anatherClass::memberFunc(base &obj)
{
    cout << "Private Var : " << obj.pvtVar << endl;
    cout << "Protected Var : " << obj.protectedVar << endl;
}

int main()
{
    base obj1;
    anatherClass obj2;
    obj2.memberFunc(obj1);
}
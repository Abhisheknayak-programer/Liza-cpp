// Friend Function
// A Friend can be granted special access to private and protected members of the class.

// Syntax
// Friend return_type function_name(arguments); ---> For the Global Functions

// Friend return_type className::function_name(arguments); ---> For Member Function of anather class

#include <iostream>
using namespace std;

class base
{
private:
    int pvtVar;

protected:
    int protectedVar;

public:
    base()
    {
        pvtVar = 10;
        protectedVar = 100;
    }

    friend void friendFunc(base &obj);
};

void friendFunc(base &obj)
{
    cout << "Private Variable : " << obj.pvtVar << endl;
    cout << "Protected Variable : " << obj.protectedVar;
}

int main()
{
    base obj1;
    friendFunc(obj1);
}
// Friends
// Friend class can access private and protected members of other classes in which it is declared as a friend.
// It is sometimes useful to allow a particular class to access private and protected members of other classes

#include <iostream>
using namespace std;

class animal
{
private:
    int legs;

protected:
    string name;

public:
    animal()
    {
        legs = 4;
        name = "dog";
    }

    friend class birds;
};

class birds
{
public:
    void display(animal &a)
    {
        cout << "The value of private variable is : " << a.legs << endl;
        cout << "The value of protected variable is : " << a.name << endl;
    }
};

int main()
{
    animal a;
    birds b;
    b.display(a);
}
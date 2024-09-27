// Copy Constructor
#include <iostream>
using namespace std;
class number
{
    int a = 0;

public:
    number() {}
    number(int num)
    {
        a = num;
    }
    // when no copy constructor is found, compiler supplies its own copy constructor.
    number(number &obj)
    {
        cout << "copy  constuctor called" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number for this object is " << a << endl;
    }
};
int main()
{
    number x, y, z(4), z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // copy constructor invoked
    z1.display();

    z2 = z; // copy constructor not called

    number z3 = z; // copy constructor invoked
    return 0;
}
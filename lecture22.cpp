// multiple inheritance deep dive
#include <iostream>
using namespace std;
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};
class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "the value of base 1 is " << base1int << endl;
        cout << "the value of base 2 is " << base2int << endl;
    }
};

/*
the inherited derived class will look something like this :
Data members:
base1int --> protected
base2int --> protected
member functions :
set_base1int() --> public
set_base2int() --> public
*/

int main()
{
    Derived Raghav;
    Raghav.set_base1int(2);
    Raghav.set_base2int(4);
    Raghav.show();
    return 0;
}
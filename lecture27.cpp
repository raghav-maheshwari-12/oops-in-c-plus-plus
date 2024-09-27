// Constructors in Derived Classes

#include <iostream>
using namespace std;

/*
case 1:
class A:public B,public C{
  // order of execution of constructor -> first B() then C() and A()
};

case 2:
class A: public B, virtual public C{
// order of execution of constructor ->C() then B() and A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "base 1 class constructor called" << endl;
    }
    void printDataBase1(void)
    {
        cout << "the value of data is" << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "base 2 class constructor called" << endl;
    }
    void printDataBase2(void)
    {
        cout << "the value of data is" << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void printDataDerived(void)
    {
        cout << "the value of derived 1 is " << derived1 << endl;
        cout << "the value of derived 2 is " << derived2 << endl;
    }
};

int main()
{
    Derived raghav(1, 2, 3, 4);
    raghav.printDataBase1();

    return 0;
}
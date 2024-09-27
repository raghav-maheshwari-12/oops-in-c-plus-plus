// Virtual functions

#include <iostream>
using namespace std;
class baseClass
{
public:
    int var1 = 1;
    virtual void display()
    {
        cout << " 1 displaying base class variable var1 " << var1 << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var2 = 2;
    void display()
    {
        cout << " 2 displaying base class variable var1 " << var1 << endl;
        cout << " 2 displaying derived class variable var2 " << var2 << endl;
    }
};

int main()
{
    baseClass *base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
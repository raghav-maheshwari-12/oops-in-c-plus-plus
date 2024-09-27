// Pointers to derived classes

#include <iostream>
using namespace std;

class baseClass
{
public:
    int var1;
    void display()
    {
        cout << "displaying base class variable var1 " << var1 << endl;
    }
};

class derivedClass : public baseClass
{
public:
    int var2;
    void display()
    {
        cout << "displaying base class variable var1 " << var1 << endl;
        cout << "displaying derived class variable var2 " << var2 << endl;
    }
};

int main()
{
    baseClass *base_class_pointer;
    baseClass obj_base;
    derivedClass obj_derived;
    base_class_pointer = &obj_derived;
    // pointing base class pointer to derived class
    base_class_pointer->var1 = 4;
    base_class_pointer->display();

    // base_class_pointer->var2=8; // will throw an error

    derivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var1 = 8;
    derived_class_pointer->var2 = 6;
    derived_class_pointer->display();
    return 0;
}
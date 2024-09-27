// Protected Access Modifier
#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member :
                        Public Derivation   Private Derivation  Protected Derivation
1. Private members      not inherited       not inherited       not inherited
2.Protected members     protected           private             protected
3.Public members        public              private             protected
*/
class Derived : Base
{
};
int main()
{
    Base b;
    Derived d;
    // cout<<d.a;  // will  not work since a is protected in both base as well as derived class
    return 0;
}
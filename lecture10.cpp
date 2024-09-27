// Constructors
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void printNumber()
    {
        cout << "the number is " << a << " + " << b << " i " << endl;
    }
    // creating a consructor
    // constructor is a special member function with same name as of the class.it is automatically invoked
    // it is used to initialize the objects of its class.
    complex(void); // constructor declaration
};
complex ::complex(void) //this is a default constructor as it takes no parameter.
{
    a = 10;
    b = 5;
}
int main()
{
    complex c;
    c.printNumber();
    return 0;
}

/* 
Properties of constructors :
1. It should be declared in the public section  of the class.
2. they are automatically invoked whenever the object is created.
3. they cannot return values and don not have return types.
4. it can have default arguments.
5. we cannot refer to their address
*/

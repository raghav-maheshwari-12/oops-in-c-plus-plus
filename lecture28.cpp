// Initialization in Constructors

#include <iostream>
using namespace std;

/*
syntax for initialization list in constructor:
constructor (argument list): initialization section
{
assignment +other code;
}
class Test{
int a;
int b;
public:
Test(int i, int j):a(I),b(j){constructor body}
}
*/

class Test
{
    int a;
    int b;

public:
    Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i),b(i+j)
    // Test(int i, int j) : a(i),b(2*j)
    // Test (int i, int j) :a(i), b(a+j)
    // Test(int i, int j) : b(j),a(i+b) --> red flag this will create problrm because a will be initialized first
    {
        cout << "constructor executed" << endl;
        cout << "balue of a is " << a << endl;
        cout << "balue of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}
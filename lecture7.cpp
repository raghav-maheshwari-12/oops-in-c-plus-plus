// Freind Functions
/*PROPERTIES OF FREIND FUNCTIONS
1. not in scope of the class
2.since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumcomplex()== invalid
3.can be invoked without the help of the object
4.usually contains tha object as arguments
5.can be declared inside public or private section of the class*/
#include <iostream>
using namespace std;
class complex
{
    int a;
    int b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below lines means that non member sumcomplex function is allowed to do anything with my private parts
    friend complex sumComplex(complex o1, complex o2);
    void printNumber()
    {
        cout << "your number is " << a << "+" << b << " i" << endl;
    }
};
complex sumComplex(complex o1, complex o2)
{
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
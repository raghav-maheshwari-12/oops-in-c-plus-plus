//classes,public and private access modifiers
#include <iostream>
using namespace std;
// structures in c++ are typedefed
// you can declare objects among with the class declaration like this :
/*  class Employee{
//          class definetion
     }harry,raghav;*/

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // Declaration
    void getData()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
        cout << "The value of e is " << e << endl;
    }
};
void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    Employee raghav;
    raghav.d = 34;
    raghav.e = 89;
    raghav.setData(1, 2, 4);
    raghav.getData();
    return 0;
}
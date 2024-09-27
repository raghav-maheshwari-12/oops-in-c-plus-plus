//Parametrized and Default consructors
// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;

// public:
//     complex(int, int);
//     void printNumber()
//     {
//         cout << "your number is " << a << " + " << b << "i" << endl;
//     }
// };
// complex ::complex(int x, int y)
// { // this is  a parameterized constructor as it takes parameter
//     a = x;
//     b = y;
//     cout << "heloo" << endl;
// }
// int main()
// {
//     // implicit call
//     complex a(4, 6);
//     a.printNumber();
//     // explicit call
//     complex b = complex(5, 7);
//     b.printNumber();
//     return 0;
// }

#include <iostream>
using namespace std;
class point
{
    int x;
    int y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "the point is (" << x << ", " << y << ")" << endl;
    }
};
int main()
{
    point p(1, 1);
    p.displayPoint();
    point q(4, 6);
    q.displayPoint();
    return 0;
}
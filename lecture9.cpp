// // Friend Function
// #include <iostream>
// using namespace std;
// class Y;
// class X
// {
//     int data;

// public:
//     void setValue(int value)
//     {
//         data = value;
//     }
//     friend void add(X, Y);
// };
// class Y
// {
//     int num;

// public:
//     void setValue(int value)
//     {
//         num = value;
//     }
//     friend void add(X, Y);
// };

// void add(X o1, Y o2)
// {
//     cout << "summing data of X and Y objects gives me " << o1.data + o2.num;
// }
// int main()
// {
//     X a;
//     a.setValue(3);
//     Y b;
//     b.setValue(5);
//     add(a, b);
//     return 0;
// }

#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void inData(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
public:
    void inData(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 oc1;
    c2 oc2;
    oc1.inData(34);
    oc2.inData(67);
    exchange(oc1, oc2);
    cout << "the value of c1 after exchanging becomes : " << endl;
    oc1.display();
    cout << "the value of c2 after exchanging becomes : " << endl;
    oc2.display();
    return 0;
}
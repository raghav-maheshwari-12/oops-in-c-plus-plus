// Consructors with dafault arguments
#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 4,int c=8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void simple ::printData()
{
    cout << "the value of data is " << data1 <<", "<<data2<< " and  " << data3 << endl;
}
int main()
{
    simple a(1,4);
    a.printData();
    return 0;
}
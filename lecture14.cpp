// Dynamic initialization of objects using constructors
#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // r can be value like 0.004
    bankDeposit(int p, int y, int r);   // r can be value like 14
    void show();
};
bankDeposit ::bankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + r);
    }
}
bankDeposit ::bankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
void bankDeposit ::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << " Return value after " << year << " is "
         << returnValue << endl;
}
int main()
{
    bankDeposit bd1, bd2, bd3;
    int p;
    int y;
    float r;
    int R;
    cout << "enter the value of p, y and R " << endl;
    cin >> p >> y >> R;
    bd1 = bankDeposit(p, y, R);
    bd1.show();
    return 0;
}
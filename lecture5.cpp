//static data members and methods
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "the id of this employee is  " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void){      // static member function
        cout<<"the value of count id"<<count<<endl;
    }
};

int Employee::count=1000; // default value is 0
int main()
{
    Employee raghav, Darak, Maheshwari;
    raghav.setData();
    raghav.getData();
    Employee :: getCount();

    Darak.setData();
    Darak.getData();
    Employee :: getCount();

    Maheshwari.setData();
    Maheshwari.getData();
    Employee :: getCount();
    return 0;
}
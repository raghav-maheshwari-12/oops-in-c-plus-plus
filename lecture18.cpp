// Inheritance syntax and visibility mode
#include <iostream>
using namespace std;
// base class
class Employee
{

public:
    int id;
    int salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee() {}
};
// derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}}  {{base-class-name}}
{
    class member/methods/etc...
}
1. default visiblity mode is private
2. private visibility mode : public members of the base class becomes private members of the derived class
3. public visibility mode : public members of the base class becomes public members of the derived class
4. private members are never inherited
*/
// creating a programmer class derived from Employee bade class
class Programmer : Employee
{
public:
    Programmer(int inpId)
    {
        id = inpId;
    }

    int languageCode = 9;
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee raghav(1), darak(2);
    cout << raghav.salary << endl;
    cout << darak.salary << endl;
    Programmer SkillF(1);
    cout<<SkillF.languageCode<<endl;
    // cout<<SkillF.id<<endl;
    SkillF.getData();
    return 0;
}
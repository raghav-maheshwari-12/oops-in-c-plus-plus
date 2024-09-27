// Virtual Base Class

#include <iostream>
using namespace std;

/*
Student --> Test
Student -->Sports
test -->Result
Sports -->Result
*/

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no. is : " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float c, float d)
    {
        maths = c;
        physics = d;
    }
    void print_marks(void)
    {
        cout << "your result is here : " << endl
             << "maths : " << maths << endl
             << "physics : " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "your pt score is : " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is : " << total << endl;
    }
};

int main()
{
    Result raghav;
    raghav.set_number(4200);
    raghav.set_marks(80, 90);
    raghav.set_score(9);
    raghav.display();
    return 0;
}
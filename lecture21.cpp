// multilevel inheritance deep dive
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "the roll number is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "the marks obtained in maths are : " << maths << endl;
    cout << "the marks obtained in physics  are : " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    Result Raghav;
    Raghav.set_roll_number(47);
    Raghav.set_marks(80, 90);
    Raghav.display_result();

    return 0;
}
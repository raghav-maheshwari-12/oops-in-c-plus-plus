// pointers to objects and arrow operator

#include<iostream>
using namespace std;

class Complex{
    int real;
    int imaginary;
    public:
    void getData(){
        cout<<"the real part is "<<real<<endl;
        cout<<"the imaginary part is "<<imaginary<<endl;
    }
    void setData(int a,int b){
        real =a;
        imaginary =b;
    }
};
 int main()
{ Complex c1;
Complex *ptr =&c1;
// Complex *ptr =new Complex;

//Array of objects
//Complex *ptr =new Complex[4];

(*ptr).setData(2,4);
  //ptr->setData(2,4);

(*ptr).getData();
//ptr->getData();
return 0;
}
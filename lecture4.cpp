//objects memory allocation and using arrays in classes
#include<iostream>
using namespace std;
 class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter(void){counter =0;}
    void setPrice(void);
    void displayPrice(void);
    
 };
 void Shop:: setPrice(void){
    cout<<"enter the id of your item no "<<counter<<endl;
    cin>>itemId[counter];
    cout<<"enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
 }
 void Shop::displayPrice(void){
    for(int i=0;i<counter;i++){
        cout<<"The Price of item with id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
 }
 int main()
{ Shop dukaan;
dukaan.initCounter();
dukaan.setPrice();
dukaan.setPrice();
dukaan.displayPrice();
return 0;
}
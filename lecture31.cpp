// Array of objects using pointer

#include <iostream>
using namespace std;

class Shop
{
    int id;
    int price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "code of this item is " << id << endl;
        cout << "price of the item is " << price << endl;
    }
};

int main()
{
    int size = 2;
    // int *ptr =&size;
    // int *ptr =new int[10];
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        int p;
        int q;
        cout << "enter id and price of item " << i + 1;
        cin >> p >> q;
        (*ptr).setData(p, q);
        // ptr->setData(p,q);
        ptr++;
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << "item number :  " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}
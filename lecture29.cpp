// Revisiting pointers : new and delete keywords

#include <iostream>
using namespace std;
int main()
{
    // Basic Example
    int a = 4;
    int *ptr = &a;
    cout << "the value of a is " << *(ptr) << endl;

    // New Keyword
    int *p = new int(8);
    cout << "the value at address p is " << (*p) << endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[3] = 30;
    delete[] arr;
    cout << "the value of arr[0] is " << arr[0] << endl;

    return 0;
}
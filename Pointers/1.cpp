// C++ Program to illustrate Pointers.

#include<iostream>
using namespace std;

void pointerfunc()
{
    // defining variable val
    int val = 20;

    // defining pointer variable ptr
    int* ptr = &val;

    cout << "Address of val :- " << &val << endl;
    cout << "Value of val :- " << val << endl;
    cout << "Value of ptr :- " << ptr << endl;
    cout << "Value of *ptr :- " << *ptr << endl;
    cout << "Value of &ptr :- " << &ptr << endl;

    *ptr = 40;
    cout << "After changing the value of the pointer variable " << endl;
    cout << "Value of *ptr :- " << *ptr << endl;
    cout << "Value of val :- " << val << endl;

    int **ptr1 = &ptr;
    cout << "Value of ptr1 :- " << ptr1 << endl;
    cout << "Vale of **ptr1 :- " << **ptr1 << endl;
    
    **ptr1 = 80;
    cout << "After changing the value of the **ptr1 " << endl;
    cout << "Value of **ptr1 :- " << **ptr1 << endl;
    cout << "Value of *ptr :- " << *ptr << endl;
    cout << "Value of val :- " << val << endl;

}

int main()
{
    //function call
    pointerfunc();
    return 0;
}
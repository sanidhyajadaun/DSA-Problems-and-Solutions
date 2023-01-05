// Program to swap 2 numbers without using 3rd variable

#include<iostream>
using namespace std;

//driver function
int main()
{
    //declared two integers with their values
    int a = 10, b = 20;

    //decalred two pointer integers 
    int *ptr1, *ptr2;

    ptr1 = &a;
    ptr2 = &b;

    cout << "Value of a & b before swapping : " << endl;
    cout << "a :- " << *ptr1 <<endl;
    cout << "b :- " << *ptr2 <<endl;

    //swapping of two numbers wth pointer variable
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    cout << endl << "Value of a & b after swapping :" << endl;
    cout << "a :- " << *ptr1 << endl;
    cout << "b :- " << *ptr2 << endl;

    return 0;

}
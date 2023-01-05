// C++ program to illustrate Array Name as Pointers

#include<iostream>
using namespace std;

void arraypointer()
{
    // Declared an array arr[10]
    int arr[5] = {2,4,6,8,10};

    //Declared an pointer variable
    int* ptr;

    //Assigning the value of arr to ptr
    
    //ptr = &arr[0];
    ptr = arr;

    cout << "Elements of array are :- " << ptr[0] << " " << ptr[1] << " " << ptr[3] <<endl;

}

int main()
{
    arraypointer();
    return 0;
}

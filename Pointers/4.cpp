// C++ program to illustrate Void Pointer

#include<iostream>
using namespace std;

void increment(void* val,int pointersize)
{
    if(pointersize==sizeof(char))
    {
        char* ptrchar;

        //typecast the data to a char pointer
        ptrchar = (char*)val;

        //incrementing the value of the char stored in ptrchar by 1
        (*ptrchar)++;
        cout << "Value points to be a char & the data is incremented to next value!!!" << endl; 
    }
    else if(pointersize==sizeof(int))
    {
        int* ptrint;

        //typecasting the data to an int pointer
        ptrint = (int*)val;

        //incrementing the value of the int stored in ptrint by 1
        (*ptrint)++;
        cout << "Value points to an int & the data is incremented to next value!!!" << endl; 
    }

}

int main()
{
    //Declared an character 
    char a = 'x';

    //Declared an integer
    int b = 10;

    //Calling increment function using both char & integer address
    increment(&a,sizeof(a));
    cout << "The new value of a :- " << a << endl;

    increment(&b, sizeof(b));
    cout << "The new value of b :- " << b << endl;

    return 0;
}
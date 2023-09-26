#include<iostream>
using namespace std;

// Recursive function
// void print(int n)
// {
//     if(n<1)
//         return;

//     cout << n << " ";
//     print(n-1);
// }

//Backtarcking funtion
void print(int i,int n)
{
    if(i>n)
        return;

    print(i+1,n);
    cout << i << " ";
}

int main()
{
    int n;
    cout <<"Enter the Nth number :- ";
    cin >> n;
    cout << "Output :- ";
    print(1,n);
}
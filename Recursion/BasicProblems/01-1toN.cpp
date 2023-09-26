#include<iostream>
using namespace std;

// Recusrive function
// void print(int i,int n)
// {
//     if(i>n)
//         return;
//     cout << i << " ";
//     print(i+1,n);
// }


//Backtracking Function
void print(int i,int n)
{
    if(i<1)
        return;

    print(i-1,n);
    cout << i << " ";
}

int main()
{
    int n; 
    cout << "Enter the nth number :- ";
    cin >> n;

    cout << "Output :- ";
    //Calling function
    print(n,n);
}
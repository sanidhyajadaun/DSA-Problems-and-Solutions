#include<iostream>
using namespace std;

// Parameterized function recursivce call
// void func(int n,int sum)
// {
//     if(n<1)
//     {
//         cout << sum;
//         return;
//     }    
//     func(n-1,sum+n);
// }

// Functional (Call recursive)
int func(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+func(n-1);
}

int main()
{
    int n;
    cout << "Enter the nth number :- ";
    cin >> n;

    cout << "Output :- ";
    
    // function call for parameterized function
    //func(n,0);

    // function call for functional recursion
    int k = func(n);
    cout << k;

}
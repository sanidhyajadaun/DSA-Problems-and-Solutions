#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
        return 1;

    return n*fact(n-1);
}

int main()
{
    int n;
    cout << "Enter the number to calculate its factorial :- ";
    cin >> n;

    cout << "Factorial :- ";
    int ans = fact(n);
    cout << ans;
}
#include<iostream>
using namespace std;

int arr[50];

void func(int l, int r)
{
    if(l>=r)
        return;

    swap(arr[l],arr[r]);

    func(l+1,r-1);
    
}

int main()
{
    

    int n;
    cout << "Enter the number of elememnts in the array :- ";
    cin >> n;

    cout << "Enter the elements of the array :- \n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    
    func(0,n-1);

    cout << "Printing the reversed array :- ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
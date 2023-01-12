// C++ Program to demonstrate that we can use memset() to
// set all values as 0 or -1 for integral data types also
// demonstrated the use of vector also

#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

int main()
{
    int n[5]; // declaring the array n[5]

    memset(n,0,sizeof(n));  // memset() to make each element to 0
    cout << endl << "Memset function sets n to 0 " << endl << "array n[5] :- ";
    for(int i=0;i<5;i++)
    {
        cout << n[i] << " ";
    }
    
    cout << endl;
    memset(n,-1,sizeof(n)); // memset() to make each element to 0
    cout << endl << "Memset function sets n to -1 " << endl << "array n[5] :- ";
    for(int i=0;i<4;i++)
    {
        cout << n[i] << " ";
    }

    cout << endl;
    vector<int> b(5,1);     // representation how vector elements can be initialised 
    cout << endl << "Initliased Vector b to 1 " << endl << "Vector b[5] :- ";
    for(int i=0;i<5;i++)
    {
        cout << b[i] << " ";
    }

    return 0;
}
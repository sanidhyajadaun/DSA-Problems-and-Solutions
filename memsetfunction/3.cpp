// C++ Program to demonstrate that we can use memset() to
// set all values as boolean data types also
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
    bool prime[5];

    memset(prime, true, sizeof(prime));
    // If you print without using boolalpha it will print
    // like this
    cout << "Displaying prime[5] without boolaplha "<< endl << "prime[5] :- ";
    for (int i = 0; i < 5; i++)
    {
        cout << prime[i] << " ";
    }

    cout << endl;
    cout << "Displaying prime[5] with boolaplha "<< endl << "prime[5] :- ";
    // If you use boolalpha it will print like this
    for (int i = 0; i < 5; i++)
    {
        cout << boolalpha << prime[i] << " ";
    }

    return 0;
}
// cpp program to demonstrate memset()

#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char str[] = "ThisIsOneCharacter";  // declared char str[]

    cout << endl << "Character str :- " << str << endl;

    memset(str, 't', sizeof(str));      // memset() to make every character to t

    cout << endl;
    cout << "Character str after memset() :- " << str << endl;

    /*
    memset(str, 0, sizeof(str));      // memset() to make every character to 0 won't work

    cout << endl;
    cout << "Character str after memset() :- " << str << endl; */

    memset(str, '0', sizeof(str));      // memset() to make every character to 0

    cout << endl;
    cout << "Character str after memset() :- " << str << endl;

    return 0;
}
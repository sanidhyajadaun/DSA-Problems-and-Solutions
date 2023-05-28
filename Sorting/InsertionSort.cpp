#include<iostream>
using namespace std;

void InsertionSort(int arr[],int n)
{
    int i,j,temp;

    for(int i=1;i<n;i++)
    {
        temp = arr[i];
        j = i-1;
        while(j>=0 && temp<=arr[j])
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }

    std::cout << "\n\nArray after Sorting :- ";
    for(int i=0;i<n;i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[50],n;
    std::cout << "\n\n\t\t\t ------------------------ \n" ;
    std::cout << "\t\t\t Insertion Sort Algorithm \n" ;
    std::cout << "\t\t\t ------------------------ \n\n" ;

    std::cout << "Enter the number of elements of the array :- ";
    std::cin >> n;

    std::cout << "\nEnter the " << n << " elements of the array :- \n";
    for(int i=0;i<n;i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "\n\nArray Before Sorting :- ";
    for(int i=0;i<n;i++)
    {
        std::cout << arr[i] << " ";
    }

    InsertionSort(arr,n);


}
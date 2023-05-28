#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n)
{
    int i,j,min,temp;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
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
    std::cout << "\n\n\t\t\t ------------------------- \n" ;
    std::cout << "\t\t\t Selection Sort Algorithm \n" ;
    std::cout << "\t\t\t ------------------------- \n\n" ;

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

    SelectionSort(arr,n);


}
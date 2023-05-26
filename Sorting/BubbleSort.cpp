#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
    int i,j,temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
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
    std::cout << "\n\n\t\t\t --------------------- \n" ;
    std::cout << "\t\t\t Bubble Sort Algorithm \n" ;
    std::cout << "\t\t\t --------------------- \n\n" ;

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

    bubbleSort(arr,n);


}
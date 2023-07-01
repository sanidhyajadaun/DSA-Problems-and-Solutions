#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	// Write your code here.
	int max = INT_MIN;
	int min  = INT_MAX;
	int sum = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		{
			max = arr[i];
		}
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	sum = max + min;
	return sum;
}
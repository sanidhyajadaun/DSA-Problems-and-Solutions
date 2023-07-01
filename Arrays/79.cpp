#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	int n = arr.size();
	n = n-1;
	m = m+1;
	int temp;
	while(m<=n)
	{
		temp = arr[m];
		arr[m] = arr[n];
		arr[n] = temp;
		m++;
		n--;
	}
}

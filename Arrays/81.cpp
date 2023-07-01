class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
       priority_queue<int,vector<int>,greater<int>> min;
       
       for(int i=0;i<=r;i++)
       {
           min.push(arr[i]);
       }
       while(k-1)
       {
           min.pop();
           k--;
       }
       return min.top();
    }
};
int lowerbound(int arr[],int n,int x){
    int low=0,high=n-1,res=-1;
    while(low<=high){
        int mid = low+(high-low)/2;
        if(arr[mid]>=x){
            res = mid;
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    return res;
}

int upperbound(int arr[],int n,int x){
    int lo=0, hi=n-1,res=n;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]>x){
            res=mid;
            hi=mid-1;
        }
        else{
            lo=mid+1;
        }
    }
    return res;
}

vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    int lb = lowerbound(arr,n,x);
    int ub = upperbound(arr,n,x);
    if(lb==n || arr[lb]!=x){
        return {-1,-1};
    }
    ans.push_back(lb);
    ans.push_back(ub-1);
    return ans;
    
}
class Solution {
public:
    vector<int> sumZero(int n) 
    {
        vector<int> ans;
        if(n==1){
            ans.push_back(0);
            return ans;
        }
        int p=1; 
        if(n%2==0)
        {
          for(int i=1;i<=n-1;i+=2)
            {
                ans.push_back(p);  // Just add any random number and its negative number that will add upto 0
                ans.push_back(p*(-1));
                p++;
            }  
        }
        else   
        {
            for(int i=1;i<=n-1;i+=2)
            {
                ans.push_back(p);   // Just add any random number and its negative number that will add upto 0
                ans.push_back(p*(-1));
                p++;
            }
            // Finally add 0 for that extra number after covering n-1 numbers.
            ans.push_back(0);
        }
        return ans;
    }
};
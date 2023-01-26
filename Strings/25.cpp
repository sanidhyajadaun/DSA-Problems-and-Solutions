class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n = s.size();

        int str[n][n];
        memset(str,0,sizeof(str));
        
        int last=1,begin=0;
	
        for(int i=0;i<n;i++)
        {
            str[i][i] = 1;
        }

        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1])
            { 
                str[i][i+1]=1;
                begin=i;
                last=2;
            }
        }
    
        for(int j=2;j<n;j++)
        {
            for(int i=0;i< n-j;i++)
            {  
                int left=i; //begin point
                int right = i+j;  //lasting point
            
                if(str[left+1][right-1]==1 && s[left]==s[right]) 
                {
                    str[left][right]=1; 
                    begin=i; 
                    last=j+1; 
                }        
            }
        }
        return s.substr(begin, last);
    }
};
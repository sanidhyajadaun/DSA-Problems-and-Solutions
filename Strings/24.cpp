class Solution {
public:
    int maxDepth(string s) 
    {
        int result = 0 ;
        int ans = 0 ; 

        for (int i = 0 ; i<s.length() ; i++)
        {
            if(s[i]== '(')
            {
                result ++ ; 
                ans = max (ans, result) ; 
            }
            else if (s[i] == ')')
            {
                result -- ;
            }
        }
        return ans ;
    }
};
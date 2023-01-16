class Solution {
public:
    string truncateSentence(string s, int k) 
    {
        int space=0,i=0; 
        int n=s.size(); 
        string res ="";
        
        while ((i != n))
        {
            if (s[i] == ' ')
            {
                space ++;
            }
            if(space == k)
            {
                break ;
            }
            res += s[i];   
            i++; 
        }
        return res;
        
    }
};
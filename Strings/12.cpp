class Solution {
public:
    string defangIPaddr(string address) 
    {
        string ans = "";
        for(char x: address)
        {
            if(x=='.')
            {
                ans = ans + "[.]";
            }
            else
            {
                ans = ans + x;
            }
        }
        return ans;
    }
};
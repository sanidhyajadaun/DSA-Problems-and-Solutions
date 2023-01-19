class Solution {
public:
    bool checkPalindrome(string str)
    {
        string reversed = str;
        reverse(reversed.begin(),reversed.end());
        if(reversed==str)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string firstPalindrome(vector<string>& words) 
    {
        for(int i=0;i<words.size();i++)
        {
            if(checkPalindrome(words[i]))
            {
                return words[i];
            }
        }
        return "";        
    }
};
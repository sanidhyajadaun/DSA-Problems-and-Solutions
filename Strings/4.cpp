class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string str1, str2;

        for(int i=0;i<word1.size();i++)
        {
            str1.append(word1[i]);
        }
        
        for(int j=0;j<word2.size();j++)
        {
            str2.append(word2[j]);
        }

        if(str1==str2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
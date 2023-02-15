class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        string mergedstring="";
        int len = min(word1.length(),word2.length());
        
        for(int i=0;i<len;i++)
        {
            mergedstring+=word1[i];
            mergedstring+=word2[i];
        }

        if(word1.length()>word2.length())
        {
            for(int i=len;i<word1.length();i++)
                mergedstring+=word1[i];
        }
        else
        {
            for(int i=len;i<word2.length();i++)
                mergedstring+=word2[i];
        }

        return mergedstring;
    }
};
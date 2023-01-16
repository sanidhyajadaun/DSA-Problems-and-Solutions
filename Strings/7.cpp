class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) 
    {
        // total count of words in vector words
        int n=words.size();

        // bool alpha to store the true for allowed words
        bool alpha[26]={};

        // initializes true for the allowed words
        for(char ch: allowed)
        {
            alpha[ch-'a']=true;
        }

        // for checking if words are not allowed
        for(string word: words)
        {
            for(char ch: word)
            {
                if(!alpha[ch-'a'])
                {
                    n--;
                    break;
                }
            }
        }
        
        return n;
    }
};
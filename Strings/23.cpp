class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        vector<int>v(26);
        for(int p=0;p<sentence.length();p++){
            v[sentence[p]-97]++;
        }
        for(int p=0;p<26;p++){
            if(v[p]==0){
                return false;
            }
        }
        return true;
    }
};
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) 
    {
        int count=0;
        for(int i=0;i<patterns.size();i++) {
            int k=0;
            while(k<word.size()) {
                string s=word.substr(k);
        
                if(patterns[i] == s.substr(0, patterns[i].size())){
                    count++;
                    break;
                }
                else {
                    k++;
                }
            }
        }
        return count;
    }
};
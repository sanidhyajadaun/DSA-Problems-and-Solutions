class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
        while(iss >> word)
        {
            words.push_back(word);
        }
        string ans = "";
        int n = words.size();
        for(int i=n-1;i>=0;i--){
            ans += words[i];
            if(i==0)
                ans += "";
            else
                ans += " ";
        }
        return ans;
    }
};
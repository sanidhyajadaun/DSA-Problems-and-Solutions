class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> words;
        istringstream iss(s);
        string word;
        while(iss>>word)
        {
            words.push_back(word);
        }
        int n = words.size();
        string w = words[n-1];
        int l = w.size();
        return l;
    }
};
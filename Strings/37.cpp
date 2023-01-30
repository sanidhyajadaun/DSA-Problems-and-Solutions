class Solution {
public:
    string reversePrefix(string word, char ch) 
    {
        bool flag=false;
        int i=0;
        string ans="";
        for(i=0;i<word.length();i++){
            if(word[i]==ch){
                flag=true;
                break;
            }
            ans+=word[i];
        }
        ans+=ch;
        if(!flag){
            return word;
        }
        reverse(ans.begin(), ans.end());
        for(int i=0;i<ans.length();i++){
            word[i]=ans[i];
        }
        return word;
    }
};
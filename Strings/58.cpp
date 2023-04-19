class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        
        string fval="", sval="",tval="";

        for(auto x: firstWord){
            fval += to_string(x-'a');
        }

        for(auto x: secondWord){
            sval += to_string(x-'a');
        }

        for(auto x: targetWord){
            tval += to_string(x-'a');
        }

        if(stoi(fval)+stoi(sval)==stoi(tval))
            return true;
        else
            return false;
    }
};
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) 
    {
        // store the code from description for each alphabet
        vector<string> morsecode = {".-","-...","-.-.","-..",".","..-.","--.","....",
                                    "..",".---","-.-",".-..","--","-.","---",".--.",
                                    "--.-",".-.","...","-","..-","...-",".--","-..-",
                                    "-.--","--.."};

        // insert to set so that we can find unique solutions
        set<string> ans;
        
        for(int i=0; i<words.size();i++)
        {
            // stores the current word
            string str=words[i];    // Present word

            string code="";     // to store coded word from tt

            for(int j=0;j<str.size();j++)
            {
                int index=str[j]-'a';   // we get the particular index
                code+=morsecode[index];
            }
            ans.insert(code);
        }
        return ans.size();  // we get unquie number
        
    }
};
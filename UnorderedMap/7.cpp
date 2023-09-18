class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int maxFreq = 0;
        int i=0;
        unordered_map<char,int> mp;

        for(int j=0;j<answerKey.length();j++){
            char currentch = answerKey[j];
            mp[currentch]++;
            maxFreq = max(maxFreq,mp[currentch]);

            if(j-i+1>maxFreq + k){
                mp[answerKey[i]]--;
                i++;
            }
        }
        return answerKey.length()-i;
    }
};
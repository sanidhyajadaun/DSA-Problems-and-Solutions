class Solution {
public:
    bool judgeCircle(string moves) 
    {
        int check1=0,check2=0;
        for(auto x: moves)
        {
            if(x=='U')check1++;
            if(x=='D')check1--;
            if(x=='R')check2++;
            if(x=='L')check2--;
        }
        if(check1==0 &&check2==0)
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
};
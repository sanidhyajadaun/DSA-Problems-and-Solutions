class Solution {
public:
    int romanToInt(string s) 
    {
        int sol = 0;
        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == 'I' and s[i+1] == 'V')
            {
                sol+=4;
                i++;
            }
            else if(s[i] == 'I' and s[i+1] == 'X')
            {
                sol+=9;
                i++;
            }
            else if(s[i] == 'X' and s[i+1] == 'L')
            {
                sol+=40;
                i++;
            }
            else if(s[i] == 'X' and s[i+1] == 'C')
            {
                sol+=90;
                i++;
            }
            else if(s[i] == 'C' and s[i+1] == 'D')
            {
                sol+=400;
                i++;
            }
            else if(s[i] == 'C' and s[i+1] == 'M')
            {
                sol+=900;
                i++;
            }
            else if(s[i] == 'I')
            {
                sol+=1;
            }
            else if(s[i] == 'V')
            {
                sol+=5;
            }
            else if(s[i] == 'X')
            {
                sol+=10;
            }
            else if(s[i] == 'L')
            {
                sol+=50;
            }
            else if(s[i] == 'C')
            {
                sol+=100;
            }
            else if(s[i] == 'D')
            {
                sol+=500;
            }
            else if(s[i] == 'M')
            {
                sol+=1000;
            }
        }
    
    return sol;
    }
};
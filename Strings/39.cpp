class Solution {
public:
    bool squareIsWhite(string coordinates) 
    {
        unordered_map<char,int>m;
        m['a']=0;
        m['b']=1;
        m['c']=0;
        m['d']=1;
        m['e']=0;
        m['f']=1;
        m['g']=0;
        m['h']=1;
        if(m[coordinates[0]]==0)
        {
          
            if((coordinates[1]-'0')%2==0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else{
            
            if((coordinates[1]-'0')%2!=0)
            {
                return true;
            }
            else
            {
                return false;
            }

        }
        return true;
    }
};
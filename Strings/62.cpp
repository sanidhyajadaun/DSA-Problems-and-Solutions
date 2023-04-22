class Solution {
public:
    string reformatNumber(string number) {
        
        string num = "";

        for(int i=0;i<number.size();i++){
            if((number[i]-'0')>=0 && (number[i]-'0')<=9)
            {
                num += number[i]; 
            }
        }
        
        string renum = "";
        int i=0;
        while(i<num.length())
        {
            if(num.length()-i==4){
                renum += num.substr(i,2);
                renum += "-";
                renum += num.substr(i+2,2);
                break;
            }else if(num.length()-i<4){
                renum += num.substr(i);
                break;
            }else 
            {
                renum += num.substr(i,3);
                renum += "-";
                i+=3;
            }
        }

        return renum;
    }
};
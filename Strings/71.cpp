class Solution {
public:
    string countAndSay(int n) {
        switch(n)
        {
            case 1: return "1";
            case 2: return "11";
        }
        string str = "11";
        int count = 1;
        string temp = "";
        for(int i=3;i<=n;i++){
            str += "&";

            for(int j=1;j<str.length();j++){
                if(str[j]!=str[j-1]){
                    temp += to_string(count) + str[j-1];
                    count = 1;
                }
                else
                    ++count;
            }
            count = 1;
            str = std::move(temp);
            temp.clear();
        }
        return str;
    }
};
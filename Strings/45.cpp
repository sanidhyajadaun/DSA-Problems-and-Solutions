class Solution {
public:
    string sortString(string s) 
    {
        map<char,int> m;  // to store the frequency of character        
        int count=0; // to count total  number of character or we can use s.size()
        
        //store the values in map         
        for(auto i:s){
            m[i]++;
            count++;
        }
   
        
        string ans=""; // ans to return
        while(count){
            
            // increasing order
            for(auto i:m){
                if(i.second!=0 && count!=0){
                    m[i.first]--;
                    ans+=i.first;   //add character to ans 
                    count--;
                }
            }
            
            // decreasing order
            for(auto it=m.rbegin();it!=m.rend();it++){
                if(it->second!=0 && count!=0){
                    m[it->first]--;
                    ans+=it->first; // add character to ans
                    count--;
                }
            }
        }
        return ans; // return final ans
        
    }
};
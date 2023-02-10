class Solution {
public:
    string destCity(vector<vector<string>>& paths) 
    {
        vector<string> str;
        for(int i=0;i<paths.size();i++)
            str.push_back(paths[i][0]);
        for(int i=0;i<paths.size();i++){
            if(!(find(str.begin(),str.end(),paths[i][1])!=str.end())){
                return paths[i][1];
            }
        }
        return "";
    }
};
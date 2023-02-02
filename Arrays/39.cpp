class Solution {
public:
    int garbageCollection(vector<string>& gar, vector<int>& travel) 
    {
        int sum = 0;
        bool gbool = false, pbool = false, mbool = false;
        for(auto i : gar) {
            sum += i.size();
        }
        int g = -1, m = -1, p = -1;
        for(int i=gar.size()-1;i>=0;i--) {
            for(int j=0;j<gar[i].size();j++) {
                if(gar[i][j] == 'G' && !gbool) {
                    g = i - 1;
                    gbool = true;
                }
                else if(gar[i][j] == 'P' && !pbool) {
                    p = i - 1;
                    pbool = true;
                }
                else if(gar[i][j] == 'M' && !mbool) {
                    m = i - 1;
                    mbool = true;
                }
            }
            if(gbool && pbool && mbool) break;
        }
        for(int i=0;i<=g;i++) {
            sum += travel[i];
        }
        for(int i=0;i<=p;i++) {
            sum += travel[i];
        }
        for(int i=0;i<=m;i++) {
            sum += travel[i];
        }
        return sum;
        
    }
};
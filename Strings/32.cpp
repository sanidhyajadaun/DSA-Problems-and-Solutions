class Solution {
public:
    int countPoints(string rings) 
    {
        int r[10]={0};
        int b[10]={0};
        int g[10]={0};
        for(int i=0;i<rings.size();i++){
            if(rings[i]=='B'){
                b[rings[i+1]-'0']++;
            } 
            if(rings[i]=='R'){
                r[rings[i+1]-'0']++;
            }
            if(rings[i]=='G'){
                g[rings[i+1]-'0']++;
            }
        }
        int count=0;
        for(int i=0;i<10;i++){
            if(b[i]>0 && r[i]>0 && g[i]>0){
                count++;
            }
        }
        return count;
    }
};
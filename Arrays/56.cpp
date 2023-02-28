class Solution {
public:
    int wateringPlants(vector<int>& P, int capacity) 
    {
        int res=0,curr_water=capacity;
        for(int i=0;i<P.size();i++){
            if(curr_water>=P[i]){
                res++;
                curr_water-=P[i];
                continue;
            }
            curr_water=capacity-P[i];
            res++;
            res+=(i*2);
        }
        return res;
    }
};
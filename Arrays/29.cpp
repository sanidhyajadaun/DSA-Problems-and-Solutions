class Solution {
public:
    int largestAltitude(vector<int>& gain) 
    {
        int highalt=0,gainsum=0;

        for(int i=0;i<gain.size();i++)
        {
            gainsum+=gain[i];
            highalt=max(highalt,gainsum);
        }
        return highalt;   
    }
};
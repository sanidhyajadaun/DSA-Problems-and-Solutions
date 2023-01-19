class Solution {
public:
    int minPartitions(string n) 
    {
        int size = n.length();
        int maxdigit = 0;
        
        for(auto i:n)
        {
            int digit = i-'0';
            maxdigit = max(maxdigit,digit);
        }
        return maxdigit;
    }
};
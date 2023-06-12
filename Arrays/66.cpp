class Solution {
public:
    int sumOfMultiples(int n) {

        vector<int> num;
        int sum = 0;

        for(int i=1;i<=n;i++)
        {
            if(i%3==0 || i%5==0 || i%7==0)
            {
                num.push_back(i);
            }
        }
        for(int j=0;j<num.size();j++)
        {
            sum += num[j];
        }
        return sum;        
    }
};
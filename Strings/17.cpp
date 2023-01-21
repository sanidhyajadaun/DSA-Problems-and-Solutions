class Solution {
public:
    vector<int> minOperations(string boxes) 
    {
       vector<int>answer;
        for(int i=0;i<boxes.length();i++)
        {
            int count=0;
            for(int j=0;j<boxes.length();j++)
            {
                if(boxes[j]=='1' && j!=i)
                {
                    count+=abs(i-j);
                }
            }
            answer.push_back(count);
        }
        return answer;
    }
};
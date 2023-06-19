class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> st;
        for(auto itr: s)
        {
            if(itr=='(' or itr=='{' or itr=='[')
            {
                st.push(itr);
            }
            else
            {
                if(st.empty() or (st.top()=='(' and itr!=')') or (st.top()=='{' and itr!='}') or (st.top()=='[' and itr!=']'))
                {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
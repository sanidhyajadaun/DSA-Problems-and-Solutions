/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        vector<int> x;
        int num=0;
        while(head!=0)
        {
            x.push_back(head->val);
            head=head->next;
        }

        reverse(x.begin(),x.end());

        for(int i=0;i<x.size();i++)
        {
            if(x[i]!=0)
            {
                num = num + pow(2,i);
            }
        }
        return num;
    }
};
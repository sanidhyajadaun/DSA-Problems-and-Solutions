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
    ListNode* mergeNodes(ListNode* head) 
    {
        int sum=0;
        vector<int> result;
        while(head)
        {
            if(head->val==0)
            {
                if(sum)
                {
                    result.push_back(sum);
                    sum=0;
                }
            }
            sum += head->val;
            head = head->next;
        }
        if(sum)
        {
            result.push_back(sum);
        }

        if(result.size()==0)
        {
            return nullptr;
        }

        ListNode* answer = new ListNode(result[0]);
        ListNode* curr = answer;

        for(int i=1;i<result.size();i++) 
        { // O(n)
            ListNode* newNode = new ListNode(result[i]);
            curr -> next = newNode;
            curr = newNode;
        }

        return answer;
    }
};
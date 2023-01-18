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
    int pairSum(ListNode* head) 
    {
        ListNode* temp = head;
        int count = 0;
        stack<int> s;

        while(temp)
        {
            s.push(temp->val);
            temp = temp->next;
            count++;
        }

        count = count/2;
        temp = head;
        int max = INT_MIN;
        while(count)
        {
            int a = temp->val + s.top();

            if(a>max)
            {
                max = a;
            }
            s.pop();
            temp = temp->next;
            count--;
        }
        return max;
    }
};
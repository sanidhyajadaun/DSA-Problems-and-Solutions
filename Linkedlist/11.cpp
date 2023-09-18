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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
            return 0;
        }
        ListNode *slow=head, *fast=head, *node;
        while(fast!=NULL && fast->next!=NULL){
            node = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        node->next = node->next->next;
        return head;
    }
};
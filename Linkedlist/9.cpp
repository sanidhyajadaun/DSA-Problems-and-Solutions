structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        unordered_map<Node*,bool> m;
        Node* temp = head;
        Node*prev=NULL;
        while(temp!=NULL)
        {
            if(m.find(temp)==m.end())
            {
                m[temp]=true;
            }
            else
            {
                prev->next=NULL;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
    }
};
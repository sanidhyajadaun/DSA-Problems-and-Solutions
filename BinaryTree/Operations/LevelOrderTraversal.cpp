#include<iostream>
#include<queue>
using namespace std;

//structure definition of binary tree
struct Node
{
    //to store data
    int data;
    //left ponter varuable
    struct Node* left;
    //right pinter variable
    struct Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

//function to create binary tree
struct Node* create()
{
    int n;
    cout << endl << "Enter the data :- ";
    cin >> n;
    if(n==-1)
    {
        return 0;
    }
    else
    {
        struct Node* temp = new Node(n);
        cout << "Enter the left child of " << n << " node :- ";
        temp->left = create();
        cout << "Enter the right child of " << n <<" node :- ";
        temp->right = create();
        return temp;
    }
}

void Preorder(struct Node* root)
{
    if(root!=NULL)
    {
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}


/*

        1
    2       3
4      5 6      7

*/

//level order traversal
void LevelOrderTraversal(struct Node* root)
{
    if(!root)
        return;
    
    queue<struct Node*> q;
    q.push(root);

    struct Node* temp;

    while(!q.empty())
    {
        int len = q.size();
        for(int i=0;i<len;i++)
        {
            temp = q.front();
            q.pop();

            cout << temp->data << " ";

            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);    
        }
        cout << endl;
    }

}


int main()
{
    cout << "\n\n\t\t\t---------------------------------\n";
    cout << "\t\t\tBinary Tree Level Order Traversal\n";
    cout << "\t\t\t---------------------------------\n\n";
    struct Node* root = NULL;
    root = create();
    cout << "\n\nLevel Order Traversal of Binary tree :- " << endl;
    LevelOrderTraversal(root);
    cout << "\n\nTraversed Binary Tree in Preorder:- ";
    Preorder(root);
}

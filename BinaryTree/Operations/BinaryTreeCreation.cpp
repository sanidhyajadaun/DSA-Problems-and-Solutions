#include<iostream>
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

void display(struct Node* root)
{
    if(root!=NULL)
    {
        cout << root->data << " ";
        display(root->left);
        display(root->right);
    }
}

int main()
{
    cout << "\n\n\t\t\t--------------------\n";
    cout << "\t\t\tBinary Tree Creation\n";
    cout << "\t\t\t--------------------\n\n";
    struct Node* root = NULL;
    root = create();
    cout << "\n\nTraversed Binary Tree :- ";
    display(root);
}
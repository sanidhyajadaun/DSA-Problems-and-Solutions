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

//Preorder traversal
void Preorder(struct Node* root)
{
    if(root)
    {
        cout << root->data << " ";
        Preorder(root->left);
        Preorder(root->right);
    }
}

//Preorder traversal
void Inorder(struct Node* root)
{
    if(root)
    {
        Inorder(root->left);
        cout << root->data << " ";
        Inorder(root->right);
    }
}

//Postorder traversal
void Postorder(struct Node* root)
{
    if(root)
    {
        Postorder(root->left);
        Postorder(root->right);
        cout << root->data << " ";
    }
}

int main()
{
    cout << "\n\n\t\t\t---------------------\n";
    cout << "\t\t\tBinary Tree Traversal\n";
    cout << "\t\t\t---------------------\n\n";
    struct Node* root = NULL;
    root = create();
    cout << endl << endl << "Preorder Traversal :- ";
    Preorder(root);
    cout << endl << endl << "Inorder Traversal :- ";
    Inorder(root);
    cout << endl << endl << "Postorder Traversal :- ";
    Postorder(root);
}
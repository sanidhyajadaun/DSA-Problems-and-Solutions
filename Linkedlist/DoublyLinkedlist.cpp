#include<iostream>           //declared header files
using namespace std;

// structure node to store data
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};


struct node *head,*tail;    // dcelared head and tail pointer

// create() to create a node
void create()
{
    struct node *newnode;
    head=0;
    int c=1;
    cout << endl << "Creating a node...."<< endl;
    while(c==1)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        cout <<"Enter the data :- ";
        cin >> newnode->data;
        newnode->prev=0;
        newnode->next=0;

        if(head==NULL)
        {
            head=tail=newnode;
        }
        else 
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }

        cout<< "Do you want to create more node? (1/0) :- ";
        cin >> c;
    }
    cout << endl;
}


// function to display the linked list
struct node *display()
{
    struct node *ptr;
    ptr=head;
    cout << endl << endl << "List :- ";
    while(ptr!=0)
    {
        cout<<ptr->data<<"  ";
        ptr = ptr->next;
    }        
    cout<< endl;
}

// Function to insert node at the beginning of the linked list
void insertBeg()
{
    struct node *newnode,*temp;

    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl;
        cout << "The list is empty...." << endl;
        create();
    }
    else
    {
        cout << endl;
        newnode=(struct node*)malloc(sizeof(struct node));
        cout << "Enter the data to be inserted at the beginning :- ";
        cin >> newnode->data;

        head->prev = newnode;
        newnode->next = head;
        head = newnode;
    }
}


// function to insert node at the end of the list 
void insertend()
{
    struct node *newnode,*temp;
    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "The list is empty....." << endl;
        create();
    }
    else
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        cout << endl;
        cout << "Enter the data to be inserted at the end of the list :- ";
        cin >> newnode->data;

        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;

        /*for(temp=head;temp->next!=NULL;temp=temp->next);
        temp->next=newnode;
        newnode->next=NULL;*/
    }
    tail->next=NULL;
}


// function to insert node at a random position in the list
void insert_random()
{
    struct node *ptr,*temp,*newnode;

    int len=0;
    for(temp=head;temp->next!=NULL;temp=temp->next) len++;

    int pos,i=1;

    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "The list is empty!!!!" << endl;
    }
    else 
    {
        cout << endl << "Enter the position where you have to insert :- ";
        cin >> pos;

        // condition to check if there is one element
         if(pos>len || pos<0)
        {
            cout << "Invalid Position!" << endl;
        }
        else if(pos==1)
        {
            insertBeg();
        }
        else
        {
            ptr=head;
            while(i<pos-1)
            {
                ptr=ptr->next;
                i++;
            }

            //  1 2 7 3 4 5 6 

            //condtition to check if we have to insert at the end of the list
            if(ptr->next==0)
            {
                insertend();
            }
            else
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                cout << endl;
                cout << "Enter the data :- ";
                cin >> newnode->data;
            
                newnode->prev = ptr;
                newnode->next = ptr->next;
                ptr->next = newnode;
                newnode->next->prev = newnode;       
            }
        }
    }
}



// function to delete the first node of the list
void deletion_beg()
{
    struct node *temp;
    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "The list is empty....!!!!" << endl;
    }
    else
    {
        cout << endl << "One node deleted from the beginning!!!!" << endl;
        temp=head;
        head=head->next;
        head->prev=0;
        free(temp);
    }
}


//  function to delete the last node of the list
void deletion_end()
{
    struct node *temp,*n;

    // condition to check if list is empty or not
    if(tail==0)
    {
        cout << endl << "Sorry, the list is empty....!!!" << endl;
    }
    else
    {
        cout << endl << "One node deleted from the end!!!!" << endl;

        temp = tail;
        tail = tail->prev;
        tail->next = 0;
        free(temp);
    }
}


// function to delete random nodes from the list
void deletion_random()
{
    struct node *temp;
    int pos,count=0;

    // condition to check if list is empty or not
    if(tail==0)
    {
        cout << endl << "The list is empty...!!!";
    }
    else
    {
        cout << endl << "Enter the position :- ";
        cin >> pos;

        for(temp=head;temp!=0;temp=temp->next)
        {
            count++;    // to count the no. of nodes in the list
        }

        if(pos>count || pos<0) // to check if the position exist or not
        {
            cout << endl << "Position doesn't exist!!!" << endl;
        }
        else
        {
            if(count==1)
            {
                deletion_beg();
            }
            else
            {
                cout << endl << "Deleting the " << pos <<" node from the list ";
                int i=0;
                temp=head;
                while(i<pos)
                {
                    temp = temp->next;
                    i++;
                }
                // 1 2 3 4 
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                free(temp);
            }
        }
    }
}


int main()
{
    cout << endl;
    cout << "-----------------------------" << endl;
    cout << "Implementation of Doubly Linked List" << endl;
    cout << "-----------------------------" << endl << endl;

    cout << "Functions of Linked Lists that you care performed " << endl;
    cout << "1. Creation of linked list with nodes" << endl;
    cout << "2. Display the linked list" << endl;
    cout << "3. Insertion at the beginning" << endl;
    cout << "4. Insertion at the end" << endl;
    cout << "5. Insertion at any random position" << endl;
    cout << "6. Deletion at the beginning" << endl;
    cout << "7. Deletion at the end" << endl;
    cout << "8. Deletion at any random position"<< endl;
    cout << endl;
    
    create();
    display();

    insertBeg();
    display();

    insertend();
    display();

    insert_random();
    display();

    deletion_beg();
    display();

    deletion_end();
    display();

    deletion_random();
    display();
}


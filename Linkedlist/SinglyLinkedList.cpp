#include <iostream>     //declared header files
#include <conio.h>
using namespace std;

// structure node to store age & name
struct node 
{
    int age;
    char name[45];
    struct node* next;
};


// function to create node of the linked list
struct node *create_node()
{
    struct node *head=0,*ptr=0;
    int check=1;

    l1:
    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl;
        cout << "Creating a node of the Linked list..." << endl;
        head = (struct node*)malloc(sizeof(struct node));
        cout << "Enter the age :- ";
        cin >> head->age;
        cout << "Enter the name :- ";
        while(getchar()!='\n');
        cin >> head->name;
        ptr=head;
    }
    else
    {
        ptr->next=(struct node*)malloc(sizeof(struct node));
        ptr=ptr->next;

        cout << endl ;
        cout << "Creating the next node of the Linked List...." << endl;
        cout << "Enter the age :- ";
        cin >> ptr->age;
        cout << "Enter the name :- ";
        while(getchar()!='\n');
        cin >> ptr->name;
    }
    
    cout << endl << "Do you want to create more nodes (1/0) :- ";
    cin >> check;
    if(check==1)
    {
        goto l1;
    }
    else if(check==0)
    {
        cout << endl << "Exiting the creation function...." << endl;
    }
    else
    {
        cout << endl << "Sorry...you have entered wrong choice!!!" << endl;
        cout << "Exiting the creation function...." << endl;
    }
    ptr->next=NULL;
    return head;
}


// display function to print the nodes of the list
void display(struct node *head)
{
    int count=1;
    struct node *ptr;

    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "The list is empty...!!!" << endl;
    }
    else
    {
        for(ptr=head;ptr!=0;ptr=ptr->next)
        {
            cout << endl;
            cout << "Node :- " << count << endl;
            cout << "Name :- " << ptr->name << endl;
            cout << "Age :- "<< ptr->age << endl;
            count++;
        }
    }
}


// function to insert node at the beginning of the list
struct node *insertion_beg(struct node *head)
{
    struct node *ptr,*temp;

    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl;
        cout << "The list is empty...." << endl;
        head = create_node();
    }
    else
    {
        cout << endl;
        ptr=(struct node*)malloc(sizeof(struct node));
        cout << "Enter the age :- ";
        cin >> ptr->age;
        cout << "Enter the name :- ";
        while(getchar()!='\n');
        cin >> ptr->name;

        temp = head;
        head = ptr;
        ptr->next = temp;
    }
    return head;
}


// function to insert node at the end of the list 
struct node *insertion_end(struct node *head)
{
    struct node *ptr,*temp;
    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "The list is empty....." << endl;
        head = create_node();
    }
    else
    {
        ptr=(struct node*)malloc(sizeof(struct node));
        cout << endl;
        cout << "Enter the age :- ";
        cin >> ptr->age;
        cout << "Enter the name :- ";
        while(getchar()!='\n');
        cin >> ptr->name;
        

        for(temp=head;temp->next!=NULL;temp=temp->next);
        temp->next=ptr;
        ptr->next=NULL;
    }
    return head;
}


// function to insert node at a random position in the list
struct node *insert_random(struct node *head)
{
    struct node *ptr,*temp,*n;
    int pos,i=0,count=0;
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
        if(pos==1)
        {
            head=insertion_beg(head);
        } 
        else
        {
            ptr=head;
            while(i<pos-1)
            {
                ptr=ptr->next;
                i++;
            }

            //condtition to check if we have to insert at the end of the list
            if(ptr->next==0)
            {
                head=insertion_end(head);
            }
            else
            {
                n=(struct node*)malloc(sizeof(struct node));
                cout << endl;
                cout << "Enter the age :- ";
                cin >> ptr->age;
                cout << "Enter the name :- ";
                while(getchar()!='\n');
                cin >> ptr->name;

                temp=ptr->next;
                ptr->next=n;
                n->next=temp;
            }
        }
    }
    return head;
}


// function to delete the first node of the list
struct node *deletion_beg(struct node *head)
{
    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "The list is empty....!!!!" << endl;
    }
    else
    {
        head=head->next;
    }
    return head;
}


//  function to delete the last node of the list
struct node *deletion_end(struct node* head)
{
    struct node *ptr,*temp,*n;
    int count=0;

    // condition to check if list is empty or not
    if(head==0)
    {
        cout << endl << "Sorry, the list is empty....!!!" << endl;
    }
    else
    {
        for(temp=head;temp!=0;temp=temp->next)
        {
            count++; // counting the number of nodes in the list
        }

        cout << endl << "Deleting the last node...!!!" << endl;

        int i=1;

        for(ptr=head;i<count-1;ptr=ptr->next,i++); // loop to reach to last node
        n=ptr->next;
        ptr->next=NULL;
        free(n);
    }
    return head;
}


// function to delete random nodes from the list
struct node *deletion_random(struct node *head)
{
    struct node *ptr,*temp;
    int pos,count=0,lastnode=0;

    // condition to check if list is empty or not
    if(head==0)
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
                head=deletion_beg(head);
            }
            else
            {
                cout << endl << "Deleting the " << pos <<" node from the list ";
                int i;
                for(ptr=head;i<pos-1;ptr=ptr->next,i++);
                temp = ptr->next;
                ptr->next=ptr->next->next;
                free(temp);
            }
        }
        return head;
    }
}


// driver function
int main()
{
    struct node *head=0,*ptr;
    int n, check=1;

    while(check==1)
    {
        cout << endl;
        cout << "-----------------------------" << endl;
        cout << "Implementation of Linked List" << endl;
        cout << "-----------------------------" << endl << endl;

        cout << "Functions of Linked Lists that you can perform:" << endl;
        cout << "1. Creation of linked list with nodes" << endl;
        cout << "2. Display the linked list" << endl;
        cout << "3. Insertion at the beginning" << endl;
        cout << "4. Insertion at the end" << endl;
        cout << "5. Insertion at any random position" << endl;
        cout << "6. Deletion at the beginning" << endl;
        cout << "7. Deletion at the end" << endl;
        cout << "8. Deletion at any random position"<< endl;


        cout << endl;
        cout << "Enter the choice based on which function you have to perform :- ";
        cin >> n;

        switch (n)
        {
        case 1: head = create_node();
                break;
        
        case 2: display(head);
                break;
        
        case 3: head = insertion_beg(head);
                break;

        case 4: head = insertion_end(head);
                break;
            
        case 5: head = insert_random(head);
                break;
        
        case 6: head = deletion_beg(head);
                break;

        case 7: head = deletion_end(head);
                break;

        case 8: head = deletion_random(head);
                break;

        default: cout << "You have entered a wrong Choice!!!!!!!!" <<endl;
                 break;
        }

        cout << endl << "Do you want to continue the main program (1/0) :- ";
        cin >> check;
    }
}

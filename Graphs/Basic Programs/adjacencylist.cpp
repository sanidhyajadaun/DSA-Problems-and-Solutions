#include<iostream>
#include<vector>
using namespace std;


void connectEdges(vector<int> adjlist[])
{
    int E;
    //taking the number of edges as input
    cout << "Enter the number of Edges :- ";
    cin >> E;

    // taking the input of the connected edges
    for(int i=0;i<E;i++){
        int u,v;
        cout << "Enter u - ";
        cin >> u; 
        cout << "Enter v - ";
        cin >> v;
        
        // storing the connected edges
        adjlist[u].push_back(v);
    }
}

void display(vector<int> adjlist[],int n)
{
    // displaying the adjcency list
    cout << endl << endl <<"Displaying the adjacency list :- ";
    for(int i=0;i<n;i++)
    {
        cout << i  << "-->";
        for(int j=0;j<adjlist[i].size();j++)
        {
            cout << adjlist[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    cout << "\n\n\t\t-----------------------------------" << endl;
    cout << "\t\tGraph Creation using Adjacency list" << endl;
    cout << "\t\t-----------------------------------" << endl;

    //taking input of number of nodes
    int n;
    cout << "Enter the number of Nodes :- ";
    cin >> n;

    //defining the adjacency list
    vector<int> adjlist[n];

    // creating and connecting the edges
    connectEdges(adjlist);

    // Displaimg the adjacency list
    display(adjlist,n);

    return 0;
}
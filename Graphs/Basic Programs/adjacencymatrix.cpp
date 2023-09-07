#include<iostream>
#include<vector>
using namespace std;

int main()
{
    cout << "\n\n\t\t-------------------------------------" << endl;
    cout << "\t\tGraph Creation using Adjacency Matrix" << endl;
    cout << "\t\t-------------------------------------" << endl;

    int n,m;
    cout << endl;
    cout << "Enter the number of Nodes :- ";
    cin >> n;
    cout << "Enter the number of Edges :- ";
    cin >> m; 

    // starting from 1 index
    int adj[100][100];

    if(n>100 || m>100){
        cout << "Not enough memory space";
    }

    cout << endl << "Taking Input" << endl;
    // Taking input in the adjacency matrix
    for(int i=0;i<m;i++)
    {
        int u,v;
        // Taking input of the nodes
        cin >> u >> v;
        
        // marking them as 1 
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    cout << endl << "Adjacency Matrix :- " << endl;
    // Displaying the adjacency matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cout<<adj[i][j];
        }
        cout << endl;
    }
    return 0;

}
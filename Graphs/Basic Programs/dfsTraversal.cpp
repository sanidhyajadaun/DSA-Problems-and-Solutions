#include <iostream>
#include <vector>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool> &vis, vector<int> &ls)
{
    vis[node] = 1;
    ls.push_back(node);

    // traverse all its neighbour
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            dfs(it, adj, vis, ls);
        }
    }
}

// Function to return a list containing the DFS traversal of the graph.
vector<int> dfsTraversal(int V, vector<int> adj[])
{
    // Code here
    vector<bool> vis(V, false);
    int start = 0;
    vector<int> ls;
    dfs(start, adj, vis, ls);
    return ls;
}

int main()
{
    
    int V;
    cout << "Enter the number of edges: ";
    cin >> V;

    vector<int> adjlist[V];
    
    
    // defining the adjacency list
    
    for (int i = 0; i < V; i++)
    {
        int u, v;
        cin >> u >> v;
        // for directed graph
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }

    vector<int> ans = dfsTraversal(V, adjlist);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
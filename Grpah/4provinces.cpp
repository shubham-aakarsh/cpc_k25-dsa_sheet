#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], int vis[])
{
    vis[node] = 1;
    for (auto it : adj[node])
    {
        // dfs(it,adj,vis);
        if (!vis[it])
            dfs(it, adj, vis);
    }
}
// this means that finding the no of connectted component..
int numProvinces(vector<vector<int>> adj, int v)
{

    vector<int> adjlist[v];
    for (int i = 0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            if (adj[i][j] == 1 && i != j)
            {
                adjlist[i].push_back(j);
                adjlist[j].push_back(i);
            }
        }
    }
    int vis[v] = {0};
    int count = 0;
    for (int i = 0; i < v; i++)
    {
        if (!vis[i])
        {
            count++;
            dfs(i, adjlist, vis);
        }
    }
    return count;
}

int main(){

}
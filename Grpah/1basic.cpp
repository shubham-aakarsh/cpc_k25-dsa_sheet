#include<bits/stdc++.h>
using namespace std;


int main(){
    // int n,m; cin>>n>>m;
    // int adj[n+1][m+1];
    // // this is the way to store the graph...
    // // 1. adjacency matrix...
    // for(int i=0; i<m; i++){
    //     int u,v; cin>>u>>v;
    //     adj[u][v]=1;
    //     adj[v][u]=1;
    // }
    // method-2 using the adjacency list
    int n,m; cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0; i<m; i++){
        int u,v; cin>>u>>v;

        // if there is directed graph..... remove line no... 23 and t.c=o(e) else o(2e)
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}
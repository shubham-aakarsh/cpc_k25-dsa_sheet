#include<bits/stdc++.h>
using namespace std;

void dfshelper(int node,vector<int> adj[],int vis[],vector<int> &output){
    vis[node]=1;
    output.push_back(node);
    // traverse into its neighbour..
    for(auto it:adj[node]){
        if(!vis[it]) dfshelper(it,adj,vis,output);
    }
}
vector<int> dfs(int v,vector<int> adj[]){
    int vis[v]={0};
    int s=0; vector<int> output;
    dfshelper(s,adj,vis,output);
    return output;
}
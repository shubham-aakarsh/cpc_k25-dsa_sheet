#include<bits/stdc++.h>
using namespace std;


// detect cycle in the unidrected graph --using bfs...
bool detectcycle(int s,vector<int> adj[],int vis[]){
    vis[s]=1;
    queue<pair<int,int>> q;
    q.push({1,-1});
    while(!q.empty()){
        int nd=q.front().first;
        int pt=q.front().second;
        q.pop();
        // now traverse in the adj list
        for(auto ad:adj[nd]){
            if(!vis[ad]){
                vis[ad]=1;
                // pushing the node in the queue along with its parents..
                q.push({ad,nd}); 
            }
            // check wether its parents is same or not..
            else if(pt != ad) return true;
        }
    }
    return false;
}

bool iscycle(int v,vector<int>adj[]){
    // make sure that code work for the multiple connected component as well.
    int vis[v]={0};
    for(int i=0; i<v; i++){
        if(!vis[i]){
            if(detectcycle(i,adj,vis)) return true;
        }
    }
    return false;
}
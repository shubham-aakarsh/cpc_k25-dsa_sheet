#include<bits/stdc++.h>
using namespace std;

// T.C:- O(n)+O(2E)   S.C=O(3N)=N
vector<int> bfs(int v,vector<int> adj[]){
    int vis[v]={0};
    vis[0]=1;
    // starting vertex is 0 here....
    queue<int> q; q.push(0);
    vector<int> outputbfs;
    while(!q.empty()){
        int node=q.front(); q.pop();
        outputbfs.push_back(node);
        for(auto it:adj[node]){
            if(!vis[it]){
                // push into the queue and mark them visited
                vis[it]=1;
                q.push(it);

            }
        }
    }
    return outputbfs;
}

int main(){
    // write the main input and all 
}
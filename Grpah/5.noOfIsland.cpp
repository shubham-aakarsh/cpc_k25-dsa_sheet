#include<bits/stdc++.h>
using namespace std;

// finding the no of connected island...
void bfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>> graph){
    vis[r][c]=1;
    queue<pair<int,int>> q;
    q.push({r,c});
    int n=graph.size(); int m=graph[0].size();
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        
        // now we have to travel in all 8 directioon..
        for(int dr=-1; dr<=1; dr++){
            for(int dc=-1; dc<=1; dc++){
                int nr=r+dr; int nc=c+dc;
                if(nr>=0 and nr<n and nc>=0 and nc<m and graph[nr][nc]=='1' and !vis[nr][nc]){
                    vis[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        

    }
}
int noOfIsland(vector<vector<char>>&graph){
    int n=graph.size();
    int m=graph[0].size();
    // creating a visited matrix...
    vector<vector<int>> vis(n,vector<int>(m,0));

    int count=0;
    for(int r=0; r<n; r++){
        for(int c=0; c<m; c++){
            if(!vis[r][c] and graph[r][c]=='1'){
                count++;
                bfs(r,c,vis,graph);
            }
        }
    }
    return count;
}

int main(){

    
}
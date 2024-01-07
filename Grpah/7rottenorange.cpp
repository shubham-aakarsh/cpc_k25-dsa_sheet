#include<bits/stdc++.h>
using namespace std;

// find the min time to rotten the orange...
int rottenorange(vector<vector<int>>&gp){
    int n=gp.size();
    int m=gp[0].size();
    queue<pair<pair<int,int>,int>> q;
    int vis[n][m];
    // find the initial rotten position
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(gp[i][j]==2){
                q.push({{i,j},0});
                // mark them as visisted also
                vis[i][j]=2;
            }
            else vis[i][j]=0;
        }
    }

    int maxitime=0;
    int dr[]={-1,0,1,0};
    int dc[]={0,1,0,-1};
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int time=q.front().second;
        maxitime=max(maxitime,time);
        q.pop();
        // now traverse in all the four direction
        for(int i=0; i<4; i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            // check the valid condition
            if(nr>=0 and nr<n and nc>=0 and nc<m and vis[nr][nc]==0 and 
            gp[nr][nc]==1){
                q.push({{nr,nc},maxitime+1});
                vis[nr][nc]=2;
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m;j++){
            if(vis[i][j]==2 and gp[i][j]==1) return -1;
        }
    }
    return maxitime;
}
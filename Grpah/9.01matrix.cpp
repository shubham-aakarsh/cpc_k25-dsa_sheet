#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> matrix01(vector<vector<int>>g){
    // 3 matrix 1. vis. 2. output
    int n=g.size(); int m=g[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    vector<vector<int>> output(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;
    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(g[i][j]==1){
                q.push({{i,j},0});
                vis[i][j]=1;
            }
        }
    }
    int dr[]={-1,0,1,0}; int dc[]={0,1,0,-1};
    while(!q.empty()){
        int r=q.front().first.first;
        int c=q.front().first.second;
        int step=q.front().second;
        q.pop();
        output[r][c]=step;
        // traverse in all the four direction and find the distance...
        for(int i=0; i<4; i++){
            int nr=r+dr[i];
            int nc=c+dc[i];
            // check the validity conditon
            if(nr>=0 and nr<n and nc>=0 and nc<m and vis[nr][nc]==0){
                vis[nr][nc]=1;
                q.push({{nr,nc},step+1});
            }
        }
    }
    return output;
}
// t.c. :- o(n*m)== s.c. as well..
int main(){

}
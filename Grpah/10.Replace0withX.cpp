
#include<bits/stdc++.h>
using namespace std;

int dr[]={-1,0,1,0};
int dc[]={0,1,0,-1};
void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&mat){
    vis[r][c]=1;
    int n=mat.size(); int m=mat[0].size();
    // now traverse in the four direction...
    for(int i=0;  i<4; i++){
        int nr=dr[i]+r; int nc=dc[i]+c;
        // check the valid condition
        if(nr>=0 and nr<n and nc>=0 and nc<m and !vis[nr][nc] and mat[nr][nc]=='O'){
            // now call the dfs function again... with the nr and nc value
            dfs(nr,nc,vis,mat);
        }
    }
}
vector<vector<char>> fill(int n,int m,vector<vector<char>>mat){
    vector<vector<int>> vis(n,vector<int>(m,0));
    // traverse all the bounday and call the dfs function and mark then as not x
    for(int j=0; j<m; j++){
        if(!vis[0][j] and mat[0][j]=='O') dfs(0,j,vis,mat);

        // for the last row
        if(!vis[n-1][j] and mat[n-1][j]=='O') dfs(n-1,j,vis,mat);
    }
    // for the first and last column, call the same dfs function..
    for(int i=0; i<n; i++){
        if(!vis[i][0] and mat[i][0]=='O') dfs(i,0,vis,mat);
        if(!vis[i][m-1] and mat[i][m-1]=='O') dfs(i,m-1,vis,mat);
    }
    // atlasst whatever the o has been left in the input mat replace that with x and return them
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j] and mat[i][j]=='O') mat[i][j]=='X';
        }
    
    }
    return mat;
}

// t.c.:- o(n*m*4)+o(n)
int main(){

}
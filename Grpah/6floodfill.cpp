#include<bits/stdc++.h>
using namespace std;

void dfs(int row,int col,vector<vector<int>>&output,vector<vector<int>>&img,int newcol,int initial,
int dr[],int dc[]){
    output[row][col]=newcol;
    int n=img.size(); int m=img[0].size();
    // traverse in all the possible 4 directions...
    for(int i=0; i<4; i++){
        int nr=row+dr[i];
        int nc=col+dc[i];
        // check the valid condition..
        if(nr>=0 and nr<n and nc>=0 and nc<m and img[nr][nc]==initial and output[nr][nc]!=newcol){
            dfs(nr,nc,output,img,newcol,initial,dr,dc);
        }
    }
}
vector<vector<int>> flooffill(vector<vector<int>>&image,int sr,int sc,int newColor){
    int initialcolor=image[sr][sc];
    vector<vector<int>> output=image;
    int dr[]={-1, 0,1,0};
    int dc[]={0,1,0,-1};
    dfs(sr,sc,output,image,newColor,initialcolor,dr,dc);
    return output;
}

int main(){
    
}
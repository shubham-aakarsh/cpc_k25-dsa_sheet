//Merge two sorted array of size n and m
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n; int m; cin>>m;
    vector<int> a(n),b(m),res(n+m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m;i++) cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0; i<n; i++){
        res.push_back(a[i]);
    }
    for(int i=0; i<m; i++) res.push_back(b[i]);
    for(int i=0;i<res.size(); i++) cout<<res[i]<<" ";
    cout<<endl;
    return 0;

}
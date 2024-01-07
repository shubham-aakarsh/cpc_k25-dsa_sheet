
// Length of Unsorted array
#include<bits/stdc++.h>
using namespace std;

int lenofunsarr(vector<int>&a){
    int n=a.size();
    vector<int> t=a;
    sort(a.begin(),a.end());
    int s=0,e=0;
    for(int i=0; i<t.size();i++){
        if(t[i]!=a[i]){
            s=i; break;
        }
    }
    for(int i=t.size()-1; i>=0; i--){
        if(t[i]!=a[i]){
            e=i; break;
        }
    }
    return (e-s+1);
}
int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<lenofunsarr(a);
}
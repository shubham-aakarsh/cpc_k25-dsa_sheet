// count no of occurance of x in sortd array
#include<bits/stdc++.h>
using namespace std;
int bs(int *a,int s,int e,int key){
    if(s>e) return -1;
    int mid=(s+e)/2;
    if(a[mid]==key) return mid;
    if(a[mid]>key) return bs(a,s,mid-1,key);
    return bs(a,mid+1,e,key);
}
int occurance(int *a,int n,int key){
    int ind=bs(a,0,n-1,key);
    if(ind==-1) return 0;
    int cnt=1;
    int l=ind-1;
    while(l>=0 and a[l]==key){
        cnt++; l--;
    }
    int r=ind+1;
    while(r<n and a[r]==key) {
        cnt++; r++;
    }
    return cnt;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int key; cin>>key;
    int output=occurance(a,n,key);
    cout<<occurance(a,n,key)<<endl;
    return 0;

}
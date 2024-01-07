
// find the fixed point..
#include<bits/stdc++.h>
using namespace std;
int helper(int *a,int low,int high){
    if(low<=high){
       int mid=(low+high)/2;
       if(mid==a[mid]) return mid;
       int output=-1;
       if(mid+1<=a[high]) output=helper(a,mid+1,high);
       if(output != -1) return output;
       if(mid-1>=a[low]) return helper(a,low,mid-1);

    }
    return -1;
}

int main(){
    int n; cin>>n;
    // vector<int> a(n);
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<helper(a,0,n-1);
}
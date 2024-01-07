#include<bits/stdc++.h>
using namespace std;

#define ll long long
int binarysearch(vector<ll>&v,int k) {
        // code her
        int n=v.size();
        int h=n-1; int l=0; int mid;
        while(l<=h){
            mid=l+(h-l)/2;
            if(v[mid]==k) return mid;
            if(v[mid]<k) l=mid+1;
            else h=mid-1;
        }
        return -1;
    }
int main(){
    ll n; cin>>n;
    vector<ll> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    ll key; cin>>key;
    ll output=binarysearch(v,key);
    cout<<output<<endl;
    return 0;
} 

// check for the majority element in the array

#include<bits/stdc++.h>
using namespace std;
// approcah-1 using hashing..... 
int conuntmajority1(int *arr,int n){
    unordered_map<int,int> freq;
    for(int i=0; i<n; i++) {
        freq[arr[i]]++;
    }
  
    int check=n/2;

    for(auto it:freq){
        if(it.second>check) return it.first;
    }
    return -1;
}
// using moores law approach -2
int conuntmajority2(int *arr,int n){
    int count=0; int element;
    for(int i=0;i<n;i++){
        if(count==0){
            element=arr[i];
            count=1;
        }
        else if(arr[i]==element) count++;
        else count--;
    }
    int cnt=0;
    for(int i=0; i<n; i++){
        if(arr[i]==element) cnt++;
    }
    if(cnt>n/2) return element;
    return -1;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int ans=conuntmajority1(a,n);
    int ans1=conuntmajority2(a,n);
    cout<<ans<<endl;
    cout<<ans<<endl;
}
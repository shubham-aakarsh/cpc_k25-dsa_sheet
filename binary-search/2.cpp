// search an element in sorted and pivoted array
#include<bits/stdc++.h>
using namespace std;

// #define ll long long
int searchinrotatedarray(int *v,int n,int key){
    
    int low=0; int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(v[mid]==key) return true;
        if(v[low]==v[mid] and v[mid]==v[high]){
            low=low+1;
            high=high-1;
            continue;
        }
        // identify the sorted half
        if(v[low]<=v[mid]){
            // left part
            if(v[low]<=key and key<=v[mid]){
                high=mid-1;
            }
            else low=mid+1;
        }
        else{
            if(v[mid]<=key and key<=v[high]){
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n; cin>>n;
    int v[n];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int key; cin>>key;
    int output=searchinrotatedarray(v,n,key);
    cout<<output<<endl;
    return 0;
} 
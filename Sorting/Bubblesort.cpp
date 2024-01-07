#include<bits/stdc++.h>
using namespace std;


void bubblesort(int *arr,int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(arr[j]>arr[j+1]){
               // swap 
               int t=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=t;
            }
        }
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    bubblesort(arr,n);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
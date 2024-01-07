#include<bits/stdc++.h>
using namespace std;


// concept:- find the min element from the array and swap with the elem
//           at the beginning....

void selectionsort(int arr[],int n){
    // finding the min
    for(int i=0; i<n-1; i++){
        int min=arr[i]; int minindex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<min){
                min=arr[j];
                minindex=j;
            }
        }
        // swap
        int t=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=t;
    }
}
int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];
    selectionsort(arr,n);
    for(int i=0; i<n;i++) cout<<arr[i]<<" ";
    return 0;
}
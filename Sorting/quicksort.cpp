#include<bits/stdc++.h>
using namespace std;

int partionfun(int *a,int s,int e){
    // take initial elemet as pivotin
    int pvt=a[s];
    int count=0;
    for(int i=s+1; i<=e; i++){
        if(a[i]<=pvt) count++;
    }
    int pvt_indx=s+count;
    swap(a[s],a[pvt_indx]);
    // all smaller element in left rest in the right side of the pivot
    int i=s; 
    int j=e;
    while(i<pvt_indx and j>pvt_indx){
        while(a[i]<=pvt) i++;
        while(a[j]>pvt) j--;
        // else we have to swap the values..
        if(i<pvt_indx and j>pvt_indx){
            swap(a[i++],a[j--]);
        }
    }
    return pvt_indx;
}
void quicksorthelper(int *a,int s,int e){
    if(s>=e) return;
    int partionpoint=partionfun(a,s,e);
    quicksorthelper(a,s,partionpoint);
    quicksorthelper(a,partionpoint+1,e);
}
void quicksort(int *a,int n){
    if(n==0  or n==1) return;;
    quicksorthelper(a,0,n-1);
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    quicksort(a,n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    return 0;
}
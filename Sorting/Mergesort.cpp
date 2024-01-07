#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// t.c.=o(nlogn), s.c=o(n)--
void merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int l1=mid-s+1; int l2=e-mid;
    int a1[l1]; int a2[l2];
    int k=s;
    for(int i=0; i<l1;i++) a1[i]=a[k++];
    k=mid+1;
    for(int i=0; i<l2; i++) a2[i]=a[k++];

    // simply merge the both array...
    int i1=0;
    int i2=0;
    k=s;
    while(i1<l1 and i2<l2){
        if(a1[i1]<a2[i2]) a[k++]=a1[i1++];
        else a[k++]=a2[i2++];
    }
    while(i1<l1){
        a[k++]=a1[i1++];
    }
    while(i2<l2) {
        a[k++]=a2[i2++];
    }
}
void mergesorthelper(int *a,int s,int e){
    if(s>=e) return;
    int mid=(s+e)/2;
    mergesorthelper(a,s,mid);
    mergesorthelper(a,mid+1,e);
    merge(a,s,e);


}
void mergesort(int *a,int n){
    if(n==0 or n==1) return;
    mergesorthelper(a,0,n-1);
}

int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    mergesort(a,n);
    for(int i=0; i<n;i++) cout<<a[i]<<" ";
    return 0;
}
// mergee sort..


#include<bits/stdc++.h>
using namespace std;
void merge(int *arr1, int size1, int *arr2, int size2, int *ans)
{
    //Write your code here    
    int i=0;
    int j=0;
     int k=0; // for the maintaining the indexing of the  ans array
    // int n=size1+size2;
    // ans[n]={};
    
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            ans[k]=arr1[i];
            k++;
            i++;
        }
        else{
            ans[k]=arr2[j];
            k++;
            j++;
        }
        
    }
        // if the element is left in the first array then copy all the element in the ans array
        while(i<size1){
            ans[k]=arr1[i];
            k++;
            i++;
        }
        // if the element is left in the second array then copy all the element in the ans array
        while(j<size2){
            ans[k]=arr2[j];
            k++;
            j++;
        }
    
}

int main(){
    
}
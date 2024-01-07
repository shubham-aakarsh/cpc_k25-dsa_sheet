#include<bits/stdc++.h>
using namespace std;


void countingsort(vector<int> &a){
    int n=a.size();
    // find the max and min element
    int maxi=*max_element(a.begin(),a.end());
    int mini=*min_element(a.begin(),a.end());

    // initilaise the freq array
    vector<int> freq(maxi-mini+2);
    for(int i=0; i<n;i++){
        freq[a[i]-mini]++;
    }
    // print the sorted.. 
    // before printing the outpur,, add the mini as well.
    for(int i=0; i<freq.size(); i++){
        for(int j=0; j<freq[i]; j++){
            cout<<(i+mini)<<" ";
        }
    }
    cout<<endl;
}



int main(){
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0; i<n;i++) cin>>a[i];
    countingsort(a);
  
    return 0;
}
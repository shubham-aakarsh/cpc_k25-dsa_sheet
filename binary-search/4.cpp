// floor and ceiling value of the sorted array
// ceil- smallest element just greater than the key.. just like upper boound. 
// floor 
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    int key; cin>>key;
    sort(a.begin(),a.end());

    if(binary_search(a.begin(),a.end(),key)) cout<<"yes elem present"<<endl;
    else cout<<"ele not present"<<endl;

    cout<<lower_bound(a.begin(),a.end(),key)-a.begin();
    cout<<upper_bound(a.begin(),a.end(),key)-a.begin();
    return 0;
};
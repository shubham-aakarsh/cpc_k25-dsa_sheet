#include<bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(lb==nums.size() or nums[lb] != target) return {-1,-1};
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        return {lb,ub-1};
}
int main(){
       int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // cout<<searchRange(a);
    int key; cin>>key;
    vector<int> output=searchRange(a,key);
}
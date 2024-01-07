#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            // now we have to indentifiy the sorted half
            if(nums[low]<=nums[mid]){
                // left half
                if(nums[low]<=target and target<=nums[mid]) high=mid-1;
                else low=mid+1;
            }
            else{
                // right half
                if(nums[mid]<=target and target<=nums[high]) low=mid+1;
                else high=mid-1;
            }
        }
        return -1;
    }

    int main(){
       int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    // cout<<searchRange(a);
    int key; cin>>key;
    int  output=search(a,key);
}
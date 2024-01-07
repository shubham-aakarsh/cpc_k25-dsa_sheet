#include<bits/stdc++.h>
using namespace std;

 long helper(vector<int> &piles,int hour){
        long totalhour=0;
        for(int i=0;i<piles.size(); i++){
            totalhour+=ceil((double)piles[i]/(double)hour);
        }
        return totalhour;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // find the maximum from the array
        int maxi=INT_MIN;
        for(int i=0; i<piles.size(); i++) maxi=max(maxi,piles[i]);
        int low=1;
        int ans=-1;
        int high=maxi;
        while(low<=high){
            int mid=(low+high)/2;
            long totalhour=helper(piles,mid);
            if(totalhour<=h) {
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int main(){
        
    }
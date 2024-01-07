
#include <bits/stdc++.h>
using namespace std;
int setBits(int N) {
        
        int count = 0;
        string ans = "";
        // store all the binary and count the no of 1
        while(N != 0){
            ans += to_string((N%2));
            N /= 2;
        }
        for(int i = 0; i<ans.length(); i++){
            if(ans[i] == '1') count++;
        }
        return count;
    }
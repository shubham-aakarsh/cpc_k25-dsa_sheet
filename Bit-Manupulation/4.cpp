

#include <bits/stdc++.h>
using namespace std;

int countBitsFlip(int a, int b){
        
        // Your logic here
        int res = a^b;
        int count=0;
        while(res!=0)
        {
            count++;
            res&=(res-1);
        }
        return count;
    }


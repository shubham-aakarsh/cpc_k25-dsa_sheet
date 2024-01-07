#include <bits/stdc++.h>
using namespace std;

long long reversedBits(long long X) {
        // code here
        long long  c=0;
        long long x=0;
        while(X){
            x=x<<1;
            c++;
            if(X&1) x=x^1;
            X=X>>1;
        }
        x=x<<(32-c);
        return x;
}
#include <bits/stdc++.h>
using namespace std;

/* TLE */
int countSetBits(int n){
    // Your logic here
    if( n == 0 )
        return 0;
    int ans = 0,x;
    for(int i=1;i<=n;i++){
       x  = i;
       while(x > 0)
       {
           ans += x & 1;
           x = x >> 1;
       }
    }
    return ans;
}

/* SOL */
int countSetBits(int n){
        // Your logic here
    if(n < 2) 
        return n;
    int x = log2(n);
    int ans = pow(2,x-1) * x;
    ans += n - pow(2,x) + 1;
    ans += countSetBits(n - pow(2,x));
    return ans;
}
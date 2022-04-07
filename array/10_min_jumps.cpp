#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int m = arr[0],steps = arr[0],jumps = 1;
        if(n == 0 || n == 1)
            return 0;
        if(!arr[0])
            return -1;
        for(int i=1;i<n-1;i++){
            m = max(m,arr[i]+i);
            steps--;
            if(m == n)
                return jumps+1;
            if(!steps){
                steps = m - i;
                jumps++;
                if(i >= m)
                    return -1;
            }
        }
        return jumps;
    }
};

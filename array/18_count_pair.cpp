#include <bits/stdc++.h>
using namespace std;

int getPairsCount(int arr[], int n, int k) {
        int ans=0;
        unordered_map <int,int> dp;
        for(int i=0;i<n;i++){
            int temp = arr[i];
            if(dp[k-temp])
                ans+=dp[k-temp];
            dp[temp]++;
        }
        return ans;
}
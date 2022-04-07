#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int dp[10001];
    int helper(int arr[], int n)
    {
        if(n < 0)
            return 0;
        if(dp[n] != -1)
            return dp[n];
        return dp[n] = max(arr[n-1] + helper(arr,n-2), helper(arr,n-1));
    }
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n){
        // Your code here
        memset(dp,-1,sizeof(dp));
        return helper(arr,n);
    }
};

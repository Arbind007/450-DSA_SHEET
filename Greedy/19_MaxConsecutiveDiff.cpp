#include <bits/stdc++.h>
using namespace std;

long long int maxSum(int arr[], int n)
{
    vector <int> ans;
    sort(arr,arr+n);
    long long int cnt = 0;
    for(int i=0;i<=n/2;i++){
        ans.push_back(arr[i]);
        ans.push_back(arr[n-i-1]);
    }
    for(int i=1;i<n;i++)
        cnt += abs(ans[i] - ans[i-1]);
    cnt += abs(ans[n-1] - ans[0]);
    return cnt;
}
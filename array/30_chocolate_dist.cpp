#include <bits/stdc++.h>
using namespace std;

long long findMinDiff(vector<long long> a, long long n, long long m){
    int ans = INT_MAX;
    sort(a.begin(),a.end());
    for(long long i=0;i<=n-m;i++){
        int diff = a[m+i-1] - a[i];
        ans = min(diff,ans);
    }
    return ans;
}
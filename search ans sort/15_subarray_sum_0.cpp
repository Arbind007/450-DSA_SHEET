#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll findSubarray(vector<ll> arr, int n ){
    ll sum=0,cnt=0;
    unordered_map<ll,ll>mp;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == 0)
            cnt++;
        cnt += mp[sum];
        mp[sum]++;
    }
    return cnt;
}
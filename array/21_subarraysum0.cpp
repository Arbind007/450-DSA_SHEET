#include <bits/stdc++.h>
using namespace std;

bool subArrayExists(int arr[], int n){
    unordered_map <int,bool> mp;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == 0)
            return true;
        if(mp[sum])
            return true;
        mp[sum] = true;
    }
    return false;
}
#include<bits/stdc++.h>
using namespace std;

bool findPair(int arr[], int n, int k){
    if(k == 0)
        return false;
    unordered_map <int,bool> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]] = true;
    for(int i=0;i<n;i++){
        if(mp[arr[i] + k])
            return true;
    }
    return false;
}
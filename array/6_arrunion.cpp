#include <bits/stdc++.h>
using namespace std;

int solve(vector <int>& a, int n,vector <int>& b,int m){
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++)
        mp[a[i]]++;
    for(int i=0;i<m;i++)
        mp[b[i]]++;
    return mp.size();
}

int main(){
    vector <int> a = {1,2,3,4,5};
    vector <int> b = {1,2,3};
    cout << solve(a,a.size(),b,b.size());
    return 0;
}
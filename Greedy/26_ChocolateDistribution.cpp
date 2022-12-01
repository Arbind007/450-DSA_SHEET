#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(),a.end());
        int i = 0,j = m -1;
        long long int mn = INT_MAX;
        while(j < n){
            mn = min(mn,a[j] - a[i]);
            i++,j++;
        }
        return mn;
    }   
};
#include <bits/stdc++.h>
using namespace std;

int find_median(vector<int> v){
    sort(v.begin(),v.end());
    if(v.size() % 2)
        return v[v.size()/2];
    else
        return (v[v.size()/2] + v[v.size()/2 - 1])/2;
}
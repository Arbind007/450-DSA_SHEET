#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> &v){
    int mn = INT_MAX,mx = INT_MIN;
    for(auto &it:v){
        mn = min(mn,it);
        mx = max(mx,it);
    }
    cout << mn << " ";
    return mx;
}

int main(){
    vector <int> v = {1,2,3,4};
    cout << solve(v) << endl;
    return 0;
}
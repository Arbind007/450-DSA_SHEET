#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> v,int l,int t){
    int s = 0,e = 0,currsum = 0,ans = l+1;
    while(e<l){
        while(currsum <= t && e < l)
            currsum += v[e++];
        while(currsum > t && s < l){
            ans = min(ans,e-s);
            currsum -= v[s++];
        }
    }
    return ans;
}

int main(){
    vector <int> v = {1, 4, 45, 6, 10, 19};
    int k = 51;
    cout << solve(v,v.size(),k);
    return 0;
}
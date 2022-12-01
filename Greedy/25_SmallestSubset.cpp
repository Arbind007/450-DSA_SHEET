#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0;
    vector <int> v = {2,1,2};
    for(auto i:v)
        ans += v[i];
    sort(v.begin(),v.end(),greater <int> ());
    int tmp = 0,cnt = 0;
    while( tmp <= ans ){
        tmp += v[cnt];
        ans -= v[cnt];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
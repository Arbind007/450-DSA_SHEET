#include <bits/stdc++.h>
using namespace std;

int maxstocks(vector <int> v,int k){
    int ans = 0,tmpno;
    vector <pair<int,int>> tmp;
    for(int i=0;i<v.size();i++)
        tmp.push_back({v[i],i+1});
    sort(v.begin(),v.end());
    for(int i=0;i<tmp.size();i++){
        if(tmp[i].first > k)
            break;
        tmpno = k/tmp[i].first;
        tmpno = min(tmpno,tmp[i].second);
        ans += tmpno; 
        k -= tmp[i].first * tmpno;
    }
    return ans;
}

int main(){
    vector <int> v = { 7, 10, 4};
    int k = 100;
    cout << maxstocks(v,k) << endl;
    return 0;
}
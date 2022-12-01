#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,4,8};
    sort(v.begin(),v.end());
    vector <int> tmp;
    int n = v.size(),sum=0;
    for(int i=0;i<n/2;i++){
        tmp.push_back(v[i]);
        tmp.push_back(v[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout << tmp[i] << " ";
    }
    cout << endl;
    for(int i=1;i<n;i++)
        sum += abs(tmp[i] - tmp[i-1]);
    sum += abs(tmp[n-1] - tmp[0]);
    cout << sum << endl;
    return 0;
}
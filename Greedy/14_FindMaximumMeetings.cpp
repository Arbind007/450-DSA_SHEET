#include <bits/stdc++.h>
using namespace std;

vector <int> maxMeeting(vector <int> s,vector <int> f,int n){
    vector<vector<int>> v;
    vector <int> tmp(3);
    vector <int> ans;
    for(int i=0;i<n;i++){
        tmp[0] = f[i];
        tmp[1] = s[i];
        tmp[2] = i+1;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end(),[&](vector <int> a,vector <int> b){
        if(a[0] == b[0])
            return a[1] < b[1];
        return a[0] < b[0];
    });
    // for(auto it:v){
    //     for(auto jt:it)
    //         cout << jt << " ";
    //     cout << endl;
    // }
    int timeLimit = v[0][0];
    ans.push_back(v[0][2]);
    for(int i=1;i<n;i++){
        if(timeLimit <= v[i][1]){
            ans.push_back(v[i][2]);
            timeLimit = v[i][0];
        }
    }
    return ans;
}

int main(){
    vector <int> s = {75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924};
    vector <int> f = {112960, 114515, 81825, 93424, 54316, 35533, 73383, 160252};
    int n = s.size();
    vector <int> ans = maxMeeting(s,f,n);
    for(auto &it:ans)
        cout << it << " ";
    return 0;
}
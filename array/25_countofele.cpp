#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector <int> &v,int k){
    unordered_map <int,int> ump;
    for(auto &it:v)
        ump[it]++;
    int temp = v.size()/k;
    v.clear();
    for(auto &it:ump){
        if(it.second > temp)
            v.push_back(it.first);
    }
    return v;
}

int main(){
    vector <int> v = {3, 1, 2, 2, 1, 2, 3, 3};
    int k = 4;
    vector <int> ans = solve(v,4);
    for(auto &i:ans)
        cout << i << " ";
    return 0;
}
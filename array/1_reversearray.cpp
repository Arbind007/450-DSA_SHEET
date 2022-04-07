#include <bits/stdc++.h>
using namespace std;

void solve(vector <int> &v){
    int i=0,j=v.size()-1,temp;
    while(i<j){
        temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--;
    }
    return;
}

int main(){
    vector <int> v = {1,2,3,4};
    solve(v);
    for(auto i : v)
        cout << i << " ";
    return 0;
}
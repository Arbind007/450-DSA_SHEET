//dutch natinal flag
#include <bits/stdc++.h>
using namespace std;

void solve(vector <int>& a, int n){
    int i=0,m=0,h=n-1;
    while(m<=h){
        if(a[m] == 0)
            swap(a[i++],a[m++]);
        else if(a[m] == 1)
            m++;
        else
            swap(a[m],a[h--]);
    }
}

int main(){
    vector <int> a = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    solve(a,a.size());
    for(auto &it:a)
        cout << it << " ";
    return 0;
}
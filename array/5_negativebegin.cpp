#include <bits/stdc++.h>
using namespace std;

void solve(vector <int>& a, int n){
    int i=0,k=0;
    while(i<n){
        if(a[i] < 0 && i!=k)
            swap(a[i],a[k]),k++;
        i++;
    }
    
}

int main(){
    vector <int> a = {12, 11, -13, -5, 6, -7, 5, -3, -6};
    solve(a,a.size());
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    return 0;
}
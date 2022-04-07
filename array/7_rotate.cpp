#include <bits/stdc++.h>
using namespace std;

void solve(vector <int>& arr, int n){
    int temp = arr[n-1];
    for(int i=n-2;i>=0;i--){
        arr[i+1] = arr[i];
    }
    arr[0] = temp;
}

int main(){
    vector <int> a = {1,2,3,4,5};
    solve(a,a.size());
    for(int i=0;i<a.size();i++)
        cout << a[i] << " ";
    return 0;
}
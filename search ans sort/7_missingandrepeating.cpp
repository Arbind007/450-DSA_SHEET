/* Method 1 */
#include <bits/stdc++.h>
using namespace std;

int *findTwoElement(int *arr, int n) {
    int* ans = new int[2];
    unordered_map <int,int> mp;
    for(int i=1;i<=n;i++)
        mp[i]++;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    for(auto &it:mp){
        if(it.second == 3)
            ans[0] = it.first;
        if(it.second == 1)
            ans[1] = it.first;
    }
    
    return ans;
}

/* Method 2 */
int *findTwoElement(int *arr, int n) {
    int* ans = new int[2];
    unordered_map <int,int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    for(auto &it:mp){
        if(it.second == 2)
            ans[0] = it.first;
    }
    for(int i=1;i<=n;i++){
        if(mp.find(i) == mp.end()){
            ans[1] = i;
            break;
        }
    }
    return ans;
}
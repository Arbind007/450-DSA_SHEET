#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int n){
    if(!n || n==1)
        return n;
    sort(arr,arr+n);
    int ans=1,temp = arr[0],count=1;
    for(int i=1;i<n;i++){
        if(arr[i] == temp)
            continue;
        else if(arr[i] == temp+1)
            count++,temp++;
        else
            ans = max(count,ans),count=1,temp = arr[i];
    }
    ans = max(count,ans);
    return ans;
}
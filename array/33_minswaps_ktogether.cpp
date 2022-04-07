#include<bits/stdc++.h>
using namespace std;

int minSwap(int arr[], int n, int k) {
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(arr[i] <= k)
            cnt++;
    int temp = 0;
    for(int i=0;i<cnt;i++)
        if(arr[i] > k)
            temp++;
    int ans = temp,i=0;
    for(int j=cnt;j<n;j++){
        if(arr[j] > k)
            temp++;
        if(arr[i] > k)
            temp--;
        ans = min(ans,temp);
        i++;
    }
    return ans;
}
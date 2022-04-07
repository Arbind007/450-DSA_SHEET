#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr+n);
        int maxele,minele;
        int result = arr[n-1] - arr[0];
        for(int i =1; i<n; i++){
            if(arr[i]>=k){
                maxele = max(arr[i-1]+k,arr[n-1]-k);
                minele = min(arr[i]-k,arr[0]+k);
                result = min(result,maxele-minele);
            }
        }
        return result;
    }
};
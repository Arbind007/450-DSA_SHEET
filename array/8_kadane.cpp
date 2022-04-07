//13 repeat

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector <int> &arr, int n){
    long long sum = 0,ans=INT_MIN;
    for(int i=0;i<n;i++){
        sum += arr[i];
        ans = max(ans,sum);
        if(sum < 0)
            sum = 0;
    }
    return ans;
}

int main(){
    vector <int> a = {1,2,3,-2,5};
    cout << maxSubarraySum(a,a.size()) << endl;
    return 0;
}
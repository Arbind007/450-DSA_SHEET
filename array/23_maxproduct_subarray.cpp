#include <bits/stdc++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n) {
	long long ans = arr[0],mx = arr[0],mn = arr[0];
	for(int i=1;i<n;i++){
	    if(arr[i] < 0)
	        swap(mx,mn);
	    long long temp = arr[i];
	    mx = max(temp,mx*temp);
	    mn = min(temp,mn*temp);
	    ans = max(ans,mx);
	}
	return ans;
}
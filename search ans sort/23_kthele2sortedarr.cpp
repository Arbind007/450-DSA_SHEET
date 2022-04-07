#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int t)
    {
        int i = 0, j = 0, k = n - 1;
	    while(i <= k && j<m){
	        if(arr1[i] > arr2[j])
	            swap(arr1[k--],arr2[j++]);
	        else
	            i++;
	    }
	    sort(arr1,arr1+n);
	    sort(arr2,arr2+m);
	    if(t > n)
	        return(arr2[t - n - 1]);
	    return(arr1[t-1]);
    }
};

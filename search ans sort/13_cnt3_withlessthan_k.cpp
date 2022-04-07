#include <bits/stdc++.h>
using namespace std;

class Solution{
	public:
	long long countTriplets(long long A[], int n, long long X)
	{
	    // Your code goes here
	    sort(A,A+n);
	    int cnt=0;
        for(int i=0;i<n-2;i++){
            int low = i+1,high=n-1;
            while(low<high){
            long long temp = A[low] + A[high] + A[i];
            if(temp < X)
                cnt += (high-low),low++;
            else 
                high--;
            }
        }
    return cnt;
	}
};



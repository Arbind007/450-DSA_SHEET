#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	int j = m - 1;
    int ans = -1;
    for(int i = 0; i < n; i++){
        while(arr[i][j])
            ans = i,j--;
        if(j < 0)
           return i;
    }
    return ans;
    }
};
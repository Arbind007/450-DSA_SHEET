#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> arr1,vector <int> arr2,int n,int m){
	int i = 0, j = 0, k = n - 1,sum=0;
	while(i <= k && j<m){
	   if(arr1[i] > arr2[j])
	       swap(arr1[k--],arr2[j++]);
	   else
	       i++;
	}
	sort(arr1.begin(),arr1.end());
	sort(arr2.begin(),arr2.end());
	for(int i=0;i<n;i++){
	    cout << arr1[i] << " ";
	}
	for(int i=0;i<m;i++){
	    cout << arr2[i] << " ";
	}
	cout << endl;
	sum = n+m;
	if(sum % 2){
	    if(sum/2 < n){
	        return arr1[sum/2];
	    }
	    else{
	        return arr2[sum/2-n];
	    }
	}
	else{
	    int temp1 = sum/2 - 1,temp2 = sum/2;
	    if(temp1 < n){
	        temp1 = arr1[temp1];
	    }
	    else{
	        temp1 = arr2[temp1-n];
	    }
	    if(temp2 < n){
	        temp2 = arr1[temp2];
	    }
	    else{
	        temp2 = arr2[temp2-n];
	    }
	    return (temp1 + temp2)/2;
	}
	return -1;
}

int main(){
    vector <int> v1 = {2, 3, 5, 8};
    vector <int> v2 = {10, 12, 14, 16}; 
    cout << solve(v1,v2,v1.size(),v2.size()) << endl;
    return 0;
}
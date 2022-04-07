#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    void swap(vector<int> &arr,int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int ans=0;
	    map <int, int> mp;
	    for(int i=0;i<nums.size();i++)
	        mp[nums[i]] = i;
	    vector <int> temp = nums;
	    sort(temp.begin(),temp.end());
	    for(int i=0;i<nums.size();i++){
	        if(nums[i] != temp[i]){
	            ans++;
	            int tmp = nums[i];
	            swap(nums,i,mp[temp[i]]);
	            mp[tmp] = mp[temp[i]];
	            mp[temp[i]] = i;
	        }
	    }
	    return ans;
	}
};

int main(){
	int tc=1;
	// cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
} 
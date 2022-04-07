#include<bits/stdc++.h>
using namespace std;

class Solution
{
    int setBit(int n,int pos){
        return ((n & (1 << pos)) != 0);
    }
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int res = 0;
        for(int i=0;i<nums.size();i++){
            res ^= nums[i];
        }
        int setbit = 0;
        int pos = 0;
        int tempres = res;
        while(setbit != 1){
            setbit = res & 1;
            pos++;
            res = res >> 1;
        }
        int nres = 0;
        for(int i=0;i<nums.size();i++){
            if(setBit(nums[i],pos-1))
                nres ^= nums[i];
        }
        vector <int> ans;
        ans.push_back(nres ^ tempres);
        ans.push_back(nres);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
} 
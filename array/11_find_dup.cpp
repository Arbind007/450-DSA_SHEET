#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n+1,0);
        for(int i=0;i<nums.size();i++)
        {
            if(v[nums[i]]!=0)
            {
                return nums[i];
            }
            else
            {
                v[nums[i]]++;
            }    
        }
        return -1;
    }
};
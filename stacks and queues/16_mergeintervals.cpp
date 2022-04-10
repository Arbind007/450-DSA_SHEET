#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector <vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        ans.push_back({intervals[0][0],intervals[0][1]});
        if(n == 1)
            return ans;
        int temp = 0,i=1;
        while(i<n){
            if(intervals[i][0] <= ans[temp][1])
                ans[temp][1] = max(ans[temp][1],intervals[i][1]),i++;
            else
                ans.push_back({intervals[i][0],intervals[i][1]}),++temp;
        } 
        return ans;
    }
};
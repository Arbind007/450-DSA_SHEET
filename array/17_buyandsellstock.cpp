#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1,ans = 0,temp = prices[0],mx=0;
        while(i < prices.size()){
            if(prices[i] > temp)
                mx = max(mx,prices[i] - temp);
            else
                temp = prices[i];
            i++;
        }
        return mx;
    }
};
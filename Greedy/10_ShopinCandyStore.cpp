#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int minCost(int candies[],int N,int k){
        int i=0,j=N-1,ans=0;
        while(i <= j){
            ans += candies[i];
            j -= k;
            i++;
        }
    return ans;
    }
    int maxCost(int candies[],int N,int k){
        int i=0,j=N-1,ans=0;
        while(i <= j){
            ans += candies[j];
            i += k;
            j--;
        }
    return ans;
    }
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector <int> ans;
        sort(candies,candies+N);
        ans.push_back(minCost(candies,N,K));
        ans.push_back(maxCost(candies,N,K));
        return ans;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        priority_queue <long long, vector <long long>, greater <long long> > pq;
        long long tmp,ans = 0;
        for(long long i=0;i<n;i++)
            pq.push(arr[i]);
        while(pq.size() != 1){
            tmp = pq.top();
            pq.pop();
            tmp += pq.top();
            pq.pop();
            pq.push(tmp);
            ans += tmp;
        }
        return ans;
    }
};
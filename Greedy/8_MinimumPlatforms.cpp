#include <bits/stdc++.h>
using namespace std;

class Solution{
    static bool comp(pair <int,int> &a,pair <int,int> & b){
        if(a.first == b.first)
            a.second < b.second;
        return a.first < b.first;
    }
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector <pair <int,int>> v;
    	for(int i=0;i<n;i++)
    	    v.push_back({arr[i],dep[i]});
    	sort(v.begin(),v.end(),comp);
    	priority_queue <int, vector <int>, greater <int>> pq;
    	pq.push(v[0].second);
    	for(int i=1;i<n;i++){
    	    if(v[i].first > pq.top())
    	        pq.pop();
    	    pq.push(v[i].second);
    	}
    	return pq.size();
    }
};
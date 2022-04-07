#include <bits/stdc++.h>
using namespace std;

class Solution{
    int count(int n){
        int c=0;
        while(n){
            if(n&1)
                c++;
            n=n>>1;
        }
        return c;
    }
    public:
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        multimap<int,int,greater<int>>mp;
        for(int i=0;i<n;i++){
            mp.insert({count(arr[i]),arr[i]});
        }
        int i=0;
        auto it=mp.begin();
        while(it!=mp.end()){
            arr[i++]=it->second;
            it++;
        }
    }
};
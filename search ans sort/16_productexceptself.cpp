#include <bits/stdc++.h>
using namespace std;

vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
    //code here        
    long long int temp;
    vector<long long int> v;
   
    for(int i = 0; i < n; i++)
    {
        temp = 1;
        for(int j = 0; j < n; j++)
        {
            if(j != i)
                temp *= nums[j];
        }
        v.push_back(temp);
    }
    return v;
}
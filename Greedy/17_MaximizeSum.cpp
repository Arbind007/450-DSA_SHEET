#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int Maximize(int a[],int n)
    {
        // Complete the function
        long long int sum = 0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            sum += a[i] * i;
            sum = sum % 1000000007;
        }
        return (int)sum;
    }
};
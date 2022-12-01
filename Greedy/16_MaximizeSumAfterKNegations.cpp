#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        int sum=0,i=0;
        sort(a,a+n);
        while(i < n && a[i] <= 0) 
            i++;
        reverse(a, a+i);     
        for(int i=n-1; i>=0; i--){
            if(a[i] < 0 && k){
                sum -= a[i];
                k--;
            }
            else
                sum += a[i];
        }
        if(k % 2){
            if(a[0] > 0)
                a[0] = -a[0];
            sum += 2 * a[0];
        }
        return sum;
    }
};
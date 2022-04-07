#include <bits/stdc++.h>
using namespace std;

int majorityElement(int a[], int n){
    sort(a,a+n);
    int count;
    for(int i=0;i<n;i++){
        count=1;
        while(i<n-1 && a[i]==a[i+1])
            i++,count++;
        if(count>n/2)
            return a[i];
    }
    return -1;
}

// https://www.geeksforgeeks.org/boyer-moore-majority-voting-algorithm/
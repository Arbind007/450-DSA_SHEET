#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int n, int X){
    sort(A,A+n);
    for(int i=0;i<n-2;i++){
        int low = i+1,high=n-1;
        while(low<high){
            int temp = A[low] + A[high] + A[i];
            if(temp == X)
                return true;
            else if(temp < X)
                low++;
            else 
                high--;
        }
    }
    return false;
}
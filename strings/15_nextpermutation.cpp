#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
       int i=n-2;
      while(i>=0 && arr[i]>=arr[i+1])
       i--;
       if(i==-1){
           sort(arr.begin(),arr.end());
           return arr;
       }
       for(int k=n-1;k>i;k--)
           if(arr[k]>arr[i]){
               swap(arr[k],arr[i]);
               break;
           }
       reverse(arr.begin()+i+1,arr.end());
       return arr;
   }
};
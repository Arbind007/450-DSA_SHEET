#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>& arr,int a, int b){
    int low = 0,high = arr.size() - 1,mid = 0;
    while(mid <= high){
        if(arr[mid] < a){
            swap(arr[mid++],arr[low++]);
        }
        else if(arr[mid] >= a && arr[mid] <=b){
            mid++;
        }
        else{
            swap(arr[mid],arr[high--]);
        }
    }
}
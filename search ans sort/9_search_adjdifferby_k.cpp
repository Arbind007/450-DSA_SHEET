#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int x,int k){
    int i=0;
    while(i<n){
        if(arr[i] == x)
           return i;
        i += max(1,(x-arr[i])/k);
    }
    return -1;
}

int main()
{
    int arr[] = {20, 40, 50, 70, 70, 60};
    int x = 60;
    int k = 20;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << search(arr, n, x, k) << endl;
    return 0;
}
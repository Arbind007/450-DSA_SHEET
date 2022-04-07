#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
    // code here
    int f = -1, l = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == x && f == -1)
            f = l = i;
        else if(arr[i] == x && f != -1)
            l = i;
        else if(arr[i] > x)
            break;
    }
    vector <int> v;
    v.push_back(f);
    v.push_back(l);
    return v;
}

//optimized
vector<int> find(int arr[], int n , int x )
{
    // code here
    int f = -1, l = -1,i=0,j=n-1,mid;
    while(i<=j){
        mid = i + (j - i)/2;
        if(arr[mid] == x)
            f = mid,j = mid-1;
        else if(arr[mid] > x)
            j = mid-1;
        else
            i = mid+1;
    }
    i=0,j=n-1;
    while(i<=j){
        mid = i + (j - i)/2;
        if(arr[mid] == x)
            l = mid,i = mid+1;
        else if(arr[mid] > x)
            j = mid-1;
        else
            i = mid+1;
    }
    vector <int> v;
    v.push_back(f);
    v.push_back(l);
    return v;
}


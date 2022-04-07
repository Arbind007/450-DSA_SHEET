#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n){
    int k = arr[0];
    for(int i=1;i<n;i++){
        k = max(k,arr[i]);
    }
    int count[k+1]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    
    for(int i=1;i<=k;i++){
        count[i] += count[i-1];
    }
    
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i]; 
    }
    for(int i=0;i<n;i++)
        cout << output[i] << " ";
}

int main(){
    int arr[] = {5,4,3,2,1};
    countSort(arr,5);
	return 0;
}


// 5
// 6 7 3 2 9
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1 = mid - l + 1,n2 = r - mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
        a[i] = arr[i+l];
    for(int i=0;i<n2;i++)
        b[i] = arr[mid+i+1];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(a[i] < b[j]){
            arr[k] = a[i];
            i++,k++;
        }
        else{
            arr[k] = b[j];
            j++,k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        i++,k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++,k++;
    }
}

void mergeSort(int arr[],int l,int r){
    int mid;
    if(l<r){
        mid = l + (r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}

int main() {
    int arr[] = {5,4,3,2,1};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++)
        cout << arr[i] << " ";
	return 0;
}


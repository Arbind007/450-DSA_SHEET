#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int merge(long long arr[],long long l,long long mid,long long r){
        long long int n1 = mid - l + 1,n2 = r - mid,ans=0;
        long long a[n1],b[n2];
        
        for(int i=0;i<n1;i++){
            a[i] = arr[l+i];
        }
        for(int i=0;i<n2;i++){
            b[i] = arr[mid+i+1];
        }
        int i=0,j=0,k=l;
        while(i<n1 && j <n2){
            if(a[i] <= b[j]){
                arr[k] = a[i];
                i++,k++;
            }
            else{
                arr[k] = b[j];
                ans += n1 - i;
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
        return ans;
    }
    long long int mergeSort(long long arr[],long long l,long long r){
        long long mid,cnt=0; 
        if(l<r){
            mid = l + (r-l)/2;
            cnt += mergeSort(arr,l,mid);
            cnt += mergeSort(arr,mid+1,r);
            cnt += merge(arr,l,mid,r);
        }
        return cnt;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        return mergeSort(arr,0,N-1);
    }

};

int main() {
    
    long long T=1;
    // cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
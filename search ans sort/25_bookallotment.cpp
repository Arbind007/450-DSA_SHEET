#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    bool isvalid(int a[],int n,int m,int pivot){
        int counts = 1,sum = 0;
        for(int i=0;i<n;i++){
            if (a[i] > pivot)
                return false;
            if(sum + a[i] <= pivot){
                sum += a[i];
            }
            else{
                sum = a[i];
                counts++;
                if(counts > m)
                    return false;
            }
            
        }
        return true;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int m) 
    {
        //code here
        if(m > n)
            return -1;
        int sum = 0,mid,ans;
        for(int i=0;i<n;i++)
            sum += a[i];
        int low = a[0];
        int high = sum;
        while(low <= high){
            mid = low + (high - low )/2;
            if(isvalid(a,n,m,mid))
                ans = mid,high = mid - 1;
            else 
                low = mid + 1;
        }
        return ans;
    }
};



int main() {
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    bool isvalid(int a[],int n,int m,int pivot){
        int sum = 0;
        for(int i=0;i<n;i++){
            if(a[i] > pivot)
                sum += a[i] - pivot;
            if(sum >= m)
                return true;
        }
        return false;
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int a[], int n, int m) 
    {
        //code here
        sort(a,a+n);
        int sum = 0,mid,ans;
        for(int i=0;i<n;i++)
            sum = max(sum,a[i]);
        int low = 0;
        int high = sum;
        while(low <= high){
            mid = low + (high - low )/2;
            if(isvalid(a,n,m,mid))
                ans = mid,low = mid + 1;
            else 
                high = mid - 1;
        }
        return ans;
    }
};



int main() {
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
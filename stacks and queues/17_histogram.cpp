#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<int> right(n, n), left(n, -1);
        stack<int> s;
        long long ans = 0;
        s.push(0);
        for(int i=1;i<n;i++){
            while(!s.empty() && arr[i] <= arr[s.top()]){
                s.pop();
            }
            if(!s.empty())
                left[i] = s.top();
            s.push(i);
        }
        while(!s.empty())
            s.pop();
        s.push(n-1);
        for(int i=n-2;i>=0;i--){
            while (!s.empty() && arr[i] <= arr[s.top()]){
                s.pop();
            }
            if(!s.empty())
                right[i] = s.top();
            s.push(i);
        }
        for(int i=0;i<n;i++)
            ans = max(ans,arr[i]*(right[i]-left[i]-1));
    return ans;
    }
    
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends
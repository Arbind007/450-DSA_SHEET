/* What I thought */
#include<bits/stdc++.h>
using namespace std;

int helper(vector <int> v,int pivot,int k){
    int sum = 0;
    for(int i=0;i<v.size();i++){
        sum += pivot/v[i];
        if(sum >=k)
            return true;
    }
    return false;
}

int solve(vector <int> v,int n,int k,int mn){
    int low=0,high=mn*k,mid,ans;
    while(low <= high){
        mid = low + (high-low)/2;
        if(helper(v,mid,k))
            ans = mid,high = mid - 1;
        else
            low = mid + 1;
    }
    return ans;
}

int main() {
    int t=1;
    // cin>>t;
    while(t--){
        int n,p,mn;
        cin >> p >> n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            mn = min(mn,v[i]);
        }
        cout << solve(v,n,p,mn) << endl;
    }
    return 0;
}


// 3
// 10
// 4 1 2 3 4
// 8
// 1 1
// 8
// 8 1 1 1 1 1 1 1 1

/* Correct Solution */
#include<bits/stdc++.h>
using namespace std;

int helper(vector <int> v,int pivot,int k){
    int sum = 0;
    for(int i=0;i<v.size();i++){
        int tim = 0;
        int j = 1;
        while(true){
            tim += j*v[i];
            j++;
            if(tim > pivot)
                break;
            sum++;
        }
        if(sum >= k)
            return true;
    }
    return false;
}

int solve(vector <int> v,int n,int k,int mn){
    int low=0,mid,ans,i = 1,count=0;
    long long high = 0;
    while(count < k){
        high += i*mn;
        i++;
        count++;
    }
    while(low <= high){
        mid = low + (high-low)/2;
        if(helper(v,mid,k))
            ans = mid,high = mid - 1;
        else
            low = mid + 1;
    }
    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,p,mn=INT_MAX;
        cin >> p >> n;
        vector <int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
            mn = min(mn,v[i]);
        }
        cout << solve(v,n,p,mn) << endl;
    }
    return 0;
}

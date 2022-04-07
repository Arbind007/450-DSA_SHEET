//calc no of 0
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    while(n/5 > 0){
        sum += n/5;
        n/=5;
    }
    cout << sum << endl;
    return 0;
}

// MAIN CODE
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    bool helper(int pivot,int n){
        int count = 0;
        while(pivot/5 > 0){
            count += pivot/5;
            pivot /= 5;
            if(count >= n)
                return true;
        }
        return false;
    }
    public:
        int findNum(int n)
        {
            if(n == 1)
                return 5;
            int l=0,r=5*n,ans,mid;
            while(l<=r){
                mid = l + (r - l)/2;
                if(helper(mid,n))
                    ans = mid,r = mid - 1;
                else
                    l = mid + 1;
            }
            return ans;
        }
};

int main() {
    int t=1;
    // cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  
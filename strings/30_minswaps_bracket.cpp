#include<bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    int minimumNumberOfSwaps(string S){
        // code here 
        int cnt = 0,ans = 0;
        for(int i=0;i<S.size();i++){
            if(S[i] == '[')
                cnt++;
            else{
                cnt--;
                if(cnt < 0)
                    ans -= cnt;
            }
        }
        return ans+cnt;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.minimumNumberOfSwaps(S) << endl;
    }
    return 0; 
}  
#include<bits/stdc++.h>
using namespace std;

class Solution
{
    void helper(string s,vector<string>&v,int l,int r){
        if (l == r){
            v.push_back(s);
            return;
        }
        for (int i = l; i <= r; i++)
        {
            swap(s[l],s[i]);
            helper(s,v,l+1,r);
            swap(s[l],s[i]);
        }
    }
	public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>ans;
            helper(S,ans,0,S.size()-1);
            sort(ans.begin(),ans.end());
            return ans;
		}
};

int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution{
    void helper(int i,string a,string s,vector<string>&ans){
        if(i == s.length()){
            ans.push_back(a);
            return;
        }
        helper(i+1,a+s[i],s,ans);
        helper(i+1,a,s,ans);
    }
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ans;
            string a = "";
            helper(0,a,s,ans);
            sort(ans.begin(),ans.end());
            ans.erase(ans.begin());
            return ans;
		}
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}  
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(auto it:string_list){
            string temp=it;
            sort(it.begin(),it.end());
            mp[it].push_back(temp);
        }
        for(auto it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
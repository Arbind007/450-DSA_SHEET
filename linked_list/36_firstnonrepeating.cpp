#include <bits/stdc++.h>
using namespace std;

string FirstNonRepeating(string s){
     // Code here
    int n = s.size();
    unordered_map <char,int> mp;
    string ans="";
    queue<char> q;
    for(int i=0;i<n;i++)
    {
        if(!mp[s[i]]) 
            q.push(s[i]);
        mp[s[i]]++;
        while(!q.empty()&&mp[q.front()]>1) 
            q.pop();
        if(q.empty()) 
            ans+="#";
        else 
            ans+=q.front();
    }
    return ans;
    
}
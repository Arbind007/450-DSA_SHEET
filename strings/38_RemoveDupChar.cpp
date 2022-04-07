#include <bits/stdc++.h>
using namespace std;

class Solution{
    void helper(string &s,int i,string &ans){
        if(i < 0) 
            return;
        helper(s,i-1,ans);
        if(i == s.length() - 1){
                ans += s[i];
        }
       else{
            if(s[i] != s[i+1]) 
                ans += s[i];
        }
    }
    public:
    string removeConsecutiveCharacter(string S)
    {
        // code here.
        string ans{};
        helper(S,S.length()-1,ans);
        return (ans);
    }
};
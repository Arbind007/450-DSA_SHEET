#include<bits/stdc++.h> 
using namespace std; 

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        int ans=0;
        unordered_map<char,int>st;
        st.insert({'I',1});
        st.insert({'V',5});
        st.insert({'X',10 });
        st.insert({'L',50});
        st.insert({'C',100});
        st.insert({'D',500});
        st.insert({'M',1000});
        for(int i=0;i<str.length();i++){
            if(st[str[i]]<st[str[i+1]]){
                ans+=st[str[i+1]]-st[str[i]];
                i++;
                continue;
            }
            ans+=st[str[i]];
        }
        return ans;
    }
};
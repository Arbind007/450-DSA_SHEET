#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=1;i<n;i++){
            string temp=ans;
            ans.clear();
            char pre=temp[0];
            int count=0;
            for(auto i:temp){
                if(i!=pre){
                    ans+=to_string(count);
                    ans.push_back(pre);
                    pre=i;
                    count=0;
                }
                count++;
            }
            ans+=to_string(count);
            ans.push_back(pre);
        }
        return ans;
    }
};
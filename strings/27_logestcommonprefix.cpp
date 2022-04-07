#include<bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        for(int i=0;i<strs[0].length();i++){
            bool flag = true;
            for(int j=1;j<strs.size();j++){
                if(strs[0][i] != strs[j][i]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                str.push_back(strs[0][i]);
            }
            else{ 
              break;
            }
        }
        return str;
    }
};
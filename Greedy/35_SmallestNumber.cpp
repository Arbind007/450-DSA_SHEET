#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    string smallestNumber(int s, int D){
        // code here 
        if(9*D < s)
            return "-1";
        string ans = "";
        for(int i=D-1;i>=0;i--){
            if(s > 9){
                ans += '9';
                s -= 9;
            }
            else{
                if(i == 0)
                    ans += to_string(s);
                else{
                    ans += to_string(s-1);
                    i--;
                    while(i > 0){
                        ans += "0";
                        i--;
                    }
                    ans += "1";
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
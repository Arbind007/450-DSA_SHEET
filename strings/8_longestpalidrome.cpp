#include <bits/stdc++.h>
using namespace std;

class Solution {
    bool checkPalindrome(string s){
       int i=0,j=s.length()-1;
       bool flag = true;
       while(i<j && j>0){
           if(s[i] == s[j]){
               i++;
               j--;
           }
           else{
               flag = false;
               break;
           }  
       }
       return flag;
   } 
  public:
    string longestPalin (string S) {
        // code here
       int n = S.length();
       string max_str;
       for(int i=0;i<n;i++){
           string substr;
           for(int j=i;j<n;j++){
               substr += S[j];
               if(checkPalindrome(substr)){
                   if(substr.size() > max_str.size()){
                       max_str = substr;
                   }
               }
           }
       }
       if(checkPalindrome(max_str))
           return max_str;
       else
           return max_str = S[0]; 
    }
};
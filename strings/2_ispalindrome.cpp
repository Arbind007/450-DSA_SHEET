#include <bits/stdc++.h>
using namespace std;

int isPalindrome(string s)
{
    // Your code goes here
    bool tu = true;
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            tu = false;
            break;
        }
    }
    if(tu)
        return 1;
    else
        return 0;
}
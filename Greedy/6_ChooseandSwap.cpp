#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string chooseandswap(string a){
        // Code Here
        string b = a;
        sort(b.begin(),b.end());
        int i = 0,j = 0,n = a.length();
        while(i < n && j < n){
            if(a[i] == b[j]){
                while(a[i]==b[j]) 
                    j++;
                i++;
            }
            else if(a[i]<b[j])
                i++;
            else 
                break;
        }
        if(i>=n || j>=n) 
            return a;
        string str = "";
        for(int k=0;k<n;k++){
            if(a[k]==a[i]) 
                str += b[j];
            else if(a[k]==b[j]) 
                str += a[i];
            else 
                str += a[k];
        }
        return str;
    }
    
};
#include <bits/stdc++.h>
using namespace std;

bool ispar(string x)
{
    stack<char> s;
    for(long long int i=0;i<x.length();i++)
    {
        if(x[i]=='('||x[i]=='['||x[i]=='{')
            s.push(x[i]);
        else if(!s.empty() && ((s.top()=='('&&x[i]==')')||(s.top()=='{'&&x[i]=='}')||(s.top()=='['&&x[i]==']')))
            s.pop();
        else
            s.push(x[i]);
    }
    if(!s.empty())
        return false;
    return true;    
}
#include <bits/stdc++.h>
using namespace std;

stack <int> s;

/* Method 1*/

void sort()
{
   //Your code here
    priority_queue<int, vector<int>, greater<int> > pq;
    while(!s.empty()){
      pq.push(s.top());
      s.pop();
    }
    while(!pq.empty()){
      s.push(pq.top());
      pq.pop();
    }
}

/* Method 2*/

void insert(stack<int> &s, int x){
    if(!s.size() || s.top()<=x){
       s.push(x);
       return;
    }
    int temp = s.top();
    s.pop();
    insert(s,x);
    s.push(temp);
    return;
}

void sort()
{
   //Your code here
    if(s.size()==1)
        return;
    int temp = s.top();
    s.pop();
    sort();
    insert(s,temp);
    return;
}
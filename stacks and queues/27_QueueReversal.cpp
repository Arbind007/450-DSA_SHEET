#include<bits/stdc++.h>
using namespace std;
//function Template for C++
void helper(queue <int> &q){
    if(q.empty())
        return;
    int tmp = q.front();
    q.pop();
    helper(q);
    q.push(tmp);
}

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    helper(q);
    return q;
}
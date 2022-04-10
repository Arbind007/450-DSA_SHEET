#include <bits/stdc++.h>
using namespace std;

int minmaxdiff(vector <int> v,int k){
    int sum = 0,n = v.size();
    deque <int> mn(k), mx(k);
    for (int i = 0;i < k;i++)
    {
        while ( (!mn.empty()) && v[mn.back()] >= v[i])
            mn.pop_back();
        while( (!mx.empty()) && v[mx.back()] <= v[i])
            mx.pop_back();
        mn.push_back(i);
        mx.push_back(i);
    }
    for (int i = k;i < n;i++)
    {
        sum += v[mn.front()] + v[mx.front()];
        while (!mn.empty() && mn.front() <= i - k)
            mn.pop_front();
        while (!mx.empty() && mx.front() <= i - k)
            mx.pop_front();
        while (!mn.empty() && v[mn.back()] >= v[i])
            mn.pop_back();
        while (!mx.empty() && v[mx.back()] <= v[i])
            mx.pop_back();
        mx.push_back(i);
        mn.push_back(i);
    }
    sum += v[mn.front()] + v[mx.front()];
    return sum;
}

int main(){
    vector <int> v = {2, 5, -1, 7, -3, -1, -2};
    int k = 3;
    cout << minmaxdiff(v,k) ;
    return 0;
}
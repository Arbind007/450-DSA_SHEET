#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int minValue(string s, int k){
        // code here
        vector <int> v(26,0);
        priority_queue <int> pq;
        for(int i=0;i<s.size();i++)
            v[s[i]-97]++;
        for(int i=0;i<26;i++)
            pq.push(v[i]);
        while(k--){
            int x = pq.top();
            x--;
            pq.pop();
            pq.push(x);
        }
        int ans=0;
        while(!pq.empty()){
            ans += pow(pq.top(),2);
            pq.pop();
        }
        return ans;
    }
};

int main(){

    return 0;
}
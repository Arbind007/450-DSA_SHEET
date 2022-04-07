#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1,2,3,4};
    sort(v.begin(),v.end());
    int k = 2;
    // cin >> k;
    cout << v[k-1] << " " << v[v.size() - k] << endl;
    return 0;
}

/*Priority Queue*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {4,2,3,1};
    // priority_queue<int, vector<int>, greater<int>> pq;
    priority_queue<int> pq;
    int k = 2;                                                               
    for(int i=0;i<v.size();i++){
        pq.push(v[i]);
        if(pq.size() > k){
            pq.pop();
        }
    }
    cout << pq.top() << endl;
    return 0;
}
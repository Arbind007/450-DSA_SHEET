#include <bits/stdc++.h>
using namespace std;

vector <int> solve(vector <int> &v){
    vector <int> ans;
    int temp = v[0],sum=0;
    for(int i=1;i<v.size();i++){
        if(temp <= v[i])
            sum += v[i] - temp;
        else if(sum > 0)
            ans.push_back(sum),sum=0;
        else
            sum =0;
        temp = v[i];
    }
    if(sum > 0)
        ans.push_back(sum);   
    return ans;
}

int main(){
    vector <int> v = {3,2};
    vector <int> ans = solve(v);
    if(ans.size() == 0)
        cout << 0 << endl;
    else if(ans.size() == 1)
        cout << ans[0] << endl;
    else{
        int f = 0,s = 0;
        for(int i=0;i<ans.size();i++){
            if(ans[i] >= f)
                s = f, f = ans[i];
        }
        cout << f + s << endl;
    }
    return 0;
}
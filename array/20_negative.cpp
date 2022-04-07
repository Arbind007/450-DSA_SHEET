//negative to one side
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {-1, 2, 3, -4, -1, 4};
    int i=0,j=v.size()-1,k=0;
    while(i<j){
        if(v[i] < 0)
            swap(v[i],v[k++]);
        i++;
    }
    for(auto &it:v)
        cout << it << " ";
    return 0;
}

//alternative
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v = {1, 2, 3, -4, -1, 4};
    vector <int> vp,vn;
    for(int i=0;i<v.size();i++){
        if(v[i] >= 0)
            vp.push_back(v[i]);
        else
            vn.push_back(v[i]);
    }
    v.clear();
    int i=0,j=0,k=0;
    while(i<vp.size() && j<vn.size()){
        if(k%2==0)
            v.push_back(vn[j++]);
        else
            v.push_back(vp[i++]);
        k++;
    }
    while(i<vp.size())
        v.push_back(vp[i++]);
    while(j<vn.size())
        v.push_back(vn[j++]);
    for(auto &it:v)
        cout << it << " ";
    return 0;
}


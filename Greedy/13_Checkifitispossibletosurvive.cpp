#include <bits/stdc++.h>
using namespace std;

int canSurvive(int s,int n,int m){
    int days;
    if(m > n || (n*6) < m*7)
        return 0;
    else{
        days = (s*m)/n;
        if((s*m) % n)
            days++;
    }
    return days;
}

int main(){
    int n,s,m,ans;
    cin >> s >> n >> m;
    ans = canSurvive(s,n,m);
    if(canSurvive(n,s,m))
        cout << ans << endl;
    else
        cout << "Can't Survive" << endl;
    return 0;
}
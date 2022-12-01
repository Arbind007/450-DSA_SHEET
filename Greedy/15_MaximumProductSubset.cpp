#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[] = { -1, -1, -2, 4, 3};
    int n = 5,ans = 1,zeroCnt = 0,nCnt = 0,maxNeg = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i] < 0){
            nCnt++;
            maxNeg = max(maxNeg, a[i]);
        }
        if(a[i] == 0){
            zeroCnt++;
            continue;
        }
        ans *= a[i];
    }
    if(nCnt % 2){
        if(nCnt == 1 && zeroCnt > 0 && zeroCnt + nCnt == n){
            cout << 0 << endl;
            return 0;
        }
        ans /= maxNeg;
    }
    cout << ans << endl;
    return 0;
}
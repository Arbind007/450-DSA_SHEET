#include <bits/stdc++.h>
using namespace std;

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3){
    vector <int> ans;
    int i = 0,j = 0,k = 0;
    while(i < n1 && j < n2 && k < n3){
        if(A[i] == B[j] && A[i] == C[k])
            ans.push_back(A[i]),i++, j++, k++;
        else if(A[i] < B[j])
            i++;
        else if(B[j] < C[k])
            j++;
        else
            k++;
    }
    set<int>s(ans.begin(),ans.end());
    ans.assign(s.begin(),s.end());
    return ans;
}
#include <bits/stdc++.h>
using namespace std;
const int MAX = 2;

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
 vector<int>ans;
 
 for(int i =0;i<n;i++)
 {
     for(int j =0; j<n;j++)
     {
         ans.push_back(mat[i][j]);
     }
 }
 sort(ans.begin(),ans.end());
 return ans[k-1];
}
#include <bits/stdc++.h>
using namespace std;
const int M = 2;
const int N = 2;

void printCommonElements(int mat[M][N])
{
    unordered_map<int, int> mp;
 
    // initialize 1st row elements with value 1
    for (int j = 0; j < N; j++)
        mp[mat[0][j]] = 1;
 
    // traverse the matrix
    for (int i = 1; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mp[mat[i][j]] == i)
            {
                mp[mat[i][j]] = i + 1;
                if (i==M-1 && mp[mat[i][j]]==M)
                    cout << mat[i][j] << " ";
            }
        }
    }
}
#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
    public: 
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
    int rs = 0,re = r-1;
    int cs = 0,ce = c-1;
    int i,j;
    vector <int> res;
    while(rs <= re && cs <= ce){
        i = rs,j = cs;
        while(j<=ce)
            res.push_back(matrix[i][j]),j++;
        rs++;
        i = rs,j = ce;
        while(i<=re)
            res.push_back(matrix[i][j]),i++;
        ce--;
        i = re,j = ce;
        while(j>=cs)
            res.push_back(matrix[i][j]),j--;
        re--;
        i = re,j = cs;
        while(i>=rs)
            res.push_back(matrix[i][j]),i--;
        cs++;
    }
    res.erase(res.begin() + (r*c), res.end());
    return res;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  
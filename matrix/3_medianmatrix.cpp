#include <bits/stdc++.h> 
using namespace std; 

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c){
        // code here          
        vector<int> vc;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                vc.push_back(matrix[i][j]);
            }
        }
        sort(vc.begin(),vc.end());
        if(vc.size()%2){
            return (vc[vc.size()/2]);
        }else{
            return vc[vc.size()/2 + 1];
        }
    }
};
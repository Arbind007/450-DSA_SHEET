#include <bits/stdc++.h> 
using namespace std; 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size();
        int left=0,right=r*c -1,m=0;
        while(left<=right){
            m=(right) + (left-right)/2;
            if(matrix[m/c][m%c]==target)
                return true;
            else if
                (matrix[m/c][m%c]>target)right=m-1;
            else
                left=m+1; 
        }
        return false;
    }
};
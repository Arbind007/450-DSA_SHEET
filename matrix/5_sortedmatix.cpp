#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        vector<int> arr;
        
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                arr.push_back(Mat[i][j]);
        
        sort(arr.begin(),arr.end());
        
        int k = 0;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                Mat[i][j] = arr[k++];
        
        return Mat;
        
    }
};
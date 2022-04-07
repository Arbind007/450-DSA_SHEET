#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int inSequence(int A, int B, int C){
        // code here
        if(A==B)
            return true;
        if(C==0)
            return false;
        int temp = B - A;
        if(temp % C || temp/C < 0)
            return false;
        return true;
    }
};
#include <bits/stdc++.h>
using namespace std;

int countSquares(int n) {
    int c = 0;
    int i = 1;
    while(i*i < n)
       c++,i++;
    return c;
}

int countSquares(int n) {
    return sqrt(n-1);
}
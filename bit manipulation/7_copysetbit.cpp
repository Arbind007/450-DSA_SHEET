#include <bits/stdc++.h>
using namespace std;

void copySetBits(unsigned &x, unsigned y,unsigned l, unsigned r){
	if (l < 1 || r > 32){
	    return;
	}
	int maskLength = (1<<(r-l+1)) - 1; //3 -> 11
	int mask = ((maskLength)<<(l-1)) & y ; // 1101 & 0110 -> 0100
	x = x | mask; // x -> 1110
}

int main()
{
unsigned x = 10, y = 13, l = 2, r = 3; // y -> 1101, x -> 1010 
copySetBits(x, y, l, r);
cout << "Modified x is " << x;
return 0;
}

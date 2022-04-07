#include <bits/stdc++.h>
using namespace std;

void printSubsequence(string i, string o)
{
	if (i.empty()) {
		cout << o << endl;
		return;
	}
	printSubsequence(i.substr(1), o + i[0]);
	printSubsequence(i.substr(1), o);
}

// Driver code
int main()
{
	string output = "";
	string input = "abcd";
	printSubsequence(input, output);
	return 0;
}

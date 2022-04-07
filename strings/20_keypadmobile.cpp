#include <bits/stdc++.h>
using namespace std;

string printSequence(string keypad[],string input)
{
	string ans = "";
	int n = input.length();
	for (int i=0; i<n; i++)
	{
		if (input[i] == ' ')
			ans += "0";
		else
			ans += keypad[input[i]-'A'];
	}
	return ans;
}

int main()
{
	string keypad[] = {"2","22","222","3","33","333","4","44","444","5","55","555","6","66","666","7","77","777","7777","8","88","888","9","99","999","9999"};
	string input = "ARBIND";
	cout << printSequence(keypad, input);
	return 0;
}

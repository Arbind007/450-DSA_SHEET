# include <bits/stdc++.h>
using namespace std;

bool areRotations(string str1, string str2)
{
if (str1.length() != str2.length())
		return false;
str1 += str1;
return (str1.find(str2));
}

int main()
{
string str1 = "AACD", str2 = "ACDA";
if (areRotations(str1, str2))
	cout << "YES" << endl;
else
	cout << "NO" << endl;
return 0;
}

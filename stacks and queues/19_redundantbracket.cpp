#include <bits/stdc++.h>
using namespace std;

bool checkRedundancy(string& str)
{
	stack<char>s;
	for(auto &ch:str){
	    if(ch == ')'){
	        char tmp = s.top();
	        s.pop();
	        bool tu = true;
	        while(!s.empty() && tmp != '('){
	            if(tmp == '+' || tmp == '-' || tmp == '*' || tmp == '/')
	                tu = false;
	            tmp = s.top();
	            s.pop();
	        }
	        if(tu)
	            return true;
	    }
	    else
	        s.push(ch);
	}
	return false;
}

void findRedundant(string& str)
{
	if (checkRedundancy(str))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}

int main()
{
	string str = "((a+b))";
	findRedundant(str);

	str = "(a+(b)/c)";
	findRedundant(str);

	str = "(a+b*(c-d))";
	findRedundant(str);

	return 0;
}

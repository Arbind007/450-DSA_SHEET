#include<bits/stdc++.h>
using namespace std;

class Solution {
    bool isPalin(int n){
        string temp = to_string(n);
        int l = temp.length();
        for(int i=0;i<l/2;i++){
            if(temp[i] != temp[l-i-1])
                return false;
        }
        return true;
    }
public:
    int PalinArray(int a[], int n)
    {
    	for(int i=0;i<n;i++)
    	    if(!isPalin(a[i]))
    	        return false;
    	return true;
    }
};

int main()
{
	int t=1;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  
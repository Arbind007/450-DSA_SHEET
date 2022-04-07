#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	vector <int> v(n);
	for(int i=0;i<n;i++)
	    cin >> v[i];
	int count = 1;
	while(count < n){
	    for(int i=0;i<n-count;i++){
	        if(v[i] > v[i+1])
	            swap(v[i],v[i+1]);
	    }
	    count++;
	}
	for(int i=0;i<n;i++)
	    cout << v[i] << " ";
	return 0;
}


// 5
// 6 7 3 2 9
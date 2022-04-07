#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
	cin >> n;
	vector <int> v(n);
	for(int i=0;i<n;i++)
	    cin >> v[i];
	for(int i=1;i<n;i++){
	    int curr = v[i];
	    int j = i-1;
	    while(v[j] > curr && j>=0){
	        v[j+1] = v[j];
	        j--;
	    }
	    v[j+1] = curr;
	}
	for(int i=0;i<n;i++)
	    cout << v[i] << " ";
	return 0;
}


// 5
// 6 7 3 2 9
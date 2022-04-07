// Write your code here
#include <bits/stdc++.h>
using namespace std;

int solve(vector <int> v,int k){
   int i=0,j=v.size()-1,mid,ans;
   while(i<=j){
        mid = i + (j - i)/2;
        if(v[mid] > k)
            j = mid - 1;
        else
            ans = mid,i = mid + 1;
   }
   return ans+1;
}

int main(){
int n,m,count = 1,sum=0;
cin >> n;
vector <int> v(n);
for(int i=0;i<n;i++)
    cin >> v[i];
sort(v.begin(),v.end());
unordered_map <int,int> mp;
mp[0] = 0;
for(int i=0;i<n;i++){
    sum += v[i];
    mp[count++] = sum;  
}
// for(auto &it:mp)
//    cout << it.first << " " << it.second << endl;
cin >> m;
for(int i=0;i<m;i++){
    int a;
    cin >> a;
    int temp = solve(v,a);
    cout << temp << " " << mp[temp] << endl;
}
return 0;
}
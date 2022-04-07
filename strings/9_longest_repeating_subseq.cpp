#include<bits/stdc++.h>
using namespace std;

class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    // Code here
            int n = str.size();
            int dp[n+1][n+1];
            for(int i=0;i<=n;i++)
                dp[i][0] = 0;
            for(int j=0;j<=n;j++)
                dp[0][j] = 0 ;
            for(int i=1;i<=n;i++){
                for(int j=1;j<=n;j++){
		            if(str[i-1] == str[j-1] && i != j)
                        dp[i][j] = 1+dp[i-1][j-1];
                    else
                        dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
            // for(int i=0;i<=n;i++){
            //     for(int j=0;j<=n;j++){
            //         cout << dp[i][j] << " ";
            //     }
            //     cout << endl;
            // }
        return dp[n][n];
	    }
};

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  


/* Refrence */
int findLongestRepeatingSubSeq(string str, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (str[m - 1] == str[n - 1] && m != n)
        findLongestRepeatingSubSeq(str,m - 1, n - 1) + 1;
    return max (findLongestRepeatingSubSeq(str, m, n - 1),findLongestRepeatingSubSeq(str, m - 1, n));
}
# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 105;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
int dp[mxN][3];
 
int main(){
   std::ios_base::sync_with_stdio(false);
 
   int n;
   cin >> n;
   for(int i=1; i<=n; i++){
        int d; cin>>d;
        int m = min (dp[i-1][0], dp[i-1][1]);
        dp[i][0] = min(m ,dp[i-1][2]) + 1;
 
        if(d==2 || d==3)
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
        else
            dp[i][2] = dp[i-1][2] + 1;
 
        if(d==1 || d==3)
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        else
            dp[i][1] = dp[i-1][1] + 1;
   }
   int x = min (dp[n][0], dp[n][1]);
   cout << min(x, dp[n][2]);
}
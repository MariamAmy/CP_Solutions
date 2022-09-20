# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1005, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
string s[mxN];
int b[mxN], w[mxN], sb[mxN], sw[mxN], dp[mxN][2];
 
int main(){
   std::ios_base::sync_with_stdio(false);
 
   int n,m,x,y; cin>>n>>m>>x>>y;
   for(int i=1; i<=n; i++)
    cin>>s[i];
   int k = 0;
   sb[0] = sw[0] = 0;
   for(int i=0; i<m; i++){
       for(int j=1; j<=n; j++){
            b[i] += s[j][i]=='#';
            w[i] += s[j][i]=='.';
            k++;
            sb[i+1]=sb[i] + b[i];
            sw[i+1]=sw[i] + w[i];
        }
   }
   memset(dp, oo, sizeof(dp));
   dp[0][0] = dp[0][1] = 0;
   for(int i = 0; i < m; i++){
        for(int j = x; j <= y; j++){
            if(i+j > m)
                break;
            dp[i+j][0] = min(dp[i+j][0], dp[i][1] + sb[i+j]-sb[i]);
            dp[i+j][1] = min(dp[i+j][1], dp[i][0] + sw[i+j]-sw[i]);
        }
   }
   cout << min(dp[m][0], dp[m][1]);
}
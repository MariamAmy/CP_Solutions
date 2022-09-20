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
 
   ll n, c=0, ndx;
   cin >> n;
   vector<pair<ll,ll>>v(n);
   for(int i=0; i<n; i++){
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
   }
   for(int i=0; i<n; i++){
        if(i==0){
            c++;
            ndx = v[i].first;
        }
        else if(i==n-1) c++;
        else if (v[i].first - v[i].second > ndx){
            c++;
            ndx = v[i].first;
        }
        else if (v[i].first + v[i].second <  v[i+1].first){
            c++;
            ndx = v[i].first + v[i].second;
        }
        else ndx = v[i].first;
   }
   cout << c;
}
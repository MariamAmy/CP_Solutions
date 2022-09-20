# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
//ll a[mxN];
//ll ans = 0;
 
bool cmp(pair<ll,ll>x, pair<ll,ll>y){
    return x.second > y.second;
}
 
int main(){
   ll n, k;
   cin >> n >> k;
   vector<pair<ll,ll>> v(n+1,{0,-1});
   vector<ll>ans(n+1,0);
   vector<ll>v2(n+1,0);
   for(int i = 1; i <= n; i++){
        ll a, b;
        cin >> a >> b;
        ans[i]=min(a,b);
        v2[i]=min(2*a,b);
        ll x = abs(min(2*a,b) - min(a,b));
        v[i].first = i;
        v[i].second = x;
   }
   sort(v.begin(), v.end(), cmp);
//   for(auto it:v)
//        cout<<it.first<<it.second<<ln;
   for(int i=0; i<k; i++){
        //cout << v[i].first << ln;
        ans[v[i].first] = v2[v[i].first];
   }
   ll sum = 0;
   for(int i=1; i<=n; i++)
        sum+=ans[i];
   cout << sum;
}
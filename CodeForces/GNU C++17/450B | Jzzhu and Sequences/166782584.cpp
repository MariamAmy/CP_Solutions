# include<bits/stdc++.h>
#include<sstream>
using namespace std;
 
#define ll              long long
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define pb(x)   push_back(x)
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 1003, oo = 0x3f3f3f3f;
//vector <pair<int, int>> moves = {{-1,0}, {1,0}, {0,1}, {0, -1}, {1, -1}, {-1, 1}, {-1, -1},{1, 1}};
//printf("%0.6f\n",x)
 
ll fact(ll i){
    if(i == 1 || i == 0) return 1;
    i %= mod;
    return i *= fact(i-1);
}
ll llog(ll a, ll b){
    return log2(a) / log2(b);
}
ll gcd(ll a, ll b){ // a > b
    if(a==0) return b;
    return gcd(b%a, a);
}
 
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt","w", stdout);
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll x,y,n;
    cin>>x>>y>>n;
    ll a[]={x,y,y-x,-x,-y,x-y};
    cout<<(a[(n-1)%6]%mod+mod)%mod<<ln;
    return 0;
}
 
 
 
 
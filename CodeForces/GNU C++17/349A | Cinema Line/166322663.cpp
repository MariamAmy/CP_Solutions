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
const int mxN = 103, oo = 0x3f3f3f3f;
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
 
ll power(ll b, ll p, ll m){   // O(log(p) base 2)
 if(p == 0) return 1;
 ll sq = power(b, p/2, m);
 sq = (sq*sq) % m;
 if(p%2 == 1)
  sq = (sq*b) % m;
 return sq%m;
}
 
int FactN_PrimePower(int n, int p){  // O(log(n) base p)
    int pow = 0;
    for(int i = p; i <= n ; i = i * p)
     pow += n/i;
    return pow;
}
 
ll sumPows(ll a, int k){ // Return a^1+a^1+a^2+.....a^k in O(k)
 if (k == 0)
  return 0;
 if (k % 2 == 1)
  return a * (1 + sumPows(a, k - 1));
 ll half = sumPows(a, k / 2);
 return half * (1 + half - sumPows(a, k / 2 -1) );
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    bool f=false;
    int n,x=0,y=0,s=0; cin>>n;
    int a[n];
    lp(i,n){
        cin>>a[i];
        if(i==0&&a[i]!=25) f=true;
        if(a[i]==25) x++;
        else if(a[i]==50) y++, x--;
        else{
            if(y>0) y--, x--;
            else x-=3;
        }
    }
    if(f||x<0) cout<<"NO"<<ln;
    else cout<<"YES"<<ln;
    return 0;
}
 
 
 
 
# include<bits/stdc++.h>
using namespace std;
 
#define ll              long long
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define pb(x)   push_back(x)
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 103, oo = -0x3f3f3f3f;
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
    if(b==0) return a;
    return gcd(b, a%b);
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
 
int solve(int x){
    int s=0, p=1;
    while(x!=0){
        int digit=x%10;
        x/=10;
        if(digit!=0){
            s+=digit*p;
            p*=10;
        }
    }
    return s;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,r=1,c=1; cin>>n>>m;
    int a[m*n+1];
    for(int i=1; i<=m*n; ++i) cin>>a[i];
    bool f=false;
    for(int i=1; i<=n*m; ++i){
        if(i%m==0){
            //cout<<i<<" "<<c<<ln;
            if(a[i]==1 || a[i+1]==1) f=true;
        }
        else if(i<=m || i>=m*n-m+1){
            if(a[i]==1) f=true;
        }
    }
    if(f) cout<<2;
    else cout<<4;
    return 0;
}
 
 
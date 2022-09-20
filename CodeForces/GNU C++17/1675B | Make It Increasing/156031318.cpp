# include<bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define pb       push_back
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 1005, oo = 0x3f3f3f3f;
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
 
// Very important function
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
    std::ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--){
        int n, c=0;
        cin>>n;
        bool f=false;
        vector<ll>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        for (int j=n-1; j>0; j--){
            if(v[j]==0) f=true;
            while(v[j-1]>=v[j] && v[j]!=0 && v[j-1]!=0){
                v[j-1] /= 2;
                c++;
            }
        }
        if(!f) cout<<c<<ln;
        else cout<<-1<<ln;
    }
}
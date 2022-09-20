# include<bits/stdc++.h>
using namespace std;
 
#define ll              long long int
#define ln              "\n"
#define lp(i, n)        for (int i = 0; i < n; i++)
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define pb(x)   push_back(x)
#define MP    make_pair
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5, oo = 0x3f3f3f3f;
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
 
// Imp
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
 
char a[4][4];
 
bool check(int i, int j){
    if(i+1>3 || j+1>3)
        return false;
    if(a[i][j]==a[i][j+1] && a[i][j]==a[i+1][j] && a[i][j]==a[i+1][j+1])
        return true;
    else return false;
}
 
bool solution(){
    lp(i,4){
        lp(j,4)
            if(check(i,j))
                return true;
    }
    return false;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    lp(i,4)
        lp(j,4)
            cin>>a[i][j];
 
    if(solution()) {cout<<"YES"; return 0;}
 
    lp(i,4){
        lp(j,4){
            if(a[i][j]=='.'){
                a[i][j]='#';
                if(solution()){cout<<"YES"; return 0;}
                a[i][j]='.';
            }else{
                a[i][j]='.';
                if(solution()){cout<<"YES"; return 0;}
                a[i][j]='#';
            }
        }
    }
    cout<<"NO";
}
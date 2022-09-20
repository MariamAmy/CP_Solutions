# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
//ll a[mxN];
ll ans = 0;
 
int main(){
    int n; cin >> n;
    ll a[n];
    lp(i, n)
        cin >> a[i];
    vector<ll> v(a, a+n);
    sort(v.begin(), v.end());
    vector<ll> sum(n, 0);
    vector<ll> ssum(n, 0);
    sum[0] = a[0];
    ssum[0] = v[0];
    for(int i = 1; i < n; i++){
        sum[i] = sum[i-1] + a[i];
        ssum[i] = ssum[i-1] + v[i];
    }
    int t; cin >> t;
    while (t--){
        ans = 0;
        int x,b,c; cin >> x >> b >> c; --b; --c;
        if (x==1){
            if(b-1>=0) cout << sum[c] - sum[b-1] << ln;
            else cout << sum[c] << ln;
        }else{
            if(b-1>=0) cout << ssum[c] - ssum[b-1] << ln;
            else cout << ssum[c] << ln;
        }
    }
}
# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7);
const int mxN = 1e5+5;
//ll a[mxN];
//ll ans = 0;
 
 
int main(){
    int n, k;
    cin >> n >> k;
    k--;
    ll a[n+3], s[n+3];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(i==0) s[i] = a[i];
        else s[i] = s[i-1] + a[i];
    }
    ll ans = s[k];
    int i = 0, ndx = 0;
    for(int j = k+1; j<n; j++){
        if(ans > s[j]-s[i]){
            ans = s[j]-s[i];
            ndx = i+1;
        }
        i++;
    }
    cout << ndx+1 << ln;
}
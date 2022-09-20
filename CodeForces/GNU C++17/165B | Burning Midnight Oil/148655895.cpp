# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
ll sum(ll v, int k){
    ll s = 0;
    for (int i = 0; i < v; i++){
        if (v / pow(k,i) == 0) break;
        s += v / pow(k, i);
    }
    return s;
}
 
ll b_search(ll n, int k){
    ll mn = (n / 2) - 1;
    ll mx = n;
    while(mx > mn){
        ll mid = mn + (mx - mn) / 2;
        ll r = sum(mid, k);
        if (r == n) return mid;
        else if (r < n) mn = mid + 1;
        else mx = mid;
    }
    return mx;
}
 
int main(){
    ll n;
    int k;
    cin >> n >> k;
    if (n <= k){
        cout << n;
        return 0;
    }else cout << b_search(n, k);
}
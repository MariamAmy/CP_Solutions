# include<bits/stdc++.h>
using namespace std;
 
long long sum(long long a){
    return a*(a+1)/2;
}
 
long long sum(long long a, long long b){
    if (a <= 1)
        return sum(b);
    return sum(b) - sum(a-1);
}
 
long long solve(long long n, long long k){
    long long mn = 1, mx = k;
    while (mx > mn){
        long long mid = mn + (mx - mn)/2;
        long long r = sum(mid, k);
        if (r > n) mn = mid + 1;
        else if (r == n) return k - mid + 1;
        else mx = mid;
    }
    return k - mn + 2;
}
 
 
int main(){
    long long n, k;
    cin >> n >> k;
 
    if (n == 1) cout << 0;
    else if (n <= k) cout << 1;
    else{
        n--; k--;
        if (sum(k) < n) cout << -1;
        else cout << solve(n, k);
    }
}
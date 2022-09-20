# include <bits/stdc++.h>
  using namespace std;
#define lp(i, n) for(int i = 0; i < n; i++)
#define ll for long long
int main(){
    long long n, m, a;
    cin >> n >> m >> a;
    long long int ans=(n % a == 0 ? n/a : n/a+1) * (m % a == 0 ? m/a : m/a+1);
    cout<<ans;
}
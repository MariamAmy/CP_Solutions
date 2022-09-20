# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7), mxN = 1e5 + 5, mxM = 1e5 + 5;
//
//int dx[4] = {1, 0, -1, 0};
//int dy[4]= {0, 1, 0, -1};
//char dir[4] = {'D', 'R', 'U', 'L'};
//vector <vector<int>> v;
//vector <bool> vis;
//vector <int> p;
//int n, m, fn, fp;
// y[mxN], z[mxN];
int main(){
    int t, ans;
    bool f = false;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n+1, 0);
        f = false;
        lp(i, n){
            int x;
            cin >> x;
            v[x]++;
            if (v[x] >= 3){
                f = true;
                ans = x;
            }
        }
        if (f)
            cout << ans << ln;
        else cout << -1 << ln;
    }
}
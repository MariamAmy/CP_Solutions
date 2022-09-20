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
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector <int> v(n, 0);
        lp(i, n)
            cin >> v[i];
        int l = 0, r = n - 1;
        int ans = 0;
        int canA = v[0], canB = v[n-1];
        while (l < r){
            if (canA == canB)
                ans = max(ans, (l + 1)+(n - r));
            if (canA <= canB){
                l += 1;
                canA += v[l];
            }
            else if (canB < canA){
                r -= 1;
                canB += v[r];
            }
        }
        cout << ans << ln;
    }
}
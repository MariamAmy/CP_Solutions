# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7), mxN = 105, mxM = 1e5 + 5;
 
int dx[4] = {1, 0, -1, 0};
int dy[4]= {0, 1, 0, -1};
char dir[4] = {'D', 'R', 'U', 'L'};
//vector <vector<int>> v;
//vector <bool> vis;
//vector <int> p;
//int n, m, fn, fp;
int x[mxN], y[mxN], z[mxN];
int main(){
    int sx = 0, sy = 0, sz = 0, n;
    cin >> n;
    lp(i, n){
        cin >> x[i] >> y[i] >> z[i];
        sx += x[i];
        sy += y[i];
        sz += z[i];
    }
    if (sx == 0 && sy == 0 && sz == 0) cout << "YES";
    else cout << "NO";
 
}
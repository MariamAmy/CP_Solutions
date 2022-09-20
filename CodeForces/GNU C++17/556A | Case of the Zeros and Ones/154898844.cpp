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
    int n, t;
    cin >> n;
    int ans = n;
    string s;
    cin >> s;
    lp(i, n){
        if (i == 0) t = s[i];
        else{
            if (t != s[i]){
                ans -= 2;
            }
        }
    }
    cout << abs(ans);
}
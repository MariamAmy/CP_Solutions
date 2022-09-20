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
        bool e1 = false, o1 = false, e2 = false, o2 = false;
        int n;
        cin >> n;
        vector <int> v(n+1, 0);
        for (int i = 1; i <= n; i++){
            cin >> v[i];
            if (i%2 == 1){
                if(v[i]%2 == 1) o1 = true;
                else e1 = true;
            }else{
                if(v[i]%2 == 0) e2 = true;
                else o2 = true;
            }
        }
        if (e1 && o1)
            cout << "NO" << ln;
        else if (e2 && o2)
            cout << "NO" << ln;
        else cout << "YES" << ln;
    }
}
# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7), mxN = 105, mxM = 1e5 + 5;
//
//int dx[4] = {1, 0, -1, 0};
//int dy[4]= {0, 1, 0, -1};
//char dir[4] = {'D', 'R', 'U', 'L'};
//vector <vector<int>> v;
//vector <bool> vis;
//vector <int> p;
//int n, m, fn, fp;
//int x[mxN], y[mxN], z[mxN];
int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if (x >= 1900)
            cout << "Division 1" << ln;
        else if (x >= 1600 && x <= 1899)
            cout << "Division 2" << ln;
        else if (x >= 1400 && x <= 1599)
            cout << "Division 3" << ln;
        else cout << "Division 4" << ln;
    }
}
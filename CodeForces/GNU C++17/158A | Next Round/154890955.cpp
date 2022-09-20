# include<bits/stdc++.h>
using namespace std;
 
 
#define ll long long
#define ln "\n"
#define lp(i, n) for (int i = 0; i < n; i++)
 
const int mod = (int)(1e9 + 7), mxN = 55, mxM = 1e5 + 5;
 
int dx[4] = {1, 0, -1, 0};
int dy[4]= {0, 1, 0, -1};
char dir[4] = {'D', 'R', 'U', 'L'};
//vector <vector<int>> v;
//vector <bool> vis;
//vector <int> p;
//int n, m, fn, fp;
int a[mxN];
int main(){
    int n, k, c = 0;
    cin >> n >> k;
    lp(i, n)
        cin >> a[i];
    int x = a[k-1];
    lp(i, n)
        if (a[i] >= x && a[i] > 0)
            c++;
    cout << c;
}
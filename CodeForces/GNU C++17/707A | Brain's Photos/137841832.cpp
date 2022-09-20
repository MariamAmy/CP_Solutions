#include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main(){
    int n, m;
    cin >> n >> m;
    char g[n][m];
    lp(i, n){
        lp(j, m){
            cin >> g[i][j];
            if (g[i][j] == 'C' || g[i][j] == 'M' || g[i][j] == 'Y'){ cout << "#Color"; return 0;}
        }
    }
    cout << "#Black&White";
}
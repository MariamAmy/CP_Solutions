# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 1; i <= n; i++)
 
 
int main(){
    long long n, m;
    cin >> n >> m;
    long long a[5]={}, b[5]={};
    lp(i, n){
        a[i % 5]++;
    }
    lp(i, m){
        b[i % 5]++;
    }
    cout << (a[0]*b[0] + a[1]*b[4] + a[4]*b[1] + a[2]*b[3] + a[3]*b[2]);
}
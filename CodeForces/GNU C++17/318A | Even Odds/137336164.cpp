# include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i,n) for(int i = 0; i < n; i++)
 
 
int main(){
    long long n, k;
    cin >> n >> k;
    long long c;
    if (n % 2 != 0) c = (n/2)+1;
    else c =n/2;
    if(k <= c) cout << (k * 2) - 1;
    else cout << (k - c) * 2;
}
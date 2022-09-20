# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
int main(){
    long long x;
    cin >> x;
    if (x % 2 == 0) cout << x / 2;
    else{
        x++;
        cout << -x / 2;
    }
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int a [n];
    int s = 0, c = 0, cn =0;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    sort(a, a + n);
    for (int i = n-1; i >= 0; i--){
        c += a[i];
        cn++;
        if (c > (s - c)){
            cout << cn;
            return 0;
        }
    }
 
}
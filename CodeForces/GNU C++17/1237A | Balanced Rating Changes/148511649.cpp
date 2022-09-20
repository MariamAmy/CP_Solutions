# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 1; i <= n; i++)
 
 
int main(){
    int x; cin >> x;
    int c = 1;
    for (int i = 0; i < x; i++){
        int n; cin >> n;
        if (n % 2 == 0) n /= 2;
        else{
            n = (n+c) / 2;
            c *= -1;
        }
        cout << n << endl;
    }
}
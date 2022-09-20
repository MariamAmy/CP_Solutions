#include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main(){
    int n;
    cin >> n;
    char c;
    set <char> d, s;
    lp(i, n){
        lp(j, n){
            cin >> c;
            if ( i == j || i + j == n - 1) d.insert(c);
            else s.insert(c);
        }
    }
    if (d.size() == 1 && s.size() == 1 && s != d) cout << "YES";
    else cout << "NO";
}
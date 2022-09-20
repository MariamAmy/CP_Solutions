# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
int main(){
    int x;
    cin >> x;
    int a[4]={6, 8, 4, 2};
    if(x == 0) cout << 1;
    else cout<<a[x % 4];
}
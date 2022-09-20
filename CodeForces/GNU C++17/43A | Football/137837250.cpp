#include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main()
{
    int n;
    int a = 0, b = 0;
    string s1, s2;
    cin >> n;
    lp(i, n){
        string x;
        cin >> x;
        if (i == 0) s1 = x;
        if (x != s1) s2 = x;
        if(s1 == x) a++;
        else b++;
    }
    if( a > b) cout << s1;
    else cout << s2;
}
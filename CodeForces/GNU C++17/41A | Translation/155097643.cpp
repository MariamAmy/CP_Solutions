#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string s1,s2; cin >> s1 >> s2;
    string a = s1;
    reverse(a.begin(), a.end());
    if (a==s2) cout << "YES";
    else cout << "NO";
}
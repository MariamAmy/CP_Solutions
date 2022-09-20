#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    #define REP(i, a, b) for (int i = a; i < b; i++)
    int x;
    cin >> x;
    string s;
    REP(i, 0, x){
        cin >> s;
        if (s.size() > 10){
            cout << s[0] << s.size()-2 << s[s.size()-1] << '\n';
        }else cout << s << '\n';
    }
 
    return 0;
}
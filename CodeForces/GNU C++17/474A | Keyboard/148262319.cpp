#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c; cin >> c;
    string x; cin >> x;
    if (c == 'R'){
        for(int i = 0; i < x.size(); i++)
            cout << s[s.find(x[i]) - 1];
    }else{
        for(int i = 0; i < x.size(); i++)
            cout << s[s.find(x[i]) + 1];
    }
 
}
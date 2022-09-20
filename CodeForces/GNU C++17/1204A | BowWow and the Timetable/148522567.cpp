#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s; cin >> s; int c = 0;
    for (int i = 0; i < s.length(); i++) if(s[i] == '1') c++;
    if (s.length() % 2 == 1 && c > 1) cout << (s.length() + 1) / 2;
    else cout << s.length() / 2;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    char now = 'a';
    int m=0;
    for (int i=0; i<s.length(); i++){
        if(abs(s[i] - now) < abs((abs(s[i] - now))- 26)){
            m += abs(s[i] - now);
            now = s[i];
        }else m += abs((abs(s[i] - now))- 26); now = s[i];
    }
    cout << m;
return 0;
}
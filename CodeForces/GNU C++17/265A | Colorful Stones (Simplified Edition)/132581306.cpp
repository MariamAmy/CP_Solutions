#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x=1;
    int y=0;
    string s, t;
    cin >> s >> t;
    char is = s[0];
    for (int i=0; i<t.length(); i++){
        if (is == t[i]){
            x++;
            y++;
            is = s[y];
        }
    }
    cout << x;
return 0;
}
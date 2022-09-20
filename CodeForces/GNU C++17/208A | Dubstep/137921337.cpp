# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
int main(){
    string s;
    cin >> s;
    bool b = 1;
    lp(i, s.length()){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i += 2;
            if (b != 1) cout << " ";
        }else{
            b = 0;
            cout << s[i];
        }
    }
}
# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    string s;
    int c = 0, n = 0;
    cin >> s;
    if (s.length() < 2){
        cout << 0;
        return 0;
    }
    while(s.length() > 1){
            for (int i = 0; i < s.length(); i++){
                n += s[i] - '0';
            }
            s = to_string(n);
            n = 0;
            c++;
    }
    cout << c;
    return 0;
}
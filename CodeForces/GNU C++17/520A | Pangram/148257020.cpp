#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    bool p = true;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26){cout << "NO"; return 0;}
    else{
        for(int i = 0; i < s.size(); i++){
            s[i] = tolower(s[i]);
        }
        for(char i = 'a'; i <= 'z'; i++){
            if (s.find(i) == -1) p = false; // s.find() returns the index of the first occurrence of the element
        }
        if (p) cout << "YES";
        else cout << "NO";
    }
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if (i == 0 && s[i] == '9') cout << s[i];
        else if (s[i] >= '5') cout << '9' - s[i];
        else cout << s[i];
    }
}
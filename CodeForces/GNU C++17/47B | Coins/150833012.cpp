# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
 
int main(){
    string s;
    cin >> s;
    pair<char,char> p1 = {s[0], s[2]};
    if(s[1] == '>') swap(p1.first, p1.second);
 
    cin >> s;
    pair<char,char> p2 = {s[0], s[2]};
    if(s[1] == '>') swap(p2.first, p2.second);
 
    cin >> s;
    pair<char,char> p3 = {s[0], s[2]};
 
    if(s[1] == '>') swap(p3.first, p3.second);
    if(p1.first == p2.first) cout << p1.first << p3.first << p3.second << "\n";
    else if(p1.second == p2.second) cout << p3.first << p3.second << p1.second << "\n";
    else if(p1.first == p2.second && p2.first == p3.first) cout << p2.first << p2.second << p3.second << "\n";
    else if(p1.second == p2.first && p1.first == p3.first) cout << p1.first << p1.second << p2.second << "\n";
    else cout << "Impossible";
    return 0;
}
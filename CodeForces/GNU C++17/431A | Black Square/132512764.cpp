#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a[4]={}, t=0;
    string s;
    for(int i=0; i<4; i++){
            cin>>a[i];
    }
    cin>>s;
    for(int j=0; j<s.length(); j++){
            t+= a[(s[j]-'0')-1];
 
    }
    cout<<t;
return 0;
}
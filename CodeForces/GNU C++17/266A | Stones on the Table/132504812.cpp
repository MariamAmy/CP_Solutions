#include <bits/stdc++.h>
using namespace std;
 
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
    int x, c=0;
    string s;
    cin>>x>>s;
    for(int i=0; i<x; i++){
        if(s[i]==s[i+1]) c++;
    }
    cout<<c;
}
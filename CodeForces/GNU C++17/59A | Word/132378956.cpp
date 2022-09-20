#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    int u=0, l=0;
    for(int i=0; i<s.size(); i++){
        if (s[i]<92) u++;
        else l++;
    }
    if (l>=u){
        for(int i=0; i<s.size(); i++)
            s[i]= tolower(s[i]);
        } else{
            for(int i=0; i<s.size(); i++)
            s[i]= toupper(s[i]);
        }
    cout<<s<<endl;
 
 
return 0;
}
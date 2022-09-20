#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x; cin>>x;
    int c=0;
    string a[100005];
    for (int i=0; i<x; ++i){
        cin>>a[i];
    }
    for (int j=0; j<x; ++j){
        if (a[j]!=a[j+1]) c++;
    }
    cout<<c<<endl;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int x, c=0;
    cin >> x;
    int a[x][2];
    for(int i=0; i<x; i++){
        cin >> a[i][0] >> a[i][1];
    }
    for(int i=0; i<x; i++){
        for(int j=i+1; j<x; j++){
            if (a[i][1] == a[j][0]) c++;
            if (a[i][0] == a[j][1]) c++;
        }
    }
    cout<<c;
 
return 0;
}
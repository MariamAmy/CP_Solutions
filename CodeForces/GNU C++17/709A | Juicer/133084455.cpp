#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
ios::sync_with_stdio(0);
cin.tie(0);
 
   int x, y, z, cn = 0, c = 0;
   cin >> x >> y >> z;
   int a[x];
   for (int i = 0; i < x; i++){
        cin >> a[i];
        if (a[i] <= y) c += a[i];
        if(c > z){
            c = 0;
            cn++;
        }
   }
   cout << cn;
return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
   int n, t, b, x, z;
   int ct = 0;
   int t1, t2;
   cin >> n >> t >> b >> x;
   z = (n + b - 1) / b;    // ceil(x/y) = (x + y - 1) / y
   t1 = z * t;
   int v1 = 0, v2 = x;
   for( int i=0; i < z; i++){
        if (v1 <= v2) v1 += t;
        else v2 += t;
   }
   if(max(v1, v2) < t1) cout << "YES";
   else cout << "NO";
   /*if ( b < n) t1 = (ceil(n / b)) * t;
   else t1 = t;
   for (int i = 0; i < n; i += b){
        if (i < x){
            t2 += t;
        }else{
            i += b;
            t2 += t;
        }
   }*/
return 0;
}
#include <bits/stdc++.h>
using namespace std;
 
 
int main(){
   int x, y, m, n, a[x];
   cin >> x;
   for(int i = 0; i < x; i++){
        cin >> a[i];
   }
   cin >> y;
   for(int j = 0; j < y; j++){
        cin >> m >> n;
        if (m-2 >= 0) a[m-2] += n-1;
        if (m < x) a[m] += (a[m-1] - n);
        a[m-1] = 0;
   }
   for(int i = 0; i < x; i++){
        cout << a[i] << endl;
   }
return 0;
}
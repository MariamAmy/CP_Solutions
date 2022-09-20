#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int x, y, r=0;
    int c1=0;
    int c2=0;
    int c3=0;
    cin >> x;
    int m=0;
    int n=0;
    int o=0;
    int a[x], b[x], c[x];
    for (int i = 0; i < x; i++){
            cin >> y;
            if (y == 1){
                c1++;
                a[m] = i+1;
                m++;
            }else if (y == 2){
                c2++;
                b[n] = i+1;
                n++;
            }else{
                c3++;
                c[o] = i+1;
                o++;
            }
    }
    r = min(min(c1, c2), c3);
    cout << r;
    if (r != 0){
        cout << "\n";
        for (int j = 0; j < r; j++){
            cout << a[j] << " " << b[j] << " " << c[j] << "\n";
        }
    }
}
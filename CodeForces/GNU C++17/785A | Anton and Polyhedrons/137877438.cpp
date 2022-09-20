# include <bits/stdc++.h>
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
int main(){
    int x, s = 0;
    cin >> x;
    lp(i, x){
        string ss;
        cin >> ss;
        if (ss == "Icosahedron") s += 20;
        if (ss == "Cube") s += 6;
        if (ss == "Octahedron") s += 8;
        if (ss == "Dodecahedron") s += 12;
        if (ss == "Tetrahedron") s += 4;
    }
    cout << s;
}
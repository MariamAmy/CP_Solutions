#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n; cin >> n;
    int x = n;
    bool a[n+1] = {false};
    while (n--){
        int v; cin >>v;
        a[v] = true;
        while (a[x]){
            cout << x << " ";
            x--;
        }
        cout << endl;
    }
 
}
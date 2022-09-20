#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    //#define REP(i, a, b) for (int i = a; i < b; i++)
    long long n, x;
    cin >> n >> x;
    long long ic = x;
    long long y, c = 0;
    for (int i = 0; i < n; i++){
        char s;
        cin >> s >> y;
        if (s == '+'){
            ic += y;
        }else{
            if (ic >= y){
                ic -= y;
            }else{
                c++;
                //cout << c <<endl;
            }
        }
    }
    cout << ic << " " << c;
}
#include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i, n) for(int i = 0; i < n; i++)
 
int main(){
    int n, t;
    cin >> n >> t;
    if(n == 1 && t == 10) cout << -1;
    else{
            if (t == 10){
                cout << t;
                lp(i, n-2){
                    cout << 0;
                }
            }else{
                cout << t;
                lp(i, n-1){
                    cout << 0;
                }
            }
    }
 
}
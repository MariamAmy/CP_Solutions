# include <bits/stdc++.h>
 
using namespace std;
 
#define lp(i,n) for(int i = 0; i < n; i++)
 
int main(){
    int n;
    cin >> n;
    bool r[n] = {false};
    int p, q;
    cin >> p;
    lp(i, p){
        int a;
        cin >> a;
        r[a-1] = true;
    }
    cin >> q;
    lp(i, q){
        int b;
        cin >> b;
        r[b-1] = true;
    }
    lp(i, sizeof(r)){
        if (r[i] == false){
            cout << "Oh, my keyboard!";
            return 0;
        }
    }
    cout << "I become the guy.";
}
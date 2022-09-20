#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int p, r, m=0;
    cin >> p >> r;
    for (int i=1; i<1000; i++){
        if ( (i*p) % 10 == 0 || (i*p - r) % 10 == 0){
                m+=i;
                cout << m;
                break;
    }
    }
return 0;
}
 